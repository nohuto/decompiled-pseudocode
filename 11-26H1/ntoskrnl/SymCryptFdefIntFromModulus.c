/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x14056E240
 * Callers:
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1405678D0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
