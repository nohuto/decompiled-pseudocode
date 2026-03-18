/*
 * XREFs of qsort @ 0x1404FC5A0
 * Callers:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiFlushTbAsNeeded @ 0x140237D10 (MiFlushTbAsNeeded.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     RtlpDynamicLookasideRebalance @ 0x1404049EC (RtlpDynamicLookasideRebalance.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140408264 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x140408E70 (PpmCheckComputeHeteroResponse.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 *     sub_140507940 @ 0x140507940 (sub_140507940.c)
 *     SymCryptParallelHashProcess @ 0x14051D794 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x140555180 (HalpNumaAddRangeProximity.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 *     VslInitializeSecureKernelCfg @ 0x140589F04 (VslInitializeSecureKernelCfg.c)
 *     IopCompactRemovePagesArray @ 0x14059D264 (IopCompactRemovePagesArray.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405B6C8C (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1405B6D44 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405B7BAC (KiRemoveProcessorFromCoreControlBlock.c)
 *     RtlCompareExchangePropertyStore @ 0x1405DDB80 (RtlCompareExchangePropertyStore.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405FFF10 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x1406548C4 (AsiPopulateHashes.c)
 *     AccelpBuildHuffmanEncoding @ 0x140659CD0 (AccelpBuildHuffmanEncoding.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x14065B3E8 (IaapSetAecsDecompressionHuffmanTable.c)
 *     MiSortMdlFrames @ 0x1406665E0 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x140668D1C (MiSortPageFramesRemoveDuplicates.c)
 *     MmKcsanGetIgnoredRangeList @ 0x14066E370 (MmKcsanGetIgnoredRangeList.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiCalibrateTbFlush @ 0x1406834F4 (MiCalibrateTbFlush.c)
 *     EtwpAllocatePhysicalPages @ 0x140797B2C (EtwpAllocatePhysicalPages.c)
 *     sub_1407A98F4 @ 0x1407A98F4 (sub_1407A98F4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     CmpLoadLayerVersions @ 0x1407C7810 (CmpLoadLayerVersions.c)
 *     MmFreeBootRegistry @ 0x1407D73A4 (MmFreeBootRegistry.c)
 *     MiProcessPatchImageCfg @ 0x1407E5E2C (MiProcessPatchImageCfg.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     PipSortDeviceObjectList @ 0x1408321BC (PipSortDeviceObjectList.c)
 *     EtwpGetTraceGroupInfo @ 0x140894910 (EtwpGetTraceGroupInfo.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x1409780F4 (CmpSortedValueEnumStackEntryStart.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EE97C (EtwpUpdateDisallowedGuids.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409F11A8 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140A30228 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0038 (RtlpFcUpdateFeatureConfiguration.c)
 *     IopRearrangeReqList @ 0x140AA02BC (IopRearrangeReqList.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB33A8 (AdtpBuildObjectTypeStrings.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140C00968 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpNumaParseHmat @ 0x140C01210 (HalpNumaParseHmat.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140C03BA8 (HalpChannelInitializeStaticConfiguration.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140C178FC (KiPerformAutomaticGroupConfiguration.c)
 *     PpmInitPolicyConfiguration @ 0x140C1F1E8 (PpmInitPolicyConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140C3C51C (MiInitializeNumaGraph.c)
 *     MiSwitchToPfns @ 0x140C40CE0 (MiSwitchToPfns.c)
 *     MiAssignTopLevelRanges @ 0x140C435B0 (MiAssignTopLevelRanges.c)
 *     IntpAllocateProcessorContext @ 0x140C4BB98 (IntpAllocateProcessorContext.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x1406A8AD0 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  char *v11; // rbx
  char *i; // rdi
  int v13; // eax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // cl
  size_t v19; // rbx
  char *v20; // rdi
  _BYTE *v21; // r8
  size_t v22; // r9
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
          v19 = SizeOfElements * (v10 >> 1);
          v20 = (char *)Base + v19;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v19) > 0 )
          {
            v22 = SizeOfElements;
            v21 = (char *)Base + v19;
            if ( Base != v20 )
            {
              do
              {
                v23 = v21[-v19];
                v21[-v19] = *v21;
                *v21++ = v23;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v8, v21, v22) > 0 )
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
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v19, v8, v24) > 0 )
          {
            v28 = SizeOfElements;
            v29 = v8;
            if ( v20 != v8 )
            {
              v30 = v20 - v8;
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
            if ( v20 > v32 )
            {
              while ( 1 )
              {
                v32 += SizeOfElements;
                if ( v32 >= v20 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v20, v28) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v32 += SizeOfElements;
            while ( v32 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v32, v20, v28) <= 0 );
            do
            {
LABEL_38:
              v34 = (unsigned __int64)v33;
              v33 -= SizeOfElements;
            }
            while ( v33 > v20 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v33, v20) > 0 );
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
            if ( v20 != v33 )
              v38 = v20;
            v20 = v38;
          }
          if ( (unsigned __int64)v20 < v34 )
          {
            while ( 1 )
            {
              v34 -= SizeOfElements;
              if ( v34 <= (unsigned __int64)v20 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v20) )
                goto LABEL_53;
            }
          }
          do
            v34 -= SizeOfElements;
          while ( v34 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v34, v20) );
LABEL_53:
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
