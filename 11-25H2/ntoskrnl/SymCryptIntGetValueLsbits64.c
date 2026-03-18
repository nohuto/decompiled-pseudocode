/*
 * XREFs of SymCryptIntGetValueLsbits64 @ 0x1405211D4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptFdefIntToModulus @ 0x1405330E4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits64 @ 0x140534B84 (SymCryptFdefIntGetValueLsbits64.c)
 */

__int64 SymCryptIntGetValueLsbits64()
{
  return SymCryptFdefIntGetValueLsbits64();
}
