/*
 * XREFs of _GetKeyboardState @ 0x1401BD130
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1400D300C (ApiSetEditionIsGetKeyStateBlocked.c)
 *     IsKeyStateCached @ 0x1400E8580 (IsKeyStateCached.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 */

char __fastcall GetKeyboardState(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  struct tagTHREADINFO *v3; // rbx
  char v4; // si
  __int64 v5; // rbp
  __int64 v6; // rcx
  int KeyStateBlocked; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  __int64 UserSessionState; // rax
  int i; // ebx
  unsigned __int64 v17; // r10
  char v18; // r8
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]

  v2 = (_BYTE *)a1;
  v3 = PtiCurrent(a1, a2);
  v4 = 1;
  v5 = *((_QWORD *)v3 + 58);
  KeyStateBlocked = ApiSetEditionIsGetKeyStateBlocked(v6);
  if ( KeyStateBlocked )
    goto LABEL_4;
  KeyStateBlocked = ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL);
  if ( !KeyStateBlocked )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18928);
    v12 = *(_DWORD *)(v11 + 480);
    v20 = *(_QWORD *)(v11 + 472);
    v21 = v12;
    UserSessionState = W32GetUserSessionState(v11, v13, v14);
    LOBYTE(KeyStateBlocked) = (unsigned __int8)EtwTraceUIPIInputError(
                                                 (__int64)v3,
                                                 0LL,
                                                 *(_QWORD *)(UserSessionState + 18928),
                                                 &v20,
                                                 3);
LABEL_4:
    v4 = 0;
  }
  for ( i = 0; i < 256; ++i )
  {
    *v2 = 0;
    if ( v4 || (LOBYTE(KeyStateBlocked) = IsKeyStateCached(i), (_BYTE)KeyStateBlocked) )
    {
      v17 = (unsigned __int64)(unsigned __int8)i >> 2;
      v18 = 0;
      if ( ((unsigned __int8)(1 << (2 * (i & 3))) & *(_BYTE *)(v17 + v5 + 280)) != 0 )
      {
        *v2 = 0x80;
        v18 = 0x80;
      }
      if ( ((unsigned __int8)(1 << (2 * (i & 3) + 1)) & *(_BYTE *)(v17 + v5 + 280)) != 0 )
        *v2 = v18 | 1;
    }
    ++v2;
  }
  return KeyStateBlocked;
}
