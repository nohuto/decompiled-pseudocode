/*
 * XREFs of ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007EB20
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140164990 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     NdisNblTrackerDeregisterComponent @ 0x140054C00 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054E30 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFreeOpenBlock(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
  void *v5; // rcx
  void *v6; // rdi

  v2 = (void *)*((_QWORD *)P + 87);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 87) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 88);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)P + 88) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)P + 73));
  NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 74));
  v4 = *((_QWORD *)P + 90);
  *((_QWORD *)P + 74) = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)*((_QWORD *)P + 60);
  *((_QWORD *)P + 90) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 60) = 0LL;
  }
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (void *)*((_QWORD *)P + 128);
    if ( v6 )
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))v6)(*((_QWORD *)P + 128), 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  ExFreePoolWithTag(P, 0);
}
