/*
 * XREFs of SymCryptModElementCopy @ 0x14055EA54
 * Callers:
 *     SymCryptEcpointTransform @ 0x140566B94 (SymCryptEcpointTransform.c)
 *     SymCryptFdefModInvGeneric @ 0x14056EA70 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140570220 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140576F70 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefModElementCopy @ 0x14056E648 (SymCryptFdefModElementCopy.c)
 */

__int64 SymCryptModElementCopy()
{
  return SymCryptFdefModElementCopy();
}
