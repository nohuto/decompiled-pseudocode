/*
 * XREFs of PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E0110
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 */

struct _KTHREAD *PopAdaptiveStandbyPolicyTimerWorker()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  GUID *v6; // [rsp+40h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v6 = (GUID *)v0;
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)&byte_14004F667,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v7);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0B928);
  if ( byte_140F0B894 )
  {
    byte_140F0B894 = 0;
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)&PopAdaptiveStandbyContext, 0LL);
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F689,
      &ActivityId,
      v6,
      2u,
      v7);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v6);
}
