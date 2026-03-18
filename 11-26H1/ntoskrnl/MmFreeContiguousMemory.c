/*
 * XREFs of MmFreeContiguousMemory @ 0x140344580
 * Callers:
 *     HvlpFreeOverlayPages @ 0x140344280 (HvlpFreeOverlayPages.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403442A0 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x140344560 (HalFreeCommonBufferV2.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405314CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x140588C88 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalFreeCommonBufferV3 @ 0x140589E20 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140597C14 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x140597E30 (ExtEnvFreePhysicalMemory.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059D61C (IommuHvInitializeSvmLibrary.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405B9830 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     DifMmFreeContiguousMemorySpecifyCacheWrapper @ 0x1406668D0 (DifMmFreeContiguousMemorySpecifyCacheWrapper.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x140666A40 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B62D30 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
 *     IopInitializeInMemoryDumpData @ 0x140CBA480 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     ExRemovePoolTag @ 0x1403447D0 (ExRemovePoolTag.c)
 *     EtwTraceContFreeEvent @ 0x14034539C (EtwTraceContFreeEvent.c)
 *     MiFillPteHierarchy @ 0x14039FA50 (MiFillPteHierarchy.c)
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14050818C (MiLogPerfMemoryRangeEvent.c)
 *     VfPtMiscPoolNotification @ 0x14050C738 (VfPtMiscPoolNotification.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  __int64 v3; // r11
  __int64 *v4; // rcx
  __int64 v5; // rsi
  _OWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF

  memset(v6, 0, sizeof(v6));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType != 4 )
  {
    if ( !SystemRegionType )
      KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    MiFillPteHierarchy(BaseAddress, v6);
    do
    {
      if ( !(_DWORD)v3 )
        break;
      v3 = (unsigned int)(v3 - 1);
      v4 = (__int64 *)*((_QWORD *)v6 + v3);
      v5 = *v4;
      if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v5) = MiReadPteShadow((unsigned __int64)v4, *v4);
    }
    while ( (v5 & 0x80u) == 0LL );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExRemovePoolTag((ULONG_PTR)BaseAddress);
    KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  EtwTraceContFreeEvent(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}
