/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x140357FFC
 * Callers:
 *     HalpAllocatePmcCounterSetEx @ 0x140355F20 (HalpAllocatePmcCounterSetEx.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140356984 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140357F00 (HalpBuddyAllocatorSplitNode.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpCmciInitializeErrorPacket @ 0x140454B28 (HalpCmciInitializeErrorPacket.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14047BD64 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpIommuGetDeviceId @ 0x1404F6EB0 (HalpIommuGetDeviceId.c)
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     HalpIommuGetHardwareDomain @ 0x140513EE4 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x14051A548 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateDevice @ 0x14051AC18 (HalpIommuCreateDevice.c)
 *     HalpAcpiAllocateMemory @ 0x14052554C (HalpAcpiAllocateMemory.c)
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HalpDmaAllocateDeviceCreationConfigurations @ 0x140578938 (HalpDmaAllocateDeviceCreationConfigurations.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x140579DA0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057D9D8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTscReserveResources @ 0x140583DF0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140584FB0 (HalpHvInitMcaStatusMsrCache.c)
 *     IommupPasidDeviceCreate @ 0x140588434 (IommupPasidDeviceCreate.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x140588C88 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaAllocateDomain @ 0x14058A460 (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058A82C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14058AAC4 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14058AB4C (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpDmaInitializeControllers @ 0x14058B92C (HalpDmaInitializeControllers.c)
 *     HalpIommuAllocateDmaDomain @ 0x14058D094 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058D3D4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpNumaAddRangeProximity @ 0x140591850 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140594AB0 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x140594F44 (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x140597BA0 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140597C14 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x14059A234 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x14059BCD0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x14059C4B0 (IommuGetLibraryContext.c)
 *     IommupGetSystemContext @ 0x14059CF00 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x14059D094 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x14059EB00 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x14059ED10 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x14059F3C0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x14059F600 (IommuRegisterInterfaceStateChangeCallbackLegacy.c)
 *     IommuReserveLogicalAddressRange @ 0x14059F790 (IommuReserveLogicalAddressRange.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A089C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405A3000 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x1405A4318 (Amd64InitializeUncoreStatus.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405AB99C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140BEA5D0 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpBuildResumeStructures @ 0x140BEAFB0 (HalpBuildResumeStructures.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BEC904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpMapNvsArea @ 0x140C0A388 (HalpMapNvsArea.c)
 *     HalpMceInitializeErrorPacket @ 0x140C0AF38 (HalpMceInitializeErrorPacket.c)
 *     HalpAcpiDetectPiix4 @ 0x140CAF2A4 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140CAF34C (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB0100 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB03C4 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB0424 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140CB04FC (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlFindClearBits @ 0x140358780 (RtlFindClearBits.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x140358DC0 (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpMmAllocCtxAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rdi
  KIRQL v9; // r12
  __int64 ClearBits; // r15
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xBCBuLL);
  v3 = 4096LL;
  v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 + 16;
  if ( v4 >= 0x1000 )
    v5 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v5 >> 4;
  if ( v5 >= 0x1000 )
  {
    v5 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v14 = v5;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140FBCC70);
    v8 = HalpNPPoolAllocCtx;
    v9 = v7;
    while ( (__int64 *)v8 != &HalpNPPoolAllocCtx )
    {
      ClearBits = RtlFindClearBits((PRTL_BITMAP)(v8 + 32), v6, *(_DWORD *)(v8 + 24));
      if ( ClearBits != 0xFFFFFFFFLL )
        goto LABEL_9;
      v8 = *(_QWORD *)v8;
    }
    KeReleaseSpinLock(&qword_140FBCC70, v9);
    v14 = 0x4000LL;
  }
  v8 = HalpMmAllocCtxAllocBuffer(v3, v14);
  if ( v8 )
  {
    ClearBits = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(&qword_140FBCC70);
LABEL_9:
    RtlSetBits((PRTL_BITMAP)(v8 + 32), ClearBits, v6);
    *(_DWORD *)(v8 + 24) = ClearBits + v6;
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
      || (v12 = *(__int64 **)(v8 + 8), *v12 != v8)
      || (*v12 = v11,
          *(_QWORD *)(v11 + 8) = v12,
          v13 = HalpNPPoolAllocCtx,
          *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v8 = HalpNPPoolAllocCtx;
    *(_QWORD *)(v8 + 8) = &HalpNPPoolAllocCtx;
    *(_QWORD *)(v13 + 8) = v8;
    HalpNPPoolAllocCtx = v8;
    KeReleaseSpinLock(&qword_140FBCC70, v9);
    v2 = 16 * ClearBits + *(_QWORD *)(v8 + 16);
    if ( v5 < 0x1000 )
    {
      *(_QWORD *)v2 = v8;
      *(_DWORD *)(v2 + 8) = v6;
      v2 += 16LL;
    }
    else
    {
      *(_DWORD *)(v8 + 28) = v6;
    }
  }
  return v2;
}
