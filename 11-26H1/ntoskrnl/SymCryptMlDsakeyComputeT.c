/*
 * XREFs of SymCryptMlDsakeyComputeT @ 0x140573A5C
 * Callers:
 *     SymCryptMlDsaKeyGenerateEx @ 0x14055FB34 (SymCryptMlDsaKeyGenerateEx.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 * Callees:
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140571EAC (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaPolyElementMulR @ 0x140572660 (SymCryptMlDsaPolyElementMulR.c)
 *     SymCryptMlDsaVectorAdd @ 0x1405734F4 (SymCryptMlDsaVectorAdd.c)
 *     SymCryptMlDsaVectorINTT @ 0x1405736F0 (SymCryptMlDsaVectorINTT.c)
 *     SymCryptMlDsaVectorPower2Round @ 0x140573944 (SymCryptMlDsaVectorPower2Round.c)
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
