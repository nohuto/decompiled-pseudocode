/*
 * XREFs of SymCryptModElementCopy @ 0x14055C56C
 * Callers:
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1405660C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140566A6C (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140571040 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCopy @ 0x14056F468 (SymCryptFdefModElementCopy.c)
 */

__int64 SymCryptModElementCopy()
{
  return SymCryptFdefModElementCopy();
}
