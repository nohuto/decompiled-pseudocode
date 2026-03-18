/*
 * XREFs of ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1401E0228
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140184A50 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?_GetStackTraceSum@@YAKXZ @ 0x1401E00CC (-_GetStackTraceSum@@YAKXZ.c)
 *     ?_IsSyscallThrottled@@YAHK@Z @ 0x1401E01DC (-_IsSyscallThrottled@@YAHK@Z.c)
 */

__int64 __fastcall _ShouldCaptureWerReport(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // edi
  int StackTraceSum; // eax
  unsigned __int16 v6; // bx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v11; // r8d
  unsigned __int64 v12; // rdx
  int v13; // ebx
  int IsSyscallThrottled; // eax

  v3 = 0;
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (_DWORD)gdwServiceFilterAuditThrottleMode )
    {
      if ( (_DWORD)gdwServiceFilterAuditThrottleMode == 1 )
        LOBYTE(v3) = (unsigned int)_IsSyscallThrottled(a1, a2, a3) == 0;
    }
    else
    {
      StackTraceSum = _GetStackTraceSum();
      v6 = StackTraceSum ^ HIWORD(StackTraceSum);
      UserSessionState = W32GetUserSessionState(v8, v7, v9);
      v11 = v6 & 0x1F;
      v12 = ((unsigned __int64)v6 >> 5) % ((unsigned __int64)gstServiceFilterAuditStackCacheSize >> 2);
      v13 = (unsigned __int8)_interlockedbittestandset(
                               (volatile signed __int32 *)(*(_QWORD *)(UserSessionState + 70888) + 4 * v12),
                               v11);
      IsSyscallThrottled = _IsSyscallThrottled(a1, v12, v11);
      if ( !v13 || !IsSyscallThrottled )
        return 1;
    }
  }
  return v3;
}
