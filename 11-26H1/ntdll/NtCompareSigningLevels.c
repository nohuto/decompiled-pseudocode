/*
 * XREFs of NtCompareSigningLevels @ 0x180160230
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180101184 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180101284 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  NTSTATUS result; // eax

  result = 160;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
