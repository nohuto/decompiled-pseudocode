/*
 * XREFs of NtOpenFile @ 0x18015F5A0
 * Callers:
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCheckRelativeDrive @ 0x18009B244 (RtlpCheckRelativeDrive.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C7F18 (RtlpSysVolTakeOwnership.c)
 *     SaferpIsV2PolicyPresent @ 0x1800E4790 (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800E48F4 (SaferpIsDllAllowed.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113900 (RtlpOpenAndMapCustomCultureFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpCheckAppDirType @ 0x1801154EC (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
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
