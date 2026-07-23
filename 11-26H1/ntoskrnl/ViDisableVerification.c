/*
 * XREFs of ViDisableVerification @ 0x140C27F0C
 * Callers:
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDisableVerification(unsigned __int8 a1)
{
  __int64 result; // rax

  LODWORD(MmVerifyDriverBufferLength) = -1;
  MmVerifyDriverLevel = 0;
  VfRuleClasses = 0LL;
  VfRandomVerifiedDrivers = 0;
  ViVerifyAllDrivers = 0;
  result = a1;
  VfSafeMode = a1;
  return result;
}
