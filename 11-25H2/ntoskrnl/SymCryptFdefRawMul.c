/*
 * XREFs of SymCryptFdefRawMul @ 0x14052CEB4
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x14052C824 (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x140533D40 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x140533E00 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140534080 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048E708 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulMulx @ 0x14052D190 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefRawMulAsm @ 0x1405355D0 (SymCryptFdefRawMulAsm.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
