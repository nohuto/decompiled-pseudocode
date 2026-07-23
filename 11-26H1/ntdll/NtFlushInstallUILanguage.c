/*
 * XREFs of NtFlushInstallUILanguage @ 0x180160C30
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143C50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DA10 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS result; // eax

  result = 240;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
