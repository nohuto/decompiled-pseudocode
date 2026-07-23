/*
 * XREFs of RtlInitUnicodeStringEx @ 0x1800A39B0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     LdrpFindKnownDll @ 0x180079F80 (LdrpFindKnownDll.c)
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 *     RtlDosSearchPath_U @ 0x1800A3770 (RtlDosSearchPath_U.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800FFFA0 (LdrGetKnownDllSectionHandle.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125864 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  size_t v3; // rax
  unsigned __int16 v4; // ax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( !SourceString )
    return 0;
  v3 = wcslen(SourceString);
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    DestinationString->Length = v4;
    DestinationString->MaximumLength = v4 + 2;
    return 0;
  }
  return -1073741562;
}
