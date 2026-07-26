/*
 * XREFs of ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14001C9E0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     NdisIfDeregisterInterface @ 0x1401698F0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140015D10 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019D10 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14001D4D0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14007B420 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x140137840 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x140163D60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, int a2)
{
  int v2; // edi
  struct _NDIS_IF_BLOCK *Interface; // rax
  KIRQL v5; // dl
  struct _NDIS_IF_BLOCK *v6; // rbx
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rbp
  KIRQL v10; // di
  int v11; // r9d
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  KIRQL v13; // di
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      14,
      (struct _GUID *)&WPP_3f36a8145c46374a55ba7bb1149603fd_Traceguids,
      a1);
  }
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  Interface = ndisIfFindInterface(a1);
  v6 = Interface;
  if ( Interface->AlreadyDeregistered )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v11 = 15;
    LOBYTE(v7) = 3;
LABEL_16:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      22,
      v11,
      (struct _GUID *)&WPP_3f36a8145c46374a55ba7bb1149603fd_Traceguids,
      a1);
    return;
  }
  Interface->AlreadyDeregistered = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v5);
  if ( !v6 )
    goto LABEL_6;
  v8 = ndisIfReferenceMiniport(v6, 0x14u);
  v9 = v8;
  if ( v8 )
  {
    ndisMSetMiniportReadyForBinding(v8, 0, Reason_MiniportInterfaceDeregister, RunSynchronous);
    NdisMRemoveMiniportInternal(v9, NdisMEventErr_UninstalledByUsermode);
    ndisIfDereferenceMiniport(v6, v12, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL, 1LL);
  if ( v2 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    IFBLOCK_DECREMENT_REF(v6, 0xFFu);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v10);
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    IFBLOCK_DECREMENT_REF(v6, 0xFFu);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v13);
    ndisWaitForKernelObject(&Event);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 16;
    LOBYTE(v7) = 4;
    goto LABEL_16;
  }
}
