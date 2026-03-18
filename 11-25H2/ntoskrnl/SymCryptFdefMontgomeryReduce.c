/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x140534670
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140533BE0 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x140533E00 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x140533FC0 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140534080 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140534300 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048E708 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14052E280 (SymCryptFdefMontgomeryReduceMulx.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140535BC0 (SymCryptFdefMontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __m128i *a2, __m128i *a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
