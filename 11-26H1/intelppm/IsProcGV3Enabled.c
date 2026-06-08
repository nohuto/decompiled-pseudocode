/*
 * XREFs of IsProcGV3Enabled @ 0x140006BE4
 * Callers:
 *     ValidatePStateCapability @ 0x14002B0A0 (ValidatePStateCapability.c)
 * Callees:
 *     <none>
 */

char IsProcGV3Enabled()
{
  unsigned __int64 v0; // rax

  v0 = __readmsr(0x1A0u);
  return BYTE2(v0) & 1;
}
