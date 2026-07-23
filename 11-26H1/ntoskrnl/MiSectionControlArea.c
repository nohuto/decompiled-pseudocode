/*
 * XREFs of MiSectionControlArea @ 0x14038C760
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiReferenceAweHandle @ 0x14050D4B4 (MiReferenceAweHandle.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiLogSectionObjectEvent @ 0x14077DED8 (MiLogSectionObjectEvent.c)
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     MiWriteProtectSystemImages @ 0x14086AA40 (MiWriteProtectSystemImages.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiResolveImageImports @ 0x14087B78C (MiResolveImageImports.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiCompactServiceTable @ 0x14088106C (MiCompactServiceTable.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     MiMapViewInSystemSpace @ 0x140988260 (MiMapViewInSystemSpace.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x140997310 (MiSectionOpen.c)
 *     MiSectionClose @ 0x140998C20 (MiSectionClose.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 *     MiDriverLoadSucceeded @ 0x1409E4E98 (MiDriverLoadSucceeded.c)
 *     MiCallImageNotify @ 0x1409E50E8 (MiCallImageNotify.c)
 *     PspLocateInPEManifest @ 0x1409E5E24 (PspLocateInPEManifest.c)
 *     MiMapExParametersInitialize @ 0x1409EDB10 (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x1409EE0D0 (MiMapParametersInitialize.c)
 *     PsQuerySectionSignatureInformation @ 0x1409FCAC0 (PsQuerySectionSignatureInformation.c)
 *     MiComputeProcessUserVa @ 0x140A086A0 (MiComputeProcessUserVa.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 *     MmSectionToSectionObjectPointers @ 0x140A74410 (MmSectionToSectionObjectPointers.c)
 *     MiSectionDelete @ 0x140A9ADD0 (MiSectionDelete.c)
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140AC9B70 (MiReturnSystemImageCommitment.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC9D6C (MiFreeRetpolineImportInfo.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiInitializeWowPeb @ 0x140ACCF84 (MiInitializeWowPeb.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140ADA3F4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 *     MiIsImageFullyRetpolined @ 0x140B214B0 (MiIsImageFullyRetpolined.c)
 *     MiMapSystemImage @ 0x140B22C34 (MiMapSystemImage.c)
 *     MmGetFileNameForSection @ 0x140B28404 (MmGetFileNameForSection.c)
 *     MiChargeSystemImageCommitment @ 0x140B331C0 (MiChargeSystemImageCommitment.c)
 *     MmGetSectionStrongImageReference @ 0x140B569E8 (MmGetSectionStrongImageReference.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 *     VfDriverLoadImage @ 0x140C4CAE0 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140D042E8 (MiInitializeCfg.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
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
