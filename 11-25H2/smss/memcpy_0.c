/*
 * XREFs of memcpy_0 @ 0x14001EFA7
 * Callers:
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpSaveRegistryValue_U @ 0x140008890 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x14000A3D0 (SmpConfigureSharedSessionData.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F56C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     SmpConfigureEnvironment @ 0x140013BB0 (SmpConfigureEnvironment.c)
 *     SmpConfigureS0InitCmd @ 0x1400141F0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001A570 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001A92C (BasepGetVolumeGUIDFromNTName.c)
 *     InternalFindFirstFileExW @ 0x14001DE78 (InternalFindFirstFileExW.c)
 *     NtPnpGetObjectProperty @ 0x14001E86C (NtPnpGetObjectProperty.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
