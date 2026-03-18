/*
 * XREFs of SymCryptFdefRawSquare @ 0x14056902C
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x1405702A0 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140570340 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C9AE8 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareMulx @ 0x1405697F0 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefRawSquareAsm @ 0x140571850 (SymCryptFdefRawSquareAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
