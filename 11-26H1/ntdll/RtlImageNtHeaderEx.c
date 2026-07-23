/*
 * XREFs of RtlImageNtHeaderEx @ 0x1800315B0
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpGetImageSize @ 0x18001C940 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18002FF90 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180077BE0 (LdrInitSecurityCookie.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180078420 (RtlGuardCheckExceptionHandler.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpLocateMrdata @ 0x180078E60 (LdrpLocateMrdata.c)
 *     RtlCaptureImageExceptionValues @ 0x180079550 (RtlCaptureImageExceptionValues.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x18007D850 (LdrGetDllHandleByMapping.c)
 *     SbpDetermineDllContext @ 0x1800848E0 (SbpDetermineDllContext.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1800A8E50 (LdrpResGetResourceDirectory.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     CsrClientConnectToServer @ 0x1800C7C30 (CsrClientConnectToServer.c)
 *     RtlImageNtHeader @ 0x1800C9F00 (RtlImageNtHeader.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D376C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D37E0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSetProtection @ 0x1800D51F8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800D5304 (LdrRelocateImageWithBias.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800D7130 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800D9050 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpValidateEntrySection @ 0x1800DA980 (LdrpValidateEntrySection.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FEC0C (LdrpInitializeCfgScpHelpers.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FA00 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlCreateUserStack @ 0x18010FC60 (RtlCreateUserStack.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 *     LdrpGetMappingFromCacheEntry @ 0x18013BCA8 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180145EF0 (LdrVerifyMappedImageMatchesChecksum.c)
 *     RtlGetImageEnclaveConfig @ 0x18014EFF4 (RtlGetImageEnclaveConfig.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C08C (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x180148114 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v6; // r10
  char v7; // cl
  ULONG64 v8; // r8

  result = 0;
  v6 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage != 23117
    || (v8 = *((unsigned int *)BaseOfImage + 15), v7)
    && (v8 >= Size || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= Size)
    || (unsigned int)v8 >= 0x10000000
    || (v6 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v8), (char *)BaseOfImage + v8 < BaseOfImage)
    || v6->Signature != 17744 )
  {
    result = -1073741701;
  }
  if ( result >= 0 )
    *OutHeaders = v6;
  return result;
}
