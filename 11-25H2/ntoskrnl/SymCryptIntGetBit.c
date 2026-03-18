/*
 * XREFs of SymCryptIntGetBit @ 0x140521174
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140529FF0 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefIntGetBit @ 0x14052C6D4 (SymCryptFdefIntGetBit.c)
 */

__int64 SymCryptIntGetBit()
{
  return SymCryptFdefIntGetBit();
}
