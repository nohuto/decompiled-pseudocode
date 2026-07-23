/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14072BF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
