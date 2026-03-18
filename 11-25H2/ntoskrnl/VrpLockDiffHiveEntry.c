/*
 * XREFs of VrpLockDiffHiveEntry @ 0x14094B6C0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall VrpLockDiffHiveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 24);
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire(a1 + 24, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
