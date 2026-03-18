/*
 * XREFs of SymCryptModElementCopy @ 0x14052143C
 * Callers:
 *     SymCryptEcpointTransform @ 0x140528618 (SymCryptEcpointTransform.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140529FF0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052A9C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140534FFC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCopy @ 0x14053343C (SymCryptFdefModElementCopy.c)
 */

__int64 SymCryptModElementCopy()
{
  return SymCryptFdefModElementCopy();
}
