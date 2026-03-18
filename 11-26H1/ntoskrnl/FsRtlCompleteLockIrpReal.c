/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1403FD938
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402BFAE8 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlUninitializeFileLock @ 0x1403B49B0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403FD6C0 (FsRtlProcessFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140505750 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall FsRtlCompleteLockIrpReal(__int64 a1, __int64 a2, IRP *a3, NTSTATUS a4, _DWORD *a5, __int64 a6)
{
  int v6; // ebx
  _DWORD *result; // rax

  v6 = a4;
  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    v6 = guard_dispatch_icall_no_overrides(a2, a3);
  }
  else
  {
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 1);
  }
  result = a5;
  *a5 = v6;
  return result;
}
