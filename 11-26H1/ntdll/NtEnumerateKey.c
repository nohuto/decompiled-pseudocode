/*
 * XREFs of NtEnumerateKey @ 0x18015F480
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x1800E7CE0 (RtlpNtEnumerateSubKey.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125864 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EDE0 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 50;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
