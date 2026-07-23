/*
 * XREFs of ZwDeleteValueKey @ 0x180160A10
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FCE60 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlDeleteRegistryValue @ 0x18010F680 (RtlDeleteRegistryValue.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 223;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
