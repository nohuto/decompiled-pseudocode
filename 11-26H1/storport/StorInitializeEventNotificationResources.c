/*
 * XREFs of StorInitializeEventNotificationResources @ 0x1401AFE68
 * Callers:
 *     StorEnableStorageNotification @ 0x1401AFB74 (StorEnableStorageNotification.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 */

__int64 __fastcall StorInitializeEventNotificationResources(PDEVICE_OBJECT DeviceObject)
{
  unsigned int v1; // ebx
  __int64 *v3; // r14
  int v4; // ecx
  _DWORD *RaidAdapter; // rax
  _DWORD *NvmeAdapter; // rax
  __int64 Pool; // rax
  __int64 v8; // rdi
  struct _ERESOURCE *v9; // rcx
  _QWORD *v10; // rax
  PIO_WORKITEM WorkItem; // rax

  v1 = 0;
  v3 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  v4 = *(_DWORD *)DeviceObject->DeviceExtension;
  if ( v4 == 1094997074 )
  {
    RaidAdapter = GetRaidAdapter((__int64)DeviceObject);
    if ( RaidAdapter )
    {
      v3 = (__int64 *)(RaidAdapter + 1568);
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( v4 == 1314275652 )
  {
    NvmeAdapter = GetNvmeAdapter((__int64)DeviceObject);
    if ( !NvmeAdapter )
      return (unsigned int)-1073741811;
    v3 = (__int64 *)(NvmeAdapter + 358);
  }
LABEL_9:
  if ( !*v3 )
  {
    Pool = RaidAllocatePool(64LL, 192LL, 1313169746LL, (__int64)DeviceObject);
    v8 = Pool;
    if ( Pool )
    {
      *(_BYTE *)Pool &= ~1u;
      v9 = (struct _ERESOURCE *)(Pool + 24);
      *(_BYTE *)(Pool + 1) = 0;
      *(_DWORD *)(Pool + 152) = 0;
      v10 = (_QWORD *)(Pool + 8);
      v10[1] = v10;
      *v10 = v10;
      ExInitializeResourceLite(v9);
      *(_QWORD *)(v8 + 136) = v8 + 128;
      *(_QWORD *)(v8 + 128) = v8 + 128;
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 144));
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *(_QWORD *)(v8 + 160) = WorkItem;
      if ( WorkItem )
      {
        KeInitializeEvent((PRKEVENT)(v8 + 168), NotificationEvent, 1u);
        *v3 = v8;
        return v1;
      }
      ExFreePoolWithTag((PVOID)v8, 0x4E456152u);
    }
    return (unsigned int)-1073741670;
  }
  return v1;
}
