/*
 * XREFs of UpdateRawKeyState @ 0x140148288
 * Callers:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021E144 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateModifiersForHotkey @ 0x140148394 (ApiSetEditionUpdateModifiersForHotkey.c)
 */

__int64 __fastcall UpdateRawKeyState(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  unsigned int v4; // r14d
  char v5; // si
  unsigned __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // rax
  int v9; // r8d
  char v10; // cl
  int v11; // edx
  __int64 v12; // rax
  __int64 UserSessionState; // rax
  int v14; // ecx
  __int64 v15; // rdx

  v4 = a2;
  v5 = a1 & 3;
  v6 = (unsigned __int64)a1 >> 2;
  v7 = 2 * (a1 & 3);
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    v14 = *(unsigned __int8 *)(UserSessionState + v6 + 14392) & ~(1 << v7);
  }
  else
  {
    v8 = W32GetUserSessionState(a1, 0, a3);
    v10 = 2 * v5;
    LOBYTE(v11) = *(_BYTE *)(v8 + v6 + 14392);
    if ( ((unsigned __int8)v11 & (unsigned __int8)(1 << v7)) == 0 )
    {
      v12 = W32GetUserSessionState(v7, (_BYTE)v11, v9);
      v10 = 2 * v5 + 1;
      v11 = *(unsigned __int8 *)(v12 + v6 + 14392) ^ (1 << v10);
      *(_BYTE *)(v12 + v6 + 14392) = v11;
    }
    UserSessionState = W32GetUserSessionState(v10, (_BYTE)v11, v9);
    v14 = *(unsigned __int8 *)(UserSessionState + v6 + 14392) | (1 << v7);
  }
  *(_BYTE *)(UserSessionState + v6 + 14392) = v14;
  if ( (unsigned __int8)(a1 - 16) <= 2u )
  {
    v15 = 4 >> (a1 - 16);
  }
  else
  {
    v15 = 8LL;
    if ( (unsigned __int8)(a1 - 91) > 1u )
      v15 = 0LL;
  }
  return ApiSetEditionUpdateModifiersForHotkey(v4, v15);
}
