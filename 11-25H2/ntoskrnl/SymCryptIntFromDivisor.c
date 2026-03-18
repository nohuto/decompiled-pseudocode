/*
 * XREFs of SymCryptIntFromDivisor @ 0x140521144
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14052C6C8 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
