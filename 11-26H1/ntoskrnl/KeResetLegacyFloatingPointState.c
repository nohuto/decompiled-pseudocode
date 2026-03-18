/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1407273A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
