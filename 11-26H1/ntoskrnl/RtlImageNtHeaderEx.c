/*
 * XREFs of RtlImageNtHeaderEx @ 0x140463C90
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1403DF758 (LdrpGetMappingFromCacheEntry.c)
 *     IopAddCodeRegion @ 0x1404E058C (IopAddCodeRegion.c)
 *     IopLoadCrashdumpDriver @ 0x140508C44 (IopLoadCrashdumpDriver.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052CEF4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     IoGetDumpHiberRanges @ 0x1405C999C (IoGetDumpHiberRanges.c)
 *     KiDumpParameterImages @ 0x1405EACFC (KiDumpParameterImages.c)
 *     KiShadowKernelSectionByAddress @ 0x1405F9C1C (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F9C94 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpMapResourceFile @ 0x14061B4E0 (LdrpMapResourceFile.c)
 *     PrExtExtractDataRecordTable @ 0x1406E0E7C (PrExtExtractDataRecordTable.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x14080F814 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1408738F0 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 *     LdrpResGetMappingSize @ 0x1409E6340 (LdrpResGetMappingSize.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140A35768 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpResGetResourceDirectory @ 0x140AABB84 (LdrpResGetResourceDirectory.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABD6B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrInitSecurityCookie @ 0x140B07DD4 (LdrInitSecurityCookie.c)
 *     VfDriverEnableVerifierForAll @ 0x140C261A0 (VfDriverEnableVerifierForAll.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CDFA00 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 *     MiProtectKernelCfgData @ 0x140CF88F0 (MiProtectKernelCfgData.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140D01134 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiCheckLargePageOk @ 0x140D011E4 (MiCheckLargePageOk.c)
 *     MiVerifyLargeSectionLayout @ 0x140D01580 (MiVerifyLargeSectionLayout.c)
 *     MiInitializeKernelCfgImages @ 0x140D04E50 (MiInitializeKernelCfgImages.c)
 *     MiFreeKernelPadSections @ 0x140D060E4 (MiFreeKernelPadSections.c)
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 *     MiLocateKernelSections @ 0x140D06F30 (MiLocateKernelSections.c)
 *     MiLockPagableSections @ 0x140D06FF0 (MiLockPagableSections.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  char v6; // cl
  ULONG64 v7; // r8
  _IMAGE_NT_HEADERS64 *v8; // rcx

  if ( OutHeaders )
  {
    result = 0;
    *OutHeaders = 0LL;
    if ( (Flags & 0xFFFFFFFE) == 0 && (char *)BaseOfImage - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      if ( (Flags & 1) != 0 )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( Size < 0x40 )
          return -1073741701;
      }
      if ( *(_WORD *)BaseOfImage == 23117 )
      {
        v7 = *((unsigned int *)BaseOfImage + 15);
        if ( !v6 || v7 < Size && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < Size )
        {
          v8 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
          if ( (char *)BaseOfImage + v7 >= BaseOfImage
            && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFF0000LL
             || (unsigned __int64)&v8[1] <= 0x7FFFFFFF0000LL && &v8[1] > v8)
            && v8->Signature == 17744 )
          {
            *OutHeaders = v8;
            return result;
          }
        }
      }
      return -1073741701;
    }
  }
  return -1073741811;
}
