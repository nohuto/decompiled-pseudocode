/*
 * XREFs of RtlImageNtHeaderEx @ 0x180047040
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpGetImageSize @ 0x1800317E0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180045A20 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     SbpDetermineDllContext @ 0x180064490 (SbpDetermineDllContext.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180080840 (LdrInitSecurityCookie.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrpLocateMrdata @ 0x180081AC0 (LdrpLocateMrdata.c)
 *     RtlCaptureImageExceptionValues @ 0x1800821B0 (RtlCaptureImageExceptionValues.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x1800864B0 (LdrGetDllHandleByMapping.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1800A9D20 (LdrpResGetResourceDirectory.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     CsrClientConnectToServer @ 0x1800CA4C0 (CsrClientConnectToServer.c)
 *     RtlImageNtHeader @ 0x1800CC790 (RtlImageNtHeader.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D67AC (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D6820 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSetProtection @ 0x1800D8238 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800D8344 (LdrRelocateImageWithBias.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800DA170 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800DC0E0 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpValidateEntrySection @ 0x1800DDA10 (LdrpValidateEntrySection.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FF4BC (LdrpInitializeCfgScpHelpers.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FE70 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlCreateUserStack @ 0x1801100D0 (RtlCreateUserStack.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 *     LdrpGetMappingFromCacheEntry @ 0x18013BDE8 (LdrpGetMappingFromCacheEntry.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180146040 (LdrVerifyMappedImageMatchesChecksum.c)
 *     RtlGetImageEnclaveConfig @ 0x18014F144 (RtlGetImageEnclaveConfig.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C1CC (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x180148264 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  char v7; // cl
  unsigned __int64 v8; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117
    || (v8 = *(unsigned int *)(a2 + 60), v7) && (v8 >= a3 || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= a3)
    || (unsigned int)v8 >= 0x10000000
    || (v6 = (_DWORD *)(v8 + a2), v8 + a2 < a2)
    || *v6 != 17744 )
  {
    result = 3221225595LL;
  }
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
