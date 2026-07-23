/*
 * XREFs of MiModeCopyExceptionFilterEx @ 0x1404DEB18
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiGetExceptionInfo @ 0x1406F413C (MiGetExceptionInfo.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiQueryInitializeRestrictedVa @ 0x140777004 (MiQueryInitializeRestrictedVa.c)
 *     MiFinalizeLagePageImageMapping @ 0x140777C90 (MiFinalizeLagePageImageMapping.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 *     MiMapCacheExceptionFilter @ 0x140870DDC (MiMapCacheExceptionFilter.c)
 *     MiValidatePageFileCreationParameters @ 0x140872C3C (MiValidatePageFileCreationParameters.c)
 *     MiCaptureHotPatchInfo @ 0x1408758FC (MiCaptureHotPatchInfo.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14087D0E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14087D4E0 (NtInitializeEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiAllocateUserPhysicalPagesReturnResults @ 0x14087E82C (MiAllocateUserPhysicalPagesReturnResults.c)
 *     MiCaptureUlongPtrArray @ 0x14087EB38 (MiCaptureUlongPtrArray.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MmManagePartitionCharges @ 0x140883238 (MmManagePartitionCharges.c)
 *     MmManagePartitionNodeInformation @ 0x14088378C (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionQueryPageFileInformation @ 0x140883898 (MmManagePartitionQueryPageFileInformation.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140884D18 (MiQuerySpecialPurposeMemoryInformation.c)
 *     NtQuerySection @ 0x1408EBBB0 (NtQuerySection.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MiQueryUpdateBytesWritten @ 0x140923A10 (MiQueryUpdateBytesWritten.c)
 *     MiQueryValidateParameters @ 0x1409247B0 (MiQueryValidateParameters.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 *     MiInitializeTeb @ 0x14099A1CC (MiInitializeTeb.c)
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 *     MiCaptureImageCfgContext @ 0x14099CDC0 (MiCaptureImageCfgContext.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiValidateSectionRevertRelocations @ 0x14099E24C (MiValidateSectionRevertRelocations.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1409EEE14 (MiCaptureAllocateMapExtendedParameters.c)
 *     NtAllocateVirtualMemory @ 0x1409EF150 (NtAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140A04B90 (NtFreeVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140A06230 (NtUnlockVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x140A068FC (MiLockUnlockCommon.c)
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 *     MiCopyVmLockVad @ 0x140A2BC40 (MiCopyVmLockVad.c)
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     NtExtendSection @ 0x140A65CF0 (NtExtendSection.c)
 *     NtFlushVirtualMemory @ 0x140A69D30 (NtFlushVirtualMemory.c)
 *     MiGetWriteWatchFinish @ 0x140A92888 (MiGetWriteWatchFinish.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     MiQueryPtePrepare @ 0x140A95A04 (MiQueryPtePrepare.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 *     MiSetTebStackLimit @ 0x140AA43B0 (MiSetTebStackLimit.c)
 *     MiGetTebStackControl @ 0x140AA43EC (MiGetTebStackControl.c)
 *     NtOpenSection @ 0x140AA91B0 (NtOpenSection.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiImageLoadConfigSize @ 0x140ACCE3C (MiImageLoadConfigSize.c)
 *     MiInitializeWowPeb @ 0x140ACCF84 (MiInitializeWowPeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     MiCreateFixupRecord @ 0x140AF4248 (MiCreateFixupRecord.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiModeCopyExceptionFilterEx(ULONG_PTR *a1, char a2, char a3)
{
  volatile signed __int32 *p_NpxState; // rcx

  if ( a2 == 1 )
  {
    p_NpxState = (volatile signed __int32 *)&stru_140E2ED08.600;
    if ( (a3 & 2) == 0 )
      p_NpxState = (volatile signed __int32 *)&stru_140E2ED08.NpxState;
    _InterlockedAdd(p_NpxState, 1u);
  }
  else if ( a2 == 2 )
  {
    _InterlockedAdd((_DWORD *)&stru_140E2ED08.NpxState + 1, 1u);
  }
  else
  {
    if ( (a3 & 4) == 0 || (dword_140FBF27C & 1) != 0 )
      KeBugCheckEx(0x1Au, 0x380uLL, *(_QWORD *)(*a1 + 16), *a1, a1[1]);
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2ED08.IdealProcessor, 1u);
  }
  return 1LL;
}
