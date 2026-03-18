/*
 * XREFs of SymCryptIntSubSameSize @ 0x14055C42C
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntSubSameSize @ 0x140568A78 (SymCryptFdefIntSubSameSize.c)
 */

__int64 SymCryptIntSubSameSize()
{
  return SymCryptFdefIntSubSameSize();
}
