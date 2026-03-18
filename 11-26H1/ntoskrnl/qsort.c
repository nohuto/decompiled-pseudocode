/*
 * XREFs of qsort @ 0x140536F00
 * Callers:
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiGetPteFromCopyList @ 0x140285490 (MiGetPteFromCopyList.c)
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028EB58 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiFinishUnlinkBatch @ 0x1402990A0 (MiFinishUnlinkBatch.c)
 *     MiFillNoReservationCluster @ 0x1402F29A4 (MiFillNoReservationCluster.c)
 *     MiClearPteAccessed @ 0x1402FF9B0 (MiClearPteAccessed.c)
 *     MiMakePteClean @ 0x14031A2A0 (MiMakePteClean.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140320BF0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x14041E368 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x14041E6A0 (PpmCheckComputeHeteroResponse.c)
 *     RtlpDynamicLookasideRebalance @ 0x140433ACC (RtlpDynamicLookasideRebalance.c)
 *     sub_1405423E0 @ 0x1405423E0 (sub_1405423E0.c)
 *     SymCryptParallelHashProcess @ 0x140558734 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x140591850 (HalpNumaAddRangeProximity.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     IopCompactRemovePagesArray @ 0x1405D54DC (IopCompactRemovePagesArray.c)
 *     KcsanInitSystem @ 0x1405E3070 (KcsanInitSystem.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405EEC18 (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1405EECD0 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405EFDBC (KiRemoveProcessorFromCoreControlBlock.c)
 *     RtlCompareExchangePropertyStore @ 0x14061A3D0 (RtlCompareExchangePropertyStore.c)
 *     AsiPopulateHashes @ 0x1406D9D60 (AsiPopulateHashes.c)
 *     AccelpBuildHuffmanEncoding @ 0x1406DF2C0 (AccelpBuildHuffmanEncoding.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x1406E18E8 (IaapSetAecsDecompressionHuffmanTable.c)
 *     MiSortMdlFrames @ 0x1406EEDE4 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x1406F1F64 (MiSortPageFramesRemoveDuplicates.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiAttemptPageFileReductionApc @ 0x14070D510 (MiAttemptPageFileReductionApc.c)
 *     MiCalibrateTbFlush @ 0x14070DF04 (MiCalibrateTbFlush.c)
 *     VmpPinRangesContextStart @ 0x14081D870 (VmpPinRangesContextStart.c)
 *     EtwpAllocatePhysicalPages @ 0x140825018 (EtwpAllocatePhysicalPages.c)
 *     sub_140838B04 @ 0x140838B04 (sub_140838B04.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     CmpLoadLayerVersions @ 0x140855D54 (CmpLoadLayerVersions.c)
 *     MmFreeBootRegistry @ 0x140863DA8 (MmFreeBootRegistry.c)
 *     MiProcessPatchImageCfg @ 0x140873D98 (MiProcessPatchImageCfg.c)
 *     PipSortDeviceObjectList @ 0x140910CF8 (PipSortDeviceObjectList.c)
 *     EtwpGetTraceGroupInfo @ 0x140939330 (EtwpGetTraceGroupInfo.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A47278 (CmpSortedValueEnumStackEntryStart.c)
 *     MiProcessCrcList @ 0x140A5ACD0 (MiProcessCrcList.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A5F4B0 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140ABEF38 (RtlpFcUpdateUsageTriggers.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE39A8 (EtwpUpdateDisallowedGuids.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B19608 (RtlpFcUpdateFeatureConfiguration.c)
 *     MiExtendPagingFiles @ 0x140B2F8D4 (MiExtendPagingFiles.c)
 *     IopRearrangeReqList @ 0x140B4BD04 (IopRearrangeReqList.c)
 *     AdtpBuildObjectTypeStrings @ 0x140B5B908 (AdtpBuildObjectTypeStrings.c)
 *     MiRecordPostHibernateZeroPages @ 0x140C01070 (MiRecordPostHibernateZeroPages.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB19FC (HalpNumaInitializeStaticConfiguration.c)
 *     HalpNumaParseHmat @ 0x140CB22A0 (HalpNumaParseHmat.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140CB4C98 (HalpChannelInitializeStaticConfiguration.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140CCA5A8 (KiPerformAutomaticGroupConfiguration.c)
 *     PpmInitPolicyConfiguration @ 0x140CD2D80 (PpmInitPolicyConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140CF118C (MiInitializeNumaGraph.c)
 *     MxExtractUnusedRegions @ 0x140CF6818 (MxExtractUnusedRegions.c)
 *     MiAssignTopLevelRanges @ 0x140CF9118 (MiAssignTopLevelRanges.c)
 *     IntpAllocateProcessorContext @ 0x140D02508 (IntpAllocateProcessorContext.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x140731180 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rdi
  char *v11; // rbx
  char *i; // rdi
  int v13; // eax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // cl
  char *v19; // rdi
  size_t v20; // r8
  char *v21; // rdx
  signed __int64 v22; // r9
  char v23; // cl
  size_t v24; // r8
  _BYTE *v25; // rdx
  char *v26; // r9
  char v27; // cl
  size_t v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // r9
  char v31; // cl
  char *v32; // rbx
  char *v33; // rsi
  unsigned __int64 v34; // rbp
  char *v35; // rdx
  signed __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  _QWORD v40[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v41[62]; // [rsp+230h] [rbp-248h] BYREF

  memset_0(v40, 0, sizeof(v40));
  memset_0(v41, 0, sizeof(v41));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      guard_check_icall_no_overrides(PtFuncCompare);
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = (char *)Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; v11 = v14 )
                {
                  v13 = guard_dispatch_icall_no_overrides(i, v11);
                  v14 = i;
                  if ( v13 <= 0 )
                    v14 = v11;
                  i += SizeOfElements;
                }
                v15 = SizeOfElements;
                v16 = v8;
                if ( v11 != v8 )
                {
                  v17 = v11 - v8;
                  do
                  {
                    v18 = v16[v17];
                    v16[v17] = *v16;
                    *v16++ = v18;
                    --v15;
                  }
                  while ( v15 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v39;
            }
            goto LABEL_18;
          }
          v19 = (char *)Base + SizeOfElements * (v10 >> 1);
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, v19) > 0 )
          {
            v20 = SizeOfElements;
            v21 = v19;
            if ( Base != v19 )
            {
              v22 = (_BYTE *)Base - v19;
              do
              {
                v23 = v21[v22];
                v21[v22] = *v21;
                *v21++ = v23;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, size_t))PtFuncCompare)(Base, v8, v20) > 0 )
          {
            v24 = SizeOfElements;
            v25 = v8;
            if ( Base != v8 )
            {
              v26 = (char *)((_BYTE *)Base - v8);
              do
              {
                v27 = v25[(_QWORD)v26];
                v25[(_QWORD)v26] = *v25;
                *v25++ = v27;
                --v24;
              }
              while ( v24 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v19, v8, v24) > 0 )
          {
            v28 = SizeOfElements;
            v29 = v8;
            if ( v19 != v8 )
            {
              v30 = v19 - v8;
              do
              {
                v31 = v29[v30];
                v29[v30] = *v29;
                *v29++ = v31;
                --v28;
              }
              while ( v28 );
            }
          }
          v32 = (char *)Base;
          v33 = v8;
          while ( 1 )
          {
            if ( v19 > v32 )
            {
              while ( 1 )
              {
                v32 += SizeOfElements;
                if ( v32 >= v19 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v19, v28) > 0 )
                  goto LABEL_39;
              }
            }
            do
              v32 += SizeOfElements;
            while ( v32 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v19, v28) <= 0 );
            do
            {
LABEL_39:
              v34 = (unsigned __int64)v33;
              v33 -= SizeOfElements;
            }
            while ( v33 > v19 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v33, v19) > 0 );
            if ( v33 < v32 )
              break;
            v28 = SizeOfElements;
            v35 = v33;
            if ( v33 != v32 )
            {
              v36 = v32 - v33;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v28;
              }
              while ( v28 );
            }
            v38 = v32;
            if ( v19 != v33 )
              v38 = v19;
            v19 = v38;
          }
          if ( (unsigned __int64)v19 < v34 )
          {
            while ( 1 )
            {
              v34 -= SizeOfElements;
              if ( v34 <= (unsigned __int64)v19 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v19) )
                goto LABEL_54;
            }
          }
          do
            v34 -= SizeOfElements;
          while ( v34 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v19) );
LABEL_54:
          v9 = v39;
          if ( (__int64)(v34 - (_QWORD)Base) >= v8 - v32 )
            break;
          if ( v32 < v8 )
          {
            v40[v39] = v32;
            v41[v39] = v8;
            v9 = ++v39;
          }
          if ( (unsigned __int64)Base >= v34 )
          {
LABEL_18:
            v39 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v40[v9];
            v8 = (char *)v41[v9];
          }
          else
          {
            v8 = (char *)v34;
          }
        }
        if ( (unsigned __int64)Base < v34 )
        {
          v40[v39] = Base;
          v41[v39] = v34;
          v9 = ++v39;
        }
        if ( v32 >= v8 )
          goto LABEL_18;
        Base = v32;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
