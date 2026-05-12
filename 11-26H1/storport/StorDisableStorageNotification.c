/*
 * XREFs of StorDisableStorageNotification @ 0x1401AFAA4
 * Callers:
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x14006B13C (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019F2EC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 * Callees:
 *     StorNotificationCompletePendingIrps @ 0x14005C084 (StorNotificationCompletePendingIrps.c)
 *     StorGetEventNotificationContext @ 0x14012C6D0 (StorGetEventNotificationContext.c)
 *     StorNotificationFindCallerContextByGuid @ 0x14012CC68 (StorNotificationFindCallerContextByGuid.c)
 */

__int64 __fastcall StorDisableStorageNotification(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 EventNotificationContext; // rdi
  struct _ERESOURCE *v5; // rbp
  _QWORD *CallerContextByGuid; // rax
  _QWORD *v7; // rdi

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  EventNotificationContext = StorGetEventNotificationContext(a1);
  if ( !EventNotificationContext )
    return 3221225485LL;
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(EventNotificationContext + 24);
  ExAcquireResourceExclusiveLite((PERESOURCE)(EventNotificationContext + 24), 1u);
  CallerContextByGuid = StorNotificationFindCallerContextByGuid(EventNotificationContext, (_QWORD *)(a2 + 40));
  v7 = CallerContextByGuid;
  if ( CallerContextByGuid )
  {
    if ( (CallerContextByGuid[4] & 1) != 0 )
    {
      StorNotificationCompletePendingIrps((__int64)CallerContextByGuid, -1073741536);
      *((_WORD *)v7 + 16) &= ~1u;
    }
  }
  else
  {
    v2 = -1073741275;
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v2;
}
