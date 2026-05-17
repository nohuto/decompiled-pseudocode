/*
 * XREFs of RtlReleaseRelativeName @ 0x1800A6DC0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A5FB0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap_0();
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
