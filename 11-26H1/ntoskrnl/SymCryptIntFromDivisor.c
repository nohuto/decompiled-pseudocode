/*
 * XREFs of SymCryptIntFromDivisor @ 0x14055C274
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1405686F0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
