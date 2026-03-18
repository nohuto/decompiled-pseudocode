/*
 * XREFs of ?_SetFallbackForeground@@YAHPEAUtagWND@@K@Z @ 0x140293C40
 * Callers:
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall _SetFallbackForeground(struct tagWND *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 3) + 296LL;
    v8[1] = a1;
    v8[0] = v3;
    HMAssignmentLock(v8, 0LL);
  }
  else
  {
    v6 = PtiCurrent(0LL, a2);
    HMAssignmentUnlock(*((_QWORD *)v6 + 62) + 296LL);
  }
  if ( v2 != 1 )
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18896) = 0LL;
  return 1LL;
}
