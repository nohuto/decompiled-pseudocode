/*
 * XREFs of SymCryptIntSubSameSize @ 0x1405212FC
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntSubSameSize @ 0x14052CA50 (SymCryptFdefIntSubSameSize.c)
 */

__int64 SymCryptIntSubSameSize()
{
  return SymCryptFdefIntSubSameSize();
}
