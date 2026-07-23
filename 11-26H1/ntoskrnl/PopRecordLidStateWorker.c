/*
 * XREFs of PopRecordLidStateWorker @ 0x140B56D50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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

  result = PopOkayToQueueNextWorkItem((__int64)&PopRecordLidStateWorkItem);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock(v2, v1);
    v3 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock(v5, v4, v6, v7, v11);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v8, v9, v10);
    HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) = v3 | HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) & 0x3F;
    *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[36] = HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) >> 6;
    PopBsdHandleRequest(1u);
    return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  return result;
}
