/*
 * XREFs of _SetTaskmanWindow @ 0x14022241C
 * Callers:
 *     NtUserSetTaskmanWindow @ 0x1402264E0 (NtUserSetTaskmanWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetTaskmanWindow(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rax
  _QWORD *v6; // r8
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PtiCurrent(a1, a2);
  v4 = 0LL;
  v5 = (__int64 *)*((_QWORD *)v3 + 63);
  v6 = v5 + 23;
  if ( a1 && *v6 )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    v8 = *v5;
    if ( a1 )
      v4 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v8 + 32) = v4;
    v9[0] = v6;
    v9[1] = a1;
    HMAssignmentLock(v9, 0LL);
    return 1LL;
  }
}
