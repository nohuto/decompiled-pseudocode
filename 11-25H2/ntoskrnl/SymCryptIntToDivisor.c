/*
 * XREFs of SymCryptIntToDivisor @ 0x14052132C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefIntToModulus @ 0x1405330E4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntToDivisor @ 0x14052CA9C (SymCryptFdefIntToDivisor.c)
 */

__int64 __fastcall SymCryptIntToDivisor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToDivisor(a1, a2, a3, a4, a5, a6);
}
