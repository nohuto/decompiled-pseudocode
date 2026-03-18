/*
 * XREFs of SymCryptIntGetBit @ 0x14055C2A4
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1405660C0 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefIntGetBit @ 0x1405686FC (SymCryptFdefIntGetBit.c)
 */

__int64 SymCryptIntGetBit()
{
  return SymCryptFdefIntGetBit();
}
