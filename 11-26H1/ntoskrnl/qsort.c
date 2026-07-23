/*
 * XREFs of qsort @ 0x140539380
 * Callers:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiFinishUnlinkBatch @ 0x140298600 (MiFinishUnlinkBatch.c)
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiMakePteClean @ 0x14031C2D0 (MiMakePteClean.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140415BAC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 *     RtlpDynamicLookasideRebalance @ 0x140428B9C (RtlpDynamicLookasideRebalance.c)
 *     sub_140544860 @ 0x140544860 (sub_140544860.c)
 *     SymCryptParallelHashProcess @ 0x14055ABC4 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x140593FD0 (HalpNumaAddRangeProximity.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     IopCompactRemovePagesArray @ 0x1405D7CCC (IopCompactRemovePagesArray.c)
 *     KcsanInitSystem @ 0x1405E59E0 (KcsanInitSystem.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405F1588 (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1405F1640 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405F272C (KiRemoveProcessorFromCoreControlBlock.c)
 *     RtlCompareExchangePropertyStore @ 0x14061D420 (RtlCompareExchangePropertyStore.c)
 *     AsiPopulateHashes @ 0x1406DDEF0 (AsiPopulateHashes.c)
 *     AccelpBuildHuffmanEncoding @ 0x1406E3560 (AccelpBuildHuffmanEncoding.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x1406E5B68 (IaapSetAecsDecompressionHuffmanTable.c)
 *     MiSortMdlFrames @ 0x1406F3A84 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x1406F6BD4 (MiSortPageFramesRemoveDuplicates.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiAttemptPageFileReductionApc @ 0x1407121C0 (MiAttemptPageFileReductionApc.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     VmpPinRangesContextStart @ 0x140823A80 (VmpPinRangesContextStart.c)
 *     EtwpAllocatePhysicalPages @ 0x14082B258 (EtwpAllocatePhysicalPages.c)
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     CmpLoadLayerVersions @ 0x14085C0EC (CmpLoadLayerVersions.c)
 *     MmFreeBootRegistry @ 0x14086A188 (MmFreeBootRegistry.c)
 *     MiProcessPatchImageCfg @ 0x14087A0F8 (MiProcessPatchImageCfg.c)
 *     EtwpGetTraceGroupInfo @ 0x140914ED0 (EtwpGetTraceGroupInfo.c)
 *     PipSortDeviceObjectList @ 0x1409B2DD8 (PipSortDeviceObjectList.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A50568 (CmpSortedValueEnumStackEntryStart.c)
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C470 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140AC0FD8 (RtlpFcUpdateUsageTriggers.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE14B0 (EtwpUpdateDisallowedGuids.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 *     IopRearrangeReqList @ 0x140B4DA94 (IopRearrangeReqList.c)
 *     AdtpBuildObjectTypeStrings @ 0x140B5EC24 (AdtpBuildObjectTypeStrings.c)
 *     MiRecordPostHibernateZeroPages @ 0x140C07280 (MiRecordPostHibernateZeroPages.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 *     HalpNumaParseHmat @ 0x140CB82E0 (HalpNumaParseHmat.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140CBACD8 (HalpChannelInitializeStaticConfiguration.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140CD0688 (KiPerformAutomaticGroupConfiguration.c)
 *     PpmInitPolicyConfiguration @ 0x140CD8F20 (PpmInitPolicyConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140CF7504 (MiInitializeNumaGraph.c)
 *     MxExtractUnusedRegions @ 0x140CFCB98 (MxExtractUnusedRegions.c)
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
 *     IntpAllocateProcessorContext @ 0x140D088A8 (IntpAllocateProcessorContext.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
