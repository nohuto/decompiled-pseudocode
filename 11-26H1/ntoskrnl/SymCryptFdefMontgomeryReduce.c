/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x14056F890
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x14056EDF0 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x14056F010 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x14056F1D0 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x14056F290 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x14056F520 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C3508 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x140569480 (SymCryptFdefMontgomeryReduceMulx.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140570DF0 (SymCryptFdefMontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __m128i *a2, __m128i *a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
