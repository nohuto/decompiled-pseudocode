/*
 * XREFs of _alloca_probe @ 0x140731080
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020DF10 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EA50 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14020EE30 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14020EF00 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140210270 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD_EX@1@@Z @ 0x140210760 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x140234DB0 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KeIntSteerSnapPerf @ 0x140255580 (KeIntSteerSnapPerf.c)
 *     EtwpTraceLostEvent @ 0x140257138 (EtwpTraceLostEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140392A30 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140393010 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiThreadWorker @ 0x1403C32F0 (MiThreadWorker.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KyRaiseException @ 0x1403D3E8C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     RtlUnwind @ 0x1403D65D0 (RtlUnwind.c)
 *     EtwpApplyEventNameFilter @ 0x14041C3C8 (EtwpApplyEventNameFilter.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140461830 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140468B98 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14047AA54 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ReadStringDelimited_0 @ 0x14053F288 (ReadStringDelimited_0.c)
 *     HalpHvStartVirtualProcessorViaXboxNanovisor @ 0x140585E58 (HalpHvStartVirtualProcessorViaXboxNanovisor.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406C8DE8 (EtwpApplyPayloadFilterInternal.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
  v2 = &v3;
  LOWORD(v2) = (unsigned __int16)&v3 & 0xF000;
  while ( v1 < v2 )
    v2 -= 4096;
  return result;
}
