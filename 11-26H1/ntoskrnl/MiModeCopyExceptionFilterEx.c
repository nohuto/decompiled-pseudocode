/*
 * XREFs of MiModeCopyExceptionFilterEx @ 0x1404E5578
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MmQueryMemoryListInformation @ 0x1403485A8 (MmQueryMemoryListInformation.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     MiGetExceptionInfo @ 0x1406EF49C (MiGetExceptionInfo.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiQueryInitializeRestrictedVa @ 0x140774004 (MiQueryInitializeRestrictedVa.c)
 *     MiFinalizeLagePageImageMapping @ 0x140774C90 (MiFinalizeLagePageImageMapping.c)
 *     MiDuplicateUnicodeString @ 0x140867860 (MiDuplicateUnicodeString.c)
 *     MiQueryBadAddresses @ 0x140869F40 (MiQueryBadAddresses.c)
 *     MiMapCacheExceptionFilter @ 0x14086A9FC (MiMapCacheExceptionFilter.c)
 *     MiValidatePageFileCreationParameters @ 0x14086C85C (MiValidatePageFileCreationParameters.c)
 *     MiCaptureHotPatchInfo @ 0x14086F52C (MiCaptureHotPatchInfo.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140877100 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087844C (MiAllocateUserPhysicalPagesReturnResults.c)
 *     MiCaptureUlongPtrArray @ 0x140878758 (MiCaptureUlongPtrArray.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MmManagePartitionCharges @ 0x14087CE38 (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x14087D38C (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionQueryPageFileInformation @ 0x14087D498 (MmManagePartitionQueryPageFileInformation.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x14087E918 (MiQuerySpecialPurposeMemoryInformation.c)
 *     NtQuerySection @ 0x1408E55F0 (NtQuerySection.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     MiQueryValidateParameters @ 0x14091FC40 (MiQueryValidateParameters.c)
 *     MiQueryReturnResults @ 0x140920250 (MiQueryReturnResults.c)
 *     MiQueryUpdateBytesWritten @ 0x1409202CC (MiQueryUpdateBytesWritten.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x14095F2D0 (NtFreeVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140960970 (NtUnlockVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x140961048 (MiLockUnlockCommon.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1409BAA7C (MiCaptureSectionCreateExtendedParameters.c)
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiInitializeTeb @ 0x1409C91EC (MiInitializeTeb.c)
 *     MiEliminateZeroPages @ 0x1409C9F7C (MiEliminateZeroPages.c)
 *     MiRelocateValidateFixups @ 0x1409CB26C (MiRelocateValidateFixups.c)
 *     MiCaptureImageCfgContext @ 0x1409CBDE0 (MiCaptureImageCfgContext.c)
 *     MiParseComAndCetHeaders @ 0x1409CC26C (MiParseComAndCetHeaders.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MiValidateSectionRevertRelocations @ 0x1409CD26C (MiValidateSectionRevertRelocations.c)
 *     MiMapViewOfSectionExCommon @ 0x1409F1570 (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x1409F22A0 (MmAllocateVirtualMemory.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1409F2644 (MiCaptureAllocateMapExtendedParameters.c)
 *     NtAllocateVirtualMemory @ 0x1409F2980 (NtAllocateVirtualMemory.c)
 *     MiReadWriteVirtualMemory @ 0x140A21D00 (MiReadWriteVirtualMemory.c)
 *     MiCopyVmLockVad @ 0x140A22620 (MiCopyVmLockVad.c)
 *     MiCopyVmReadBytes @ 0x140A228B0 (MiCopyVmReadBytes.c)
 *     NtExtendSection @ 0x140A58770 (NtExtendSection.c)
 *     NtFlushVirtualMemory @ 0x140A5CD70 (NtFlushVirtualMemory.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 *     MiGetWriteWatchFinish @ 0x140A8DBB8 (MiGetWriteWatchFinish.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 *     MiQueryPtePrepare @ 0x140A90EB4 (MiQueryPtePrepare.c)
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 *     MiCheckForUserStackOverflow @ 0x140AA2744 (MiCheckForUserStackOverflow.c)
 *     MiSetTebStackLimit @ 0x140AA28E0 (MiSetTebStackLimit.c)
 *     MiGetTebStackControl @ 0x140AA291C (MiGetTebStackControl.c)
 *     NtOpenSection @ 0x140AABC00 (NtOpenSection.c)
 *     MmManagePartitionMemoryInformation @ 0x140AB9F38 (MmManagePartitionMemoryInformation.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MmCreatePeb @ 0x140ACA4F0 (MmCreatePeb.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACAAB8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiImageLoadConfigSize @ 0x140ACAD2C (MiImageLoadConfigSize.c)
 *     MiInitializeWowPeb @ 0x140ACAE74 (MiInitializeWowPeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD69F0 (MiCaptureRetpolineRelocationTables.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     MiCreateFixupRecord @ 0x140AF1608 (MiCreateFixupRecord.c)
 *     MmGetPageFileInformation @ 0x140B13430 (MmGetPageFileInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiModeCopyExceptionFilterEx(ULONG_PTR *a1, char a2, char a3)
{
  volatile signed __int32 *p_NpxState; // rcx

  if ( a2 == 1 )
  {
    p_NpxState = (volatile signed __int32 *)&stru_140E2EB88.600;
    if ( (a3 & 2) == 0 )
      p_NpxState = (volatile signed __int32 *)&stru_140E2EB88.NpxState;
    _InterlockedAdd(p_NpxState, 1u);
  }
  else if ( a2 == 2 )
  {
    _InterlockedAdd((_DWORD *)&stru_140E2EB88.NpxState + 1, 1u);
  }
  else
  {
    if ( (a3 & 4) == 0 || (dword_140FBE27C & 1) != 0 )
      KeBugCheckEx(0x1Au, 0x380uLL, *(_QWORD *)(*a1 + 16), *a1, a1[1]);
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2EB88.IdealProcessor, 1u);
  }
  return 1LL;
}
