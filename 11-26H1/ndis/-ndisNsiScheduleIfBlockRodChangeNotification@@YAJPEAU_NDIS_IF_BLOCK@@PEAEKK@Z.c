/*
 * XREFs of ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140006E90
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140033C40 (-ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400070C0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisNsiScheduleIfBlockRodChangeNotification(
        struct _NDIS_IF_BLOCK *a1,
        unsigned __int8 *a2,
        int a3,
        int a4)
{
  __int64 Pool2; // rax
  struct _NDIS_WORK_ITEM *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // di

  Pool2 = ExAllocatePool2(64LL, 104LL, 1769423950LL);
  v9 = (struct _NDIS_WORK_ITEM *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 80) = a1;
  *(_QWORD *)(Pool2 + 8) = &ndisNsiQueuedIfBlockRodChangeNotification;
  *(_QWORD *)(Pool2 + 88) = a2;
  *(_DWORD *)(Pool2 + 96) = a3;
  *(_DWORD *)(Pool2 + 100) = a4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  LOBYTE(v11) = 10;
  v12 = v10;
  NdisReferenceWithTag(a1->RefCountTracker, v11);
  ++a1->Ref;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v12);
  ndisScheduleWorkItemInternal(v9);
  return 0LL;
}
