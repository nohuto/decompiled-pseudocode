/*
 * XREFs of ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054530
 * Callers:
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1400544E0 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007E9C0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C7EE0 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ndisAllocateFreeSlot @ 0x1400545F0 (ndisAllocateFreeSlot.c)
 *     ndisAllocateFreeSlotFromDescriptor @ 0x140064510 (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1400C7D5C (ndisAllocatePerProcessorPageDescriptor.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocatePerProcessorSlot(unsigned int a1)
{
  KIRQL v2; // si
  __int64 FreeSlot; // rdi
  __int64 PerProcessorPageDescriptor; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  if ( (a1 & 0xFE000000) == 0xFE000000 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
  FreeSlot = ndisAllocateFreeSlot(a1);
  if ( !FreeSlot )
  {
    PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
    if ( PerProcessorPageDescriptor )
    {
      FreeSlot = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, a1);
      v7 = ndisPerProcessorDescriptorList;
      if ( *((void ***)ndisPerProcessorDescriptorList + 1) != &ndisPerProcessorDescriptorList )
        __fastfail(3u);
      *v6 = ndisPerProcessorDescriptorList;
      v6[1] = &ndisPerProcessorDescriptorList;
      v7[1] = v6;
      ndisPerProcessorDescriptorList = v6;
    }
  }
  KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v2);
  return (struct PNDIS_PER_PROCESSOR_SLOT__ *)FreeSlot;
}
