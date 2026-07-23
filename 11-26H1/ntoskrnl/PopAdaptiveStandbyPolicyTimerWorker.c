/*
 * XREFs of PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E4B50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
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
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&word_14004FC16,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v7);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0BCB8);
  if ( byte_140F0BC24 )
  {
    byte_140F0BC24 = 0;
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)&PopAdaptiveStandbyContext, 0LL);
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&qword_14004FC38,
      &ActivityId,
      v6,
      2u,
      v7);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v6);
}
