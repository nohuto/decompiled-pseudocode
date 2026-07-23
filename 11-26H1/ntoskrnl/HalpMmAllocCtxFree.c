/*
 * XREFs of HalpMmAllocCtxFree @ 0x14035ADA4
 * Callers:
 *     HalFreeCommonBufferVector @ 0x140345C80 (HalFreeCommonBufferVector.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140358FA0 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140359CA0 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14035AC00 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpIommuBlockDevice @ 0x1404F8D00 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 *     HalpDmaFreeChildAdapter @ 0x140509940 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuGetHardwareDomain @ 0x14050D954 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuCloneDeviceId @ 0x140513FB8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpDmaDeleteDomain @ 0x1405336C8 (HalpDmaDeleteDomain.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x1405339CC (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaFreeDeviceCreationConfigurations @ 0x14057B218 (HalpDmaFreeDeviceCreationConfigurations.c)
 *     HalpAcpiCacheTable @ 0x14057BA40 (HalpAcpiCacheTable.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpFreePmcCounterSet @ 0x140582820 (HalpFreePmcCounterSet.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x140589A30 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpIommuFreeDeviceId @ 0x14058E5E4 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058FB54 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14058FD00 (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x140590068 (HalpIommuFreeDmaDomain.c)
 *     HalpNumaAddRangeProximity @ 0x140593FD0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x140597230 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1405976C4 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1405986E0 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1405989E0 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14059A5B0 (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14059E450 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x14059EB3C (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x14059EC30 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x14059F584 (IommupFreeSystemContext.c)
 *     IommupGetSystemContext @ 0x14059F680 (IommupGetSystemContext.c)
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x14059FB94 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x1405A12E0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1405A16E0 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405A1820 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405A1930 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x1405A1BB0 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x1405A1F80 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x1405A2310 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     IommuUnregisterInterfaceStateChangeCallbackLegacy @ 0x1405A24B0 (IommuUnregisterInterfaceStateChangeCallbackLegacy.c)
 *     IommupCreateDeviceId @ 0x1405A25CC (IommupCreateDeviceId.c)
 *     HalpIommuCleanupPageTable @ 0x1405A2F38 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1405A5810 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1405A72D0 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x1405AE170 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405AE1AC (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpAcpiDetectPiix4Work @ 0x140784EC0 (HalpAcpiDetectPiix4Work.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x140BF1000 (HalpFreeResumeStructures.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BF2904 (HalpUpdateTiledCR3Mapping.c)
 *     HalpFreeNvsBuffers @ 0x140C0EB14 (HalpFreeNvsBuffers.c)
 *     HalpMceInitializeErrorPacket @ 0x140C11148 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB6140 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140CB6260 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB6404 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB6464 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140CB653C (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140CB6718 (HalpDmaFreeTranslationBuffer.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x14035AFEC (HalpMmAllocCtxBufferCleanup.c)
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

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140FBD010);
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
  KeReleaseSpinLock(&qword_140FBD010, v3);
  if ( i )
    HalpMmAllocCtxBufferCleanup(v19, i);
}
