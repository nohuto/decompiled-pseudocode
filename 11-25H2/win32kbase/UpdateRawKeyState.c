/*
 * XREFs of UpdateRawKeyState @ 0x1401084FC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021971C (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateModifiersForHotkey @ 0x140108608 (ApiSetEditionUpdateModifiersForHotkey.c)
 */

__int64 __fastcall UpdateRawKeyState(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned int v3; // r14d
  int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 UserSessionState; // rax
  int v12; // ecx
  __int64 v13; // rdx

  v2 = a1;
  v3 = (unsigned __int8)a2;
  v4 = a1 & 3;
  v5 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v6 = 2 * v4;
  if ( (_BYTE)a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v12 = *(unsigned __int8 *)(UserSessionState + v5 + 14400) & ~(1 << v6);
  }
  else
  {
    v7 = W32GetUserSessionState(a1, a2);
    v8 = v6;
    LOBYTE(v9) = *(_BYTE *)(v5 + v7 + 14400);
    if ( ((unsigned __int8)v9 & (unsigned __int8)(1 << v6)) == 0 )
    {
      v10 = W32GetUserSessionState(v6, v9);
      v8 = (unsigned int)(2 * v4 + 1);
      v9 = *(unsigned __int8 *)(v10 + v5 + 14400);
      LODWORD(v9) = v9 ^ (1 << (2 * v4 + 1));
      *(_BYTE *)(v10 + v5 + 14400) = v9;
    }
    UserSessionState = W32GetUserSessionState(v8, v9);
    v12 = *(unsigned __int8 *)(UserSessionState + v5 + 14400) | (1 << v6);
  }
  *(_BYTE *)(UserSessionState + v5 + 14400) = v12;
  if ( (unsigned __int8)(v2 - 16) <= 2u )
  {
    v13 = 4 >> (v2 - 16);
  }
  else
  {
    v13 = 8LL;
    if ( (unsigned __int8)(v2 - 91) > 1u )
      v13 = 0LL;
  }
  return ApiSetEditionUpdateModifiersForHotkey(v3, v13);
}
