/*
 * XREFs of PopAdaptiveStandbyActionWorker @ 0x1407E2C70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407DA1E0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

struct _KTHREAD *PopAdaptiveStandbyActionWorker()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  int v4; // ebx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-19h]
  int v17; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v19; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+50h] [rbp+17h] BYREF
  int *v21; // [rsp+70h] [rbp+37h]
  __int64 v22; // [rsp+78h] [rbp+3Fh]

  v19 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v19 = (GUID *)v0;
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&byte_14005043F,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v20);
  while ( 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
    v4 = dword_140F0BD04;
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      v17 = dword_140F0BD04;
      v21 = &v17;
      v22 = 4LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)byte_14005046B,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v20);
    }
    if ( !v4 )
      break;
    dword_140F0BD04 = 0;
    PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
    PopAcquirePolicyLock(v7, v6);
    PopPowerAggregatorTriggerAdaptiveAction(v4, v8, v9, v10);
    PopReleasePolicyLock(v12, v11, v13, v14, v16);
  }
  byte_140F0BD00 = 0;
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&byte_1400504A7,
      &ActivityId,
      v19,
      2u,
      v20);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v19);
}
