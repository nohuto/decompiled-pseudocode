/*
 * XREFs of memcpy_0 @ 0x14001E82B
 * Callers:
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmpSaveRegistryValue_U @ 0x140008210 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x14000A020 (SmpConfigureSharedSessionData.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F1C0 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCheckFolderForRedirections @ 0x140013524 (SmpCheckFolderForRedirections.c)
 *     SmpConfigureEnvironment @ 0x1400137E0 (SmpConfigureEnvironment.c)
 *     SmpConfigureS0InitCmd @ 0x140013DE0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x1400177D8 (SmpRenameTargetFile.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001ACB8 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B074 (BasepGetVolumeGUIDFromNTName.c)
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 *     NtPnpGetObjectProperty @ 0x14001E188 (NtPnpGetObjectProperty.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
