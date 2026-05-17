/*
 * XREFs of NtEnumerateKey @ 0x18015F580
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D3784 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x1800E8AD0 (RtlpNtEnumerateSubKey.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125AF4 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EF30 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
