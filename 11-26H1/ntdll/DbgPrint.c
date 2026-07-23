/*
 * XREFs of DbgPrint @ 0x1800107F0
 * Callers:
 *     RtlpDecommitBlock @ 0x180002230 (RtlpDecommitBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpFindUCREntry @ 0x180014740 (RtlpFindUCREntry.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpHeapTrkLeakCallback @ 0x18005F450 (RtlpHeapTrkLeakCallback.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18006127C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x18006C8A8 (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpProtectHeap @ 0x1800768F0 (RtlpProtectHeap.c)
 *     RtlDetectHeapLeaks @ 0x1800C1BA0 (RtlDetectHeapLeaks.c)
 *     RtlpPushPageDescriptor @ 0x1800C1FB4 (RtlpPushPageDescriptor.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800C213C (RtlpScanHeapAllocBlocks.c)
 *     RtlpSetBlockInfo @ 0x1800C25AC (RtlpSetBlockInfo.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C43F0 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C44CC (AVrfpDetectVerifiedExports.c)
 *     AVrfpSnapDllImports @ 0x1800C4600 (AVrfpSnapDllImports.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D0FC8 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DAB90 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x18011365C (AVrfpSnapAlreadyLoadedDlls.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     RtlDebugDestroyHeap @ 0x18011F964 (RtlDebugDestroyHeap.c)
 *     AVrfpVerifierStopInitialize @ 0x18011FF98 (AVrfpVerifierStopInitialize.c)
 *     RtlpDumpEntryInfo @ 0x180120E68 (RtlpDumpEntryInfo.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x180124490 (AVrfpChainDuplicateVerificationLayers.c)
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     AVrfpEnableHandleVerifier @ 0x180137F58 (AVrfpEnableHandleVerifier.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x180138044 (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpPageHeapStop @ 0x180138224 (RtlpPageHeapStop.c)
 *     RtlDumpResource @ 0x18013DE80 (RtlDumpResource.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlTraceDatabaseDestroy @ 0x180149E20 (RtlTraceDatabaseDestroy.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A124 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpPrintErrorInformation @ 0x180150304 (RtlpPrintErrorInformation.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  unsigned int v1; // ebx
  bool v2; // cf
  ULONG result; // eax
  int v5; // [rsp+28h] [rbp-40h]
  int v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = 128;
  v7 = 0LL;
  v2 = 1;
  do
  {
    LOBYTE(v6) = v2;
    LOBYTE(v5) = 1;
    result = vDbgPrintExWithPrefixInternalHelper(&Flags, 101LL, 3LL, Format, (__int64 *)va, v5, v1, v6, v7);
    if ( result != -2147483643 )
      break;
    if ( v1 >= 0x200 )
      break;
    v1 += 128;
    v2 = v1 < 0x200;
  }
  while ( v1 <= 0x200 );
  return result;
}
