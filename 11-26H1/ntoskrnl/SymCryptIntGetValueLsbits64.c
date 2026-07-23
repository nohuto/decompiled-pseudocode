/*
 * XREFs of SymCryptIntGetValueLsbits64 @ 0x14055E7EC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptFdefIntToModulus @ 0x14056E2E4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits64 @ 0x14056FDAC (SymCryptFdefIntGetValueLsbits64.c)
 */

__int64 SymCryptIntGetValueLsbits64()
{
  return SymCryptFdefIntGetValueLsbits64();
}
