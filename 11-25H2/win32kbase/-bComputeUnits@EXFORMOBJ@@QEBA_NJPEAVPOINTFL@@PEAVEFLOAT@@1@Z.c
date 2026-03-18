/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401C69B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400985F8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1400EB5A0 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z @ 0x140107390 (-bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z.c)
 *     ?efSin@@YA?AVEFLOAT@@V1@@Z @ 0x14010E800 (-efSin@@YA-AVEFLOAT@@V1@@Z.c)
 */

char __fastcall EXFORMOBJ::bComputeUnits(
        float **this,
        __int64 a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  float *v5; // rbx
  int v9; // r10d
  unsigned int v10; // esi
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  char v14; // dl
  float v15; // xmm4_4
  int v16; // xmm5_4
  __m128i v17; // xmm0
  __m128i v18; // xmm6
  __int64 v19; // rdx
  float v21; // [rsp+24h] [rbp-4Ch] BYREF
  int v22; // [rsp+28h] [rbp-48h] BYREF
  float v23[8]; // [rsp+30h] [rbp-40h] BYREF

  v5 = *this;
  v9 = -(int)a2;
  v21 = 0.0;
  if ( (int)a2 > 0 )
    v9 = a2;
  v10 = (unsigned int)a2 >> 31;
  if ( ((_BYTE)v5[8] & 1) == 0 || (a2 = (unsigned int)(v9 / 900), v9 != 900 * (_DWORD)a2) )
  {
    v17 = (__m128i)COERCE_UNSIGNED_INT((float)v9);
    *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 / 10.0;
    v18 = v17;
    *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 + *(float *)&FP_90_0;
    LODWORD(v23[0]) = efSin(_mm_cvtsi128_si32(v17), a2);
    LODWORD(v23[1]) = efSin(_mm_cvtsi128_si32(v18), v19);
    if ( ((_DWORD)v5[8] & 2) != 0 || EXFORMOBJ::bXform(this, (const struct VECTORFL *)v23, (struct VECTORFL *)v23, 1LL) )
    {
      EFLOAT::eqLength((EFLOAT *)&v21, &v22, v23);
      if ( !EFLOAT::bIsZero((EFLOAT *)&v21) )
      {
        v12 = v23[1] / v21;
        v13 = v21 * 16.0;
        v23[0] = v23[0] / v21;
        goto LABEL_18;
      }
    }
    return 0;
  }
  if ( (a2 & 1) != 0 )
  {
    v11 = 0.0;
    v23[1] = FLOAT_1_0;
    v23[0] = 0.0;
    v12 = FLOAT_1_0;
    v13 = v5[3];
  }
  else
  {
    v12 = 0.0;
    *(_QWORD *)v23 = LODWORD(FLOAT_1_0);
    v11 = FLOAT_1_0;
    v13 = *v5;
  }
  v21 = v13;
  if ( EFLOAT::bIsZero((EFLOAT *)&v21) )
    return 0;
  if ( (v14 & 2) != 0 )
    LODWORD(v13) ^= _xmm;
  if ( v15 <= v13 )
    goto LABEL_19;
  LODWORD(v23[0]) = LODWORD(v11) ^ _xmm;
  LODWORD(v13) ^= _xmm;
  LODWORD(v12) = v16 ^ _xmm;
LABEL_18:
  v23[1] = v12;
LABEL_19:
  if ( (_BYTE)v10 )
    LODWORD(v23[1]) = LODWORD(v12) ^ _xmm;
  *(_QWORD *)a3 = *(_QWORD *)v23;
  *(float *)a4 = v13;
  if ( a5 )
    *(float *)a5 = 1.0 / v13;
  return 1;
}
