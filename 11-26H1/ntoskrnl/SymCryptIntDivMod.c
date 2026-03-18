/*
 * XREFs of SymCryptIntDivMod @ 0x14055C208
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntDivMod @ 0x140568528 (SymCryptFdefIntDivMod.c)
 */

__int64 __fastcall SymCryptIntDivMod(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntDivMod(a1, a2, a3, a4, a5, a6);
}
