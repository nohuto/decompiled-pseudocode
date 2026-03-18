/*
 * XREFs of SymCryptIntCopy @ 0x140521090
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntCopy @ 0x140534A28 (SymCryptFdefIntCopy.c)
 */

__int64 SymCryptIntCopy()
{
  return SymCryptFdefIntCopy();
}
