/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x14056F060
 * Callers:
 *     SymCryptIntFromModulus @ 0x14055C28C (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1405686F0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
