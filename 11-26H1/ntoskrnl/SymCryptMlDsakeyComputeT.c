/*
 * XREFs of SymCryptMlDsakeyComputeT @ 0x1405747F8
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055D64C (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140572CA0 (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaPolyElementMulR @ 0x140573454 (SymCryptMlDsaPolyElementMulR.c)
 *     SymCryptMlDsaVectorAdd @ 0x140574290 (SymCryptMlDsaVectorAdd.c)
 *     SymCryptMlDsaVectorINTT @ 0x14057448C (SymCryptMlDsaVectorINTT.c)
 *     SymCryptMlDsaVectorPower2Round @ 0x1405746E0 (SymCryptMlDsaVectorPower2Round.c)
 */

__int64 __fastcall SymCryptMlDsakeyComputeT(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  unsigned __int8 i; // di

  SymCryptMlDsaMatrixVectorMontMul(a1, a2, (__int64)a6, a7);
  for ( i = 0; i < *a6; ++i )
    SymCryptMlDsaPolyElementMulR(&a6[1024 * (unsigned __int64)i + 8]);
  SymCryptMlDsaVectorAdd(a6, a3, (__int64)a6);
  SymCryptMlDsaVectorINTT(a6);
  return SymCryptMlDsaVectorPower2Round(a6, a5, a4);
}
