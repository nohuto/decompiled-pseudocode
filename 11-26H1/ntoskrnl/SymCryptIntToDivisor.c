/*
 * XREFs of SymCryptIntToDivisor @ 0x14055C45C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefIntToModulus @ 0x14056F104 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntToDivisor @ 0x140568AC4 (SymCryptFdefIntToDivisor.c)
 */

__int64 __fastcall SymCryptIntToDivisor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToDivisor(a1, a2, a3, a4, a5, a6);
}
