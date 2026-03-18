/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140781180
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14057D120 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140FBB068 != 0;
}
