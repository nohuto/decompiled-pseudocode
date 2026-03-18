/*
 * XREFs of PopAdaptiveStandbyActionWorker @ 0x1407DE5F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-19h]
  int v14; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v16; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+50h] [rbp+17h] BYREF
  int *v18; // [rsp+70h] [rbp+37h]
  __int64 v19; // [rsp+78h] [rbp+3Fh]

  v16 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v16 = (GUID *)v0;
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F16D,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v17);
  while ( 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
    v4 = dword_140F0B974;
    if ( (unsigned int)dword_140E08090 > 5 )
    {
      v14 = dword_140F0B974;
      v18 = &v14;
      v19 = 4LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)byte_14004F199,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v17);
    }
    if ( !v4 )
      break;
    dword_140F0B974 = 0;
    PopReleaseRwLock(&PopAdaptiveStandbyLock);
    PopAcquirePolicyLock(v7, v6);
    PopPowerAggregatorTriggerAdaptiveAction(v4);
    PopReleasePolicyLock(v9, v8, v10, v11, v13);
  }
  byte_140F0B970 = 0;
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F1D5,
      &ActivityId,
      v16,
      2u,
      v17);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v16);
}
