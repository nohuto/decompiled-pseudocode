/*
 * XREFs of HalpMmAllocCtxFree @ 0x140359004
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140343C00 (HalFreeCommonBufferVector.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140355F20 (HalpAllocatePmcCounterSetEx.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140356984 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140357200 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140357F00 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140358E60 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpIommuBlockDevice @ 0x1404FF510 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x14050C0A0 (HalpIommuUnblockDevice.c)
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuGetHardwareDomain @ 0x140513EE4 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x14051A548 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateDevice @ 0x14051AC18 (HalpIommuCreateDevice.c)
 *     HalpDmaDeleteDomain @ 0x1405311C8 (HalpDmaDeleteDomain.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405314CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaFreeDeviceCreationConfigurations @ 0x140578CE8 (HalpDmaFreeDeviceCreationConfigurations.c)
 *     HalpAcpiCacheTable @ 0x140579510 (HalpAcpiCacheTable.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x140579DA0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpFreePmcCounterSet @ 0x140580300 (HalpFreePmcCounterSet.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x140587510 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpIommuDeleteDevice @ 0x140587958 (HalpIommuDeleteDevice.c)
 *     IommupPasidDeviceCreate @ 0x140588434 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x140588584 (IommupPasidDeviceDelete.c)
 *     HalpDmaAllocateDomain @ 0x14058A460 (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058A82C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpIommuFreeDeviceId @ 0x14058BE64 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058D3D4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058D580 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x14058D8E8 (HalpIommuFreeDmaDomain.c)
 *     HalpNumaAddRangeProximity @ 0x140591850 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140594AB0 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x140594F44 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x140595F60 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x140596260 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x140597DF0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x140597E30 (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x14059B9F0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14059BCD0 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x14059C3BC (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x14059C4B0 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x14059CE04 (IommupFreeSystemContext.c)
 *     IommupGetSystemContext @ 0x14059CF00 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x14059D094 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x14059D414 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x14059EB00 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x14059EEF0 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x14059F030 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x14059F140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x14059F3C0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x14059F790 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x14059FB20 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     IommuUnregisterInterfaceStateChangeCallbackLegacy @ 0x14059FCC0 (IommuUnregisterInterfaceStateChangeCallbackLegacy.c)
 *     IommupCreateDeviceId @ 0x14059FDDC (IommupCreateDeviceId.c)
 *     HalpIommuCleanupPageTable @ 0x1405A0728 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A089C (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405A3000 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1405A4AC0 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x1405AB960 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405AB99C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpAcpiDetectPiix4Work @ 0x1407823C0 (HalpAcpiDetectPiix4Work.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x140BEB000 (HalpFreeResumeStructures.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BEC904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpFreeNvsBuffers @ 0x140C08904 (HalpFreeNvsBuffers.c)
 *     HalpMceInitializeErrorPacket @ 0x140C0AF38 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB0100 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB0220 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB03C4 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB0424 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140CB04FC (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140CB06D8 (HalpDmaFreeTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB0C78 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x14035924C (HalpMmAllocCtxBufferCleanup.c)
 */

void __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
{
  KIRQL v3; // bp
  __int64 i; // rbx
  ULONG v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rax
  unsigned int v9; // eax
  bool v10; // al
  __int64 v11; // rax
  int *v12; // rcx
  char v13; // r8
  int v14; // r9d
  int *v15; // r10
  int *j; // rax
  int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140FBCC70);
  if ( (a2 & 0xFFF) == 0 )
  {
    for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
    {
      if ( a2 == *(_QWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 28);
        LODWORD(v6) = 0;
        *(_DWORD *)(i + 28) = 0;
        goto LABEL_3;
      }
    }
  }
  i = *(_QWORD *)(a2 - 16);
  v5 = *(_DWORD *)(a2 - 16 + 8);
  v6 = (a2 - 16 - *(_QWORD *)(i + 16)) / 16;
LABEL_3:
  RtlClearBits((PRTL_BITMAP)(i + 32), v6, v5);
  *(_DWORD *)(i + 24) = v6;
  v7 = *(_QWORD *)i;
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v8 = *(__int64 **)(i + 8), *v8 != i) )
LABEL_10:
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = *(_DWORD *)(i + 32);
  if ( v9 )
  {
    if ( v9 <= 1 )
    {
      v10 = !_bittest(*(const signed __int32 **)(i + 40), 0);
      goto LABEL_8;
    }
    v12 = *(int **)(i + 40);
    v13 = v9 - 1;
    v14 = *v12;
    v15 = &v12[(unsigned __int64)(v9 - 1) >> 5];
    if ( v12 == v15 )
    {
      v18 = ((0xFFFFFFFF >> (32 - v9)) & v14) == 0;
LABEL_18:
      v10 = v18;
LABEL_8:
      if ( v10 )
        goto LABEL_21;
      goto LABEL_9;
    }
    if ( !v14 )
    {
      for ( j = v12 + 1; ; ++j )
      {
        v17 = *j;
        if ( j == v15 )
          break;
        if ( v17 )
          goto LABEL_9;
      }
      v18 = ((0xFFFFFFFF >> ~v13) & v17) == 0;
      goto LABEL_18;
    }
  }
LABEL_9:
  v11 = HalpNPPoolAllocCtx;
  if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx )
    goto LABEL_10;
  *(_QWORD *)i = HalpNPPoolAllocCtx;
  *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
  *(_QWORD *)(v11 + 8) = i;
  HalpNPPoolAllocCtx = i;
  i = 0LL;
LABEL_21:
  KeReleaseSpinLock(&qword_140FBCC70, v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v19, i);
}
