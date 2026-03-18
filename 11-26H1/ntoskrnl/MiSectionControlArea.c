/*
 * XREFs of MiSectionControlArea @ 0x14038A9B0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14038A4C0 (MiCreateSystemSection.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiReferenceAweHandle @ 0x140513A44 (MiReferenceAweHandle.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiLogSectionObjectEvent @ 0x14077B084 (MiLogSectionObjectEvent.c)
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     MiWriteProtectSystemImages @ 0x140864660 (MiWriteProtectSystemImages.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     MiResolveImageImports @ 0x1408753A8 (MiResolveImageImports.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x140878ADC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     MiComputeProcessUserVa @ 0x140962818 (MiComputeProcessUserVa.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     MiMapViewInSystemSpace @ 0x1409B7280 (MiMapViewInSystemSpace.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     MmMapViewOfSection @ 0x1409C1F50 (MmMapViewOfSection.c)
 *     AlpcpCreateView @ 0x1409C2150 (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x1409C28A0 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x1409C6330 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1409C7C40 (MiSectionClose.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     MiMapExParametersInitialize @ 0x1409F1340 (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x1409F1900 (MiMapParametersInitialize.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     PsQuerySectionSignatureInformation @ 0x140A410A0 (PsQuerySectionSignatureInformation.c)
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 *     MmSectionToSectionObjectPointers @ 0x140A67440 (MmSectionToSectionObjectPointers.c)
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 *     MiCallImageNotify @ 0x140A790C8 (MiCallImageNotify.c)
 *     MiSectionDelete @ 0x140A96C50 (MiSectionDelete.c)
 *     NtGetNlsSectionPtr @ 0x140A97650 (NtGetNlsSectionPtr.c)
 *     PspLocateInPEManifest @ 0x140A9ADF4 (PspLocateInPEManifest.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MmGetFileObjectForSection @ 0x140AAE5D0 (MmGetFileObjectForSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140AC7F80 (MiReturnSystemImageCommitment.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC817C (MiFreeRetpolineImportInfo.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACAAB8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiInitializeWowPeb @ 0x140ACAE74 (MiInitializeWowPeb.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADCEA4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B059BC (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B05B58 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiIsImageFullyRetpolined @ 0x140B1F430 (MiIsImageFullyRetpolined.c)
 *     MiMapSystemImage @ 0x140B20834 (MiMapSystemImage.c)
 *     MmGetFileNameForSection @ 0x140B261A4 (MmGetFileNameForSection.c)
 *     MiChargeSystemImageCommitment @ 0x140B30FC0 (MiChargeSystemImageCommitment.c)
 *     MmGetSectionStrongImageReference @ 0x140B54148 (MmGetSectionStrongImageReference.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 *     VfDriverLoadImage @ 0x140C46AD0 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140CFDF40 (MiInitializeCfg.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
