/*
 * XREFs of NtOpenFile @ 0x18015F4A0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCheckRelativeDrive @ 0x18009A374 (RtlpCheckRelativeDrive.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C56D8 (RtlpSysVolTakeOwnership.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E2640 (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800E27A4 (SaferpIsDllAllowed.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113198 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpCheckAppDirType @ 0x180114CCC (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
