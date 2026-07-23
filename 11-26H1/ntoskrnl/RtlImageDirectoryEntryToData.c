/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14042B1C0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402CB950 (RtlpLookupUserFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x140429E94 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x140429FF4 (RtlInsertInvertedFunctionTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14042B178 (RtlCaptureImageExceptionValues.c)
 *     KiIsPgiKernel @ 0x1405F4BE4 (KiIsPgiKernel.c)
 *     RtlpGetKernelScpFunctionTable @ 0x140626080 (RtlpGetKernelScpFunctionTable.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiLockPatchIatForDV @ 0x1406FFC20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplacePatchImportEntry @ 0x140701B00 (MiReplacePatchImportEntry.c)
 *     KsepResolveShimHooks @ 0x1407C0644 (KsepResolveShimHooks.c)
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 *     LdrEnumResources @ 0x140807400 (LdrEnumResources.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     MiReplaceImportEntriesForVerifier @ 0x140870B18 (MiReplaceImportEntriesForVerifier.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MmCallDllInitialize @ 0x14087B8BC (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x14088106C (MiCompactServiceTable.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MiFindExport @ 0x14097EEA0 (MiFindExport.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 *     EtwpFindDebugId @ 0x140A358B8 (EtwpFindDebugId.c)
 *     MmGetSystemRoutineAddress @ 0x140A8B460 (MmGetSystemRoutineAddress.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlFindExportedRoutineByName @ 0x140AAD460 (RtlFindExportedRoutineByName.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140B32FB0 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiCaptureSecureImageIat @ 0x140B34998 (MiCaptureSecureImageIat.c)
 *     MiUnloadApproved @ 0x140B3D458 (MiUnloadApproved.c)
 *     MiSetImportTableProtection @ 0x140B55DE4 (MiSetImportTableProtection.c)
 *     MiSnapUnresolvedImport @ 0x140B6F0F4 (MiSnapUnresolvedImport.c)
 *     VfUtilGetDriverImportBaseAddress @ 0x140C277C0 (VfUtilGetDriverImportBaseAddress.c)
 *     ViXdvDriverLoadImage @ 0x140C2E5CC (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140C3B260 (VfThunkApplyDriverAddedThunks.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140C3B408 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140C3B4C0 (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkFindAllThunkedImports @ 0x140C3B86C (ViThunkFindAllThunkedImports.c)
 *     ViThunkSnapSharedExportByName @ 0x140C4A1F8 (ViThunkSnapSharedExportByName.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     ViThunkFindExportAddress @ 0x140CE5628 (ViThunkFindExportAddress.c)
 *     MiApplyDynamicRelocations @ 0x140D03FA8 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140D05DAC (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x14042B3B4 (RtlAddressInSectionTable.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  void *v4; // rbx
  __int64 v7; // r10
  char *v8; // rdx
  char *v9; // r11
  unsigned __int64 v10; // r9
  int v11; // ecx
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // rax
  BOOLEAN v17; // cl
  int v18; // eax

  v4 = 0LL;
  v7 = (unsigned __int8)BaseOfImage & 1;
  v8 = (char *)BaseOfImage;
  v9 = 0LL;
  if ( ((unsigned __int8)BaseOfImage & 2) != 0 || ((unsigned __int8)BaseOfImage & 1) != 0 )
  {
    v8 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v17 = 0;
    if ( !v7 )
      v17 = MappedAsImage;
    MappedAsImage = v17;
  }
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_20;
  if ( *(_WORD *)v8 != 23117
    || (v10 = (unsigned __int64)&v8[*((unsigned int *)v8 + 15)], v10 < (unsigned __int64)v8)
    || (unsigned __int64)v8 < 0x7FFFFFFF0000LL && (v10 + 264 > 0x7FFFFFFF0000LL || v10 + 264 <= v10)
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
    if ( (unsigned int)DirectoryEntry < *(_DWORD *)(v10 + 116) )
    {
      v16 = DirectoryEntry;
      v14 = *(unsigned int *)(v10 + 8LL * DirectoryEntry + 120);
      if ( !(_DWORD)v14 )
        goto LABEL_24;
      if ( (unsigned __int64)v8 >= 0x7FFFFFFF0000LL || (unsigned __int64)&v8[v14] <= 0x7FFFFFFF0000LL && &v8[v14] > v8 )
      {
        *Size = *(_DWORD *)(v10 + 8 * v16 + 124);
        if ( MappedAsImage || (unsigned int)v14 < *(_DWORD *)(v10 + 84) )
          goto LABEL_15;
        v9 = (char *)RtlAddressInSectionTable((PIMAGE_NT_HEADERS)v10, v8, v14);
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
  if ( v12 != 523 || (unsigned int)DirectoryEntry >= *(_DWORD *)(v10 + 132) )
    goto LABEL_20;
  v13 = DirectoryEntry;
  v14 = *(unsigned int *)(v10 + 8LL * DirectoryEntry + 136);
  if ( !(_DWORD)v14 )
  {
LABEL_24:
    v11 = -1073741822;
    goto LABEL_16;
  }
  if ( (unsigned __int64)v8 < 0x7FFFFFFF0000LL && ((unsigned __int64)&v8[v14] > 0x7FFFFFFF0000LL || &v8[v14] <= v8) )
    goto LABEL_20;
  *Size = *(_DWORD *)(v10 + 8 * v13 + 140);
  if ( MappedAsImage || (unsigned int)v14 < *(_DWORD *)(v10 + 84) )
  {
LABEL_15:
    v9 = &v8[v14];
    v11 = 0;
    goto LABEL_16;
  }
  v9 = (char *)RtlAddressInSectionTable((PIMAGE_NT_HEADERS)v10, v8, v14);
  v18 = 0;
  if ( !v9 )
    v18 = -1073741811;
  v11 = v18;
LABEL_16:
  if ( v11 >= 0 )
    return v9;
  return v4;
}
