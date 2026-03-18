/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1407273B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
