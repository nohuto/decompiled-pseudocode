/*
 * XREFs of RtlReleaseRelativeName @ 0x1800A5EF0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A5230 (RtlDosSearchPath_Ustr.c)
 *     LdrpResMapFile @ 0x180108F34 (LdrpResMapFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // rbx

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( _InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) == 1 )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0LL;
  }
}
