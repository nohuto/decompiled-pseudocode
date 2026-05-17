/*
 * XREFs of ZwDeleteValueKey @ 0x180160B10
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FD710 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlDeleteRegistryValue @ 0x18010FAF0 (RtlDeleteRegistryValue.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 223LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
