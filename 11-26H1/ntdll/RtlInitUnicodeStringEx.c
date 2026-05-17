/*
 * XREFs of RtlInitUnicodeStringEx @ 0x1800A4880
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     SbpResolveBasedOnName @ 0x180064918 (SbpResolveBasedOnName.c)
 *     LdrpFindKnownDll @ 0x180082BE0 (LdrpFindKnownDll.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlDosSearchPath_U @ 0x1800A4640 (RtlDosSearchPath_U.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrGetKnownDllSectionHandle @ 0x180100850 (LdrGetKnownDllSectionHandle.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125AF4 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, const wchar_t *a2)
{
  size_t v3; // rax
  __int16 v4; // ax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !a2 )
    return 0LL;
  v3 = wcslen(a2);
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    *(_WORD *)a1 = v4;
    *(_WORD *)(a1 + 2) = v4 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
