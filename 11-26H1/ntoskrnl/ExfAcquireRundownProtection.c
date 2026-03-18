/*
 * XREFs of ExfAcquireRundownProtection @ 0x1402F05D0
 * Callers:
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140280620 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140280B50 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmKmStoreReferenceEx @ 0x1402F03B0 (SmKmStoreReferenceEx.c)
 *     SmKmStoreReference @ 0x1402F04A0 (SmKmStoreReference.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402F0540 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PfSnActiveTraceGetNext @ 0x1402F1D80 (PfSnActiveTraceGetNext.c)
 *     PfpRpFileKeyUpdate @ 0x1408D4BF0 (PfpRpFileKeyUpdate.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x14093E770 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140940FE8 (EtwpCovSampAcquireSamplerRundown.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14094C3A0 (ExpWnfDispatchKernelSubscription.c)
 *     ObGetProcessHandleCount @ 0x1409533C0 (ObGetProcessHandleCount.c)
 *     ExpCopyProcessInfo @ 0x140968E30 (ExpCopyProcessInfo.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A23970 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     PfSnPrefetchSections @ 0x140A4FBD4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140A4FF7C (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x140AE0674 (PfSnPrefetchScenario.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
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
