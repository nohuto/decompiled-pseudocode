/*
 * XREFs of StorEnableStorageNotification @ 0x1401AFB74
 * Callers:
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x14006B13C (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019F2EC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorGetEventNotificationContext @ 0x14012C6D0 (StorGetEventNotificationContext.c)
 *     StorNotificationFindCallerContextByGuid @ 0x14012CC68 (StorNotificationFindCallerContextByGuid.c)
 *     StorInitializeEventNotificationResources @ 0x1401AFE68 (StorInitializeEventNotificationResources.c)
 */

__int64 __fastcall StorEnableStorageNotification(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v3; // edi
  __int64 EventNotificationContext; // rsi
  __int64 result; // rax
  _QWORD *CallerContextByGuid; // rax
  _QWORD *v8; // rbx
  __int64 Pool; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  v3 = 0;
  EventNotificationContext = StorGetEventNotificationContext((__int64)DeviceObject);
  if ( !EventNotificationContext )
  {
    result = StorInitializeEventNotificationResources(DeviceObject);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    EventNotificationContext = StorGetEventNotificationContext((__int64)DeviceObject);
    if ( !EventNotificationContext )
      return 3221225860LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(EventNotificationContext + 24), 1u);
  if ( *(_BYTE *)(EventNotificationContext + 1) < 8u )
  {
    CallerContextByGuid = StorNotificationFindCallerContextByGuid(EventNotificationContext, (_QWORD *)(a2 + 40));
    v8 = CallerContextByGuid;
    if ( CallerContextByGuid )
    {
      if ( (CallerContextByGuid[4] & 1) != 0 )
      {
        v3 = -1073741725;
        goto LABEL_16;
      }
    }
    else
    {
      Pool = RaidAllocatePool(64LL, 176LL, 1313169746LL, (__int64)DeviceObject);
      v8 = (_QWORD *)Pool;
      if ( !Pool )
      {
        v3 = -1073741670;
        goto LABEL_16;
      }
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 144));
      v8[20] = v8 + 19;
      v8[19] = v8 + 19;
      IoCsqInitialize(
        (PIO_CSQ)(v8 + 10),
        (PIO_CSQ_INSERT_IRP)StorNotificationCsqInsertIrp,
        (PIO_CSQ_REMOVE_IRP)StorNotificationCsqRemoveIrp,
        (PIO_CSQ_PEEK_NEXT_IRP)StorNotificationCsqPeekNextIrp,
        (PIO_CSQ_ACQUIRE_LOCK)StorNotificationCsqAcquireLock,
        (PIO_CSQ_RELEASE_LOCK)StorNotificationCsqReleaseLock,
        (PIO_CSQ_COMPLETE_CANCELED_IRP)StorNotificationCsqCompleteCanceledIrp);
      v10 = *(_QWORD **)(EventNotificationContext + 16);
      if ( *v10 != EventNotificationContext + 8 )
        __fastfail(3u);
      *v8 = EventNotificationContext + 8;
      v8[1] = v10;
      *v10 = v8;
      *(_QWORD *)(EventNotificationContext + 16) = v8;
      ++*(_BYTE *)(EventNotificationContext + 1);
    }
    v11 = *(_OWORD *)(a2 + 40);
    v8[21] = DeviceObject;
    *((_OWORD *)v8 + 1) = v11;
    v12 = *(_OWORD *)(a2 + 24);
    *((_WORD *)v8 + 16) |= 1u;
    *((_OWORD *)v8 + 3) = v12;
    *((_WORD *)v8 + 18) = 0;
    *((_WORD *)v8 + 17) = *(unsigned __int8 *)(a2 + 16);
    goto LABEL_16;
  }
  v3 = -1073741756;
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(EventNotificationContext + 24));
  KeLeaveCriticalRegion();
  return v3;
}
