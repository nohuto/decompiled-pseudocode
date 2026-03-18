/*
 * XREFs of SymCryptIntGetValueLsbits64 @ 0x14055C304
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptFdefIntToModulus @ 0x14056F104 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits64 @ 0x140570BCC (SymCryptFdefIntGetValueLsbits64.c)
 */

__int64 SymCryptIntGetValueLsbits64()
{
  return SymCryptFdefIntGetValueLsbits64();
}
