/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x1405706B0
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x14056FC10 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x14056FE30 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x14056FFF0 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x1405700B0 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140570340 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C9AE8 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14056A2A0 (SymCryptFdefMontgomeryReduceMulx.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140571C10 (SymCryptFdefMontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __m128i *a2, __m128i *a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
