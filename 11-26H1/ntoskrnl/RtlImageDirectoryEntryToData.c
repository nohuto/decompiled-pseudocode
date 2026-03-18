/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14040E290
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402E9910 (RtlpLookupUserFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x14040C74C (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x14040D0C8 (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14040E248 (RtlCaptureImageExceptionValues.c)
 *     KiIsPgiKernel @ 0x1405F2224 (KiIsPgiKernel.c)
 *     RtlpGetKernelScpFunctionTable @ 0x140623030 (RtlpGetKernelScpFunctionTable.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x1406FCE30 (MiReplacePatchImportEntry.c)
 *     KsepResolveShimHooks @ 0x1407BD5E4 (KsepResolveShimHooks.c)
 *     KsepPatchDriverImportsTable @ 0x1407BDB88 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x140801960 (LdrEnumResources.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     MiReplaceImportEntriesForVerifier @ 0x14086A738 (MiReplaceImportEntriesForVerifier.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MmCallDllInitialize @ 0x1408754D8 (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
 *     RtlFindHotPatchInformation @ 0x1408AB074 (RtlFindHotPatchInformation.c)
 *     EtwpFindDebugId @ 0x1409427A8 (EtwpFindDebugId.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 *     MmGetSystemRoutineAddress @ 0x140A864E0 (MmGetSystemRoutineAddress.c)
 *     LdrpSearchResourceSection_U @ 0x140A86DB4 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140A878C8 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A879B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFindExportedRoutineByName @ 0x140AAF810 (RtlFindExportedRoutineByName.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC705C (MiMarkKernelImageCfgBits.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACAAB8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD69F0 (MiCaptureRetpolineRelocationTables.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     MiFindExport @ 0x140ADD4A0 (MiFindExport.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B059BC (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B05B58 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140B30DB0 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiCaptureSecureImageIat @ 0x140B32544 (MiCaptureSecureImageIat.c)
 *     MiUnloadApproved @ 0x140B3B1D8 (MiUnloadApproved.c)
 *     MiSetImportTableProtection @ 0x140B53544 (MiSetImportTableProtection.c)
 *     MiSnapUnresolvedImport @ 0x140B6BFF8 (MiSnapUnresolvedImport.c)
 *     VfUtilGetDriverImportBaseAddress @ 0x140C217B0 (VfUtilGetDriverImportBaseAddress.c)
 *     ViXdvDriverLoadImage @ 0x140C285C4 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140C35250 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140C353F8 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140C354B0 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140C3585C (ViThunkFindAllThunkedImports.c)
 *     ViThunkSnapSharedExportByName @ 0x140C441E8 (ViThunkSnapSharedExportByName.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     ViThunkFindExportAddress @ 0x140CDF290 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140CFDC00 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140CFFA0C (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x14040E484 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // r9
  int v11; // ecx
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // rax
  char v17; // cl
  int v18; // eax

  v4 = 0LL;
  v7 = a1 & 1;
  v8 = a1;
  v9 = 0LL;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = 0;
    if ( !v7 )
      v17 = a2;
    a2 = v17;
  }
  if ( v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_20;
  if ( *(_WORD *)v8 != 23117
    || (v10 = v8 + *(unsigned int *)(v8 + 60), v10 < v8)
    || v8 < 0x7FFFFFFF0000LL && (v10 + 264 > 0x7FFFFFFF0000LL || v10 + 264 <= v10)
    || *(_DWORD *)v10 != 17744 )
  {
    v11 = -1073741701;
    goto LABEL_16;
  }
  v11 = 0;
  if ( !v10 )
    goto LABEL_16;
  v12 = *(_WORD *)(v10 + 24);
  if ( v12 == 267 )
  {
    if ( (unsigned int)a3 < *(_DWORD *)(v10 + 116) )
    {
      v16 = a3;
      v14 = *(unsigned int *)(v10 + 8LL * a3 + 120);
      if ( !(_DWORD)v14 )
        goto LABEL_24;
      if ( v8 >= 0x7FFFFFFF0000LL || v14 + v8 <= 0x7FFFFFFF0000LL && v14 + v8 > v8 )
      {
        *a4 = *(_DWORD *)(v10 + 8 * v16 + 124);
        if ( a2 || (unsigned int)v14 < *(_DWORD *)(v10 + 84) )
          goto LABEL_15;
        v9 = RtlAddressInSectionTable(v10, v8);
        if ( v9 )
        {
          v11 = 0;
          goto LABEL_16;
        }
      }
    }
LABEL_20:
    v11 = -1073741811;
    goto LABEL_16;
  }
  if ( v12 != 523 || (unsigned int)a3 >= *(_DWORD *)(v10 + 132) )
    goto LABEL_20;
  v13 = a3;
  v14 = *(unsigned int *)(v10 + 8LL * a3 + 136);
  if ( !(_DWORD)v14 )
  {
LABEL_24:
    v11 = -1073741822;
    goto LABEL_16;
  }
  if ( v8 < 0x7FFFFFFF0000LL && (v14 + v8 > 0x7FFFFFFF0000LL || v14 + v8 <= v8) )
    goto LABEL_20;
  *a4 = *(_DWORD *)(v10 + 8 * v13 + 140);
  if ( a2 || (unsigned int)v14 < *(_DWORD *)(v10 + 84) )
  {
LABEL_15:
    v9 = v14 + v8;
    v11 = 0;
    goto LABEL_16;
  }
  v9 = RtlAddressInSectionTable(v10, v8);
  v18 = 0;
  if ( !v9 )
    v18 = -1073741811;
  v11 = v18;
LABEL_16:
  if ( v11 >= 0 )
    return v9;
  return v4;
}
