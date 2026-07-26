/*
 * XREFs of ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007D9D0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009D4F0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1400619B0 (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x140165B60 (-ndisFInvokeDevicePnPEventNotify@@_Y2PAGE@@AXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1401669E0 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdx
  __int64 v2; // rsi
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _NDIS_FILTER_BLOCK *LowerFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v5; // rbx
  KIRQL v6; // r15
  _NET_DEVICE_PNP_EVENT **p_DevicePnPEvents; // rcx
  KIRQL v8; // si
  unsigned __int16 ReferenceCount; // cx
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  unsigned int Flags; // ebx
  KIRQL v13; // al
  KIRQL v14; // bp
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD Parametera[8]; // [rsp+48h] [rbp-40h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v2 = Parameter[3];
  Miniport = v1->Miniport;
  LowerFilterWithPnpRef = ndisGetLowerFilterWithPnpRef(Miniport, v1, 5u);
  v5 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    if ( LowerFilterWithPnpRef->FilterDriver->DefaultFilterCharacteristics.DevicePnPEventNotifyHandler )
    {
      ndisFInvokeDevicePnPEventNotify(LowerFilterWithPnpRef, (struct _NET_DEVICE_PNP_EVENT *)v2);
      ndisDereferenceRef(&v5->PnPRef.SpinLock, 5u);
    }
    else
    {
      Parametera[1] = LowerFilterWithPnpRef;
      Parametera[0] = 0LL;
      Parametera[2] = 0LL;
      Parametera[3] = v2;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDevicePnPEventNotifyInternal, Parametera, (unsigned int)Size, 0, 0LL) < 0 )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v6 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
        v5->LockThread = KeGetCurrentThread();
        p_DevicePnPEvents = &v5->StackExpansionFallback.PendingWork.DevicePnPEvents;
        if ( v5->StackExpansionFallback.PendingWork.DevicePnPEvents )
          p_DevicePnPEvents = (_NET_DEVICE_PNP_EVENT **)(v2 + 28);
        *p_DevicePnPEvents = (_NET_DEVICE_PNP_EVENT *)v2;
        *(_QWORD *)(v2 + 36) = &Event;
        *(_QWORD *)(v2 + 28) = 0LL;
        if ( !v5->StackExpansionFallback.WorkItemQueued )
        {
          v8 = KeAcquireSpinLockRaiseToDpc(&v5->Ref.SpinLock);
          if ( !v5->Ref.Closing )
          {
            ReferenceCount = v5->Ref.ReferenceCount;
            if ( ReferenceCount >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
            }
            else
            {
              v5->Ref.ReferenceCount = ReferenceCount + 1;
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5->Ref.RefCountTracker, 1u);
            }
          }
          KeReleaseSpinLock(&v5->Ref.SpinLock, v8);
          v5->StackExpansionFallback.WorkItemQueued = 1;
          ExQueueWorkItem(&v5->StackExpansionFallback.WorkItem, NormalWorkQueue);
        }
        v5->LockThread = 0LL;
        KeReleaseSpinLock(&v5->Lock, v6);
        ndisWaitForKernelObject(&Event);
      }
      ndisDereferenceRef(&v5->PnPRef.SpinLock, 5u);
    }
  }
  else if ( Miniport->MajorNdisVersion >= 6u )
  {
    if ( (Miniport->Flags & 0x80u) == 0 && (Miniport->Flags & 0x100) == 0 )
    {
      if ( Miniport->SelectiveSuspend )
      {
        if ( (Miniport->Flags & 0x80u) == 0 )
          ndisWdmSetBusySync(Miniport, 37LL, 0LL);
        else
          ndisWdfSetBusySync(Miniport, 37LL, 0LL);
      }
      ndisMInvokeDevicePnPEventNotifyHandler(Miniport, (struct _NET_DEVICE_PNP_EVENT *)v2);
      SelectiveSuspend = Miniport->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        Flags = Miniport->Flags;
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Miniport->SelectiveSuspend);
        --*((_DWORD *)SelectiveSuspend + 129);
        v14 = v13;
        if ( (Flags & 0x80u) != 0
          && !*((_DWORD *)SelectiveSuspend + 128)
          && !*((_DWORD *)SelectiveSuspend + 129)
          && !*((_DWORD *)SelectiveSuspend + 132)
          && !*((_DWORD *)SelectiveSuspend + 133)
          && !*((_DWORD *)SelectiveSuspend + 130)
          && !*((_DWORD *)SelectiveSuspend + 131)
          && !*((_DWORD *)SelectiveSuspend + 144)
          && !*((_DWORD *)SelectiveSuspend + 127) )
        {
          CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(Miniport);
          CxBlockFromMiniport->Chars.EvtCxPowerDereference(Miniport->MiniportAdapterContext);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
      }
    }
  }
  else
  {
    PnPEventNotifyHandler = Miniport->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        Miniport->MiniportAdapterContext,
        *(_NDIS_DEVICE_PNP_EVENT *)(v2 + 8),
        *(void **)(v2 + 16),
        *(_DWORD *)(v2 + 24));
  }
}
