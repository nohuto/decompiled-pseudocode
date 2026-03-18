/*
 * XREFs of ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401B9B48
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1401481D0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?_GetStackTraceSum@@YAKXZ @ 0x1401B99F8 (-_GetStackTraceSum@@YAKXZ.c)
 *     ?_IsSyscallThrottled@@YAHK@Z @ 0x1401B9B08 (-_IsSyscallThrottled@@YAHK@Z.c)
 */

__int64 __fastcall _ShouldCaptureWerReport(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  int StackTraceSum; // eax
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  int v10; // ebx
  int IsSyscallThrottled; // eax

  v2 = 0;
  v3 = a1;
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (_DWORD)gdwServiceFilterAuditThrottleMode )
    {
      if ( (_DWORD)gdwServiceFilterAuditThrottleMode == 1 )
        LOBYTE(v2) = (unsigned int)_IsSyscallThrottled(a1, a2) == 0;
    }
    else
    {
      StackTraceSum = _GetStackTraceSum();
      v5 = StackTraceSum ^ HIWORD(StackTraceSum);
      UserSessionState = W32GetUserSessionState(v7, v6);
      v9 = 4 * (((unsigned __int64)v5 >> 5) % ((unsigned __int64)gstServiceFilterAuditStackCacheSize >> 2));
      v10 = (unsigned __int8)_interlockedbittestandset(
                               (volatile signed __int32 *)(*(_QWORD *)(UserSessionState + 70904) + v9),
                               v5 & 0x1F);
      IsSyscallThrottled = _IsSyscallThrottled(v3, v9);
      if ( !v10 || !IsSyscallThrottled )
        return 1;
    }
  }
  return v2;
}
