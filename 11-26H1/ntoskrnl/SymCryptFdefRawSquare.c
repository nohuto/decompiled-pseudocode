/*
 * XREFs of SymCryptFdefRawSquare @ 0x14056820C
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x14056F480 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x14056F520 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C3508 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareMulx @ 0x1405689D0 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefRawSquareAsm @ 0x140570A30 (SymCryptFdefRawSquareAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
