/*
 * XREFs of DbgPrint @ 0x180025720
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpHeapTrkLeakCallback @ 0x180013D20 (RtlpHeapTrkLeakCallback.c)
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x180015970 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x180015B4C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180015FD0 (RtlLockHeap.c)
 *     RtlpDecommitBlock @ 0x180017150 (RtlpDecommitBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpFindUCREntry @ 0x180029670 (RtlpFindUCREntry.c)
 *     RtlpCreateUCREntry @ 0x180029BD0 (RtlpCreateUCREntry.c)
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x18007E1BC (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpProtectHeap @ 0x18007F550 (RtlpProtectHeap.c)
 *     RtlDetectHeapLeaks @ 0x1800C43E0 (RtlDetectHeapLeaks.c)
 *     RtlpPushPageDescriptor @ 0x1800C47F4 (RtlpPushPageDescriptor.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800C497C (RtlpScanHeapAllocBlocks.c)
 *     RtlpSetBlockInfo @ 0x1800C4DEC (RtlpSetBlockInfo.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C6C30 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C6D0C (AVrfpDetectVerifiedExports.c)
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D5070 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DDC20 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x180113DC4 (AVrfpSnapAlreadyLoadedDlls.c)
 *     RtlDebugCreateHeap @ 0x180113EEC (RtlDebugCreateHeap.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     RtlDebugDestroyHeap @ 0x18011FBB4 (RtlDebugDestroyHeap.c)
 *     AVrfpVerifierStopInitialize @ 0x1801201E8 (AVrfpVerifierStopInitialize.c)
 *     RtlpDumpEntryInfo @ 0x1801210B8 (RtlpDumpEntryInfo.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x180124720 (AVrfpChainDuplicateVerificationLayers.c)
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     AVrfpEnableHandleVerifier @ 0x1801381E8 (AVrfpEnableHandleVerifier.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1801382D4 (AVrfpFindClosestThunkDuplicate.c)
 *     RtlpPageHeapStop @ 0x1801384B4 (RtlpPageHeapStop.c)
 *     RtlDumpResource @ 0x18013DFD0 (RtlDumpResource.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlTraceDatabaseDestroy @ 0x180149F70 (RtlTraceDatabaseDestroy.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A274 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpPrintErrorInformation @ 0x180150454 (RtlpPrintErrorInformation.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DE744 (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 DbgPrint(const char *a1, ...)
{
  unsigned int v1; // ebx
  bool v2; // cf
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+10h] BYREF

  va_start(va, a1);
  v1 = 128;
  v6 = 0LL;
  v2 = 1;
  v3 = (int)a1;
  do
  {
    LOBYTE(v5) = v2;
    result = vDbgPrintExWithPrefixInternalHelper((unsigned int)&unk_180176D3C, 101, 3, v3, (__int64)va, 1, v1, v5, v6);
    if ( (_DWORD)result != -2147483643 )
      break;
    if ( v1 >= 0x200 )
      break;
    v1 += 128;
    v2 = v1 < 0x200;
  }
  while ( v1 <= 0x200 );
  return result;
}
