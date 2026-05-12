/*
 * XREFs of RaFlushDFxQueue @ 0x1400731D4
 * Callers:
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1400819B0 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x140081A80 (StorPortAdapterDirectedPowerUpRequestD0.c)
 *     StorPortUnitDirectedPowerUpCompletion @ 0x140082390 (StorPortUnitDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1400823C8 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     NvmeAdapterDirectedPowerUpCompletion @ 0x140123630 (NvmeAdapterDirectedPowerUpCompletion.c)
 *     NvmeAdapterDirectedPowerUpRequestD0 @ 0x1401236F8 (NvmeAdapterDirectedPowerUpRequestD0.c)
 *     NvmeNamespaceDirectedPowerUpCompletion @ 0x140127C60 (NvmeNamespaceDirectedPowerUpCompletion.c)
 *     NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140127CA4 (NvmeNamespaceDirectedPowerUpRequestD0.c)
 * Callees:
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 */

void __fastcall RaFlushDFxQueue(struct _DEVICE_OBJECT *a1)
{
  struct _IO_WORKITEM *WorkItem; // r10
  _DWORD *DeviceExtension; // rax
  int v4; // edx
  _QWORD *v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax

  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    DeviceExtension = a1->DeviceExtension;
    v4 = *DeviceExtension;
    if ( *DeviceExtension == 1094997074 )
    {
      v5 = GetRaidAdapter((__int64)a1) + 1452;
LABEL_6:
      v6 = *v5 == (_QWORD)v5;
      goto LABEL_11;
    }
    switch ( v4 )
    {
      case 1431193940:
        v5 = DeviceExtension + 874;
        goto LABEL_6;
      case 1314275652:
        v7 = *((_QWORD *)GetNvmeAdapter((__int64)a1) + 20);
        if ( !v7 )
          return;
        v8 = (_QWORD *)(v7 + 144);
        goto LABEL_10;
      case 1314278989:
        v9 = *((_QWORD *)GetNvmeNamespace((__int64)a1) + 16);
        if ( v9 )
        {
          v8 = (_QWORD *)(v9 + 104);
LABEL_10:
          v6 = *v8 == (_QWORD)v8;
LABEL_11:
          if ( !v6 )
            IoQueueWorkItem(WorkItem, RaProcessDFxQueuedRequests, CriticalWorkQueue, WorkItem);
        }
        break;
    }
  }
}
