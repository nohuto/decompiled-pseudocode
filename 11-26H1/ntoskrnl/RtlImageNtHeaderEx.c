/*
 * XREFs of RtlImageNtHeaderEx @ 0x14046A510
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DC3A8 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1403DC568 (LdrpGetMappingFromCacheEntry.c)
 *     IopAddCodeRegion @ 0x1404E71D0 (IopAddCodeRegion.c)
 *     IopLoadCrashdumpDriver @ 0x14050F1D4 (IopLoadCrashdumpDriver.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052A9D4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     IoGetDumpHiberRanges @ 0x1405C70CC (IoGetDumpHiberRanges.c)
 *     KiDumpParameterImages @ 0x1405E838C (KiDumpParameterImages.c)
 *     KiShadowKernelSectionByAddress @ 0x1405F725C (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F72D4 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpMapResourceFile @ 0x140618490 (LdrpMapResourceFile.c)
 *     PrExtExtractDataRecordTable @ 0x1406DCBDC (PrExtExtractDataRecordTable.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140809D84 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14086D520 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     RtlFindHotPatchInformation @ 0x1408AB074 (RtlFindHotPatchInformation.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140942658 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpResGetMappingSize @ 0x140A9B310 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x140AADAC4 (LdrpResGetResourceDirectory.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABB9B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     LdrInitSecurityCookie @ 0x140B05D40 (LdrInitSecurityCookie.c)
 *     VfDriverEnableVerifierForAll @ 0x140C20194 (VfDriverEnableVerifierForAll.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CD9680 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 *     MiProtectKernelCfgData @ 0x140CF2570 (MiProtectKernelCfgData.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140CFA528 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140CFADB4 (MiPrepareScpFixupsForNtAndHal.c)
 *     MiCheckLargePageOk @ 0x140CFAE64 (MiCheckLargePageOk.c)
 *     MiVerifyLargeSectionLayout @ 0x140CFB200 (MiVerifyLargeSectionLayout.c)
 *     MiInitializeKernelCfgImages @ 0x140CFEAB0 (MiInitializeKernelCfgImages.c)
 *     MiFreeKernelPadSections @ 0x140CFFD44 (MiFreeKernelPadSections.c)
 *     MiHandleBootImage @ 0x140CFFFDC (MiHandleBootImage.c)
 *     MiLocateKernelSections @ 0x140D00B90 (MiLocateKernelSections.c)
 *     MiLockPagableSections @ 0x140D00C50 (MiLockPagableSections.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  char v6; // cl
  unsigned __int64 v7; // r8
  _DWORD *v8; // rcx

  if ( a4 )
  {
    result = 0LL;
    *a4 = 0LL;
    if ( (a1 & 0xFFFFFFFE) == 0 && a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (a1 & 1) != 0 )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( a3 < 0x40 )
          return 3221225595LL;
      }
      if ( *(_WORD *)a2 == 23117 )
      {
        v7 = *(unsigned int *)(a2 + 60);
        if ( !v6 || v7 < a3 && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < a3 )
        {
          v8 = (_DWORD *)(v7 + a2);
          if ( v7 + a2 >= a2
            && (a2 >= 0x7FFFFFFF0000LL || (unsigned __int64)(v8 + 66) <= 0x7FFFFFFF0000LL && v8 + 66 > v8)
            && *v8 == 17744 )
          {
            *a4 = v8;
            return result;
          }
        }
      }
      return 3221225595LL;
    }
  }
  return 3221225485LL;
}
