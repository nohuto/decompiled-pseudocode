/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140783C80
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x14057F640 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140FBB408 != 0;
}
