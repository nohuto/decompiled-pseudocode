/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14072BF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
