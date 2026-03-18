/*
 * XREFs of PopRecordLidStateWorker @ 0x140B544B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 PopRecordLidStateWorker()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // [rsp+20h] [rbp-8h]

  result = PopOkayToQueueNextWorkItem((__int64)&stru_140F12420.ReadOperationCount);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock(v2, v1);
    v3 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock(v5, v4, v6, v7, v11);
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v8, v9, v10);
    stru_140E66FF0.SavedApcStateFill[35] = v3 | stru_140E66FF0.SavedApcStateFill[35] & 0x3F;
    HIDWORD(PopModernStandbyStateNotify.SchedulerSharedSwappablePage) = stru_140E66FF0.SavedApcStateFill[35] >> 6;
    PopBsdHandleRequest(1u);
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  return result;
}
