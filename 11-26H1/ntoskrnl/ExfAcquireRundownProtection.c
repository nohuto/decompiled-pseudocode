/*
 * XREFs of ExfAcquireRundownProtection @ 0x1402D2650
 * Callers:
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x14027FB90 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmKmStoreReferenceEx @ 0x1402D2430 (SmKmStoreReferenceEx.c)
 *     SmKmStoreReference @ 0x1402D2520 (SmKmStoreReference.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PfSnActiveTraceGetNext @ 0x1402D3E00 (PfSnActiveTraceGetNext.c)
 *     PfpRpFileKeyUpdate @ 0x1408DB1B0 (PfpRpFileKeyUpdate.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ExpCopyProcessInfo @ 0x14091E820 (ExpCopyProcessInfo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 *     ObGetProcessHandleCount @ 0x1409CED00 (ObGetProcessHandleCount.c)
 *     PfSnPrefetchScenario @ 0x1409CFF44 (PfSnPrefetchScenario.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140A31888 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140A340F8 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     PfSnPrefetchSections @ 0x140A58EC4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140A5926C (PfSnPrefetchSectionsCleanup.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExfAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rtt

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  while ( (Count & 1) == 0 )
  {
    v2 = Count;
    Count = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count + 2, Count);
    if ( v2 == Count )
      return 1;
  }
  return 0;
}
