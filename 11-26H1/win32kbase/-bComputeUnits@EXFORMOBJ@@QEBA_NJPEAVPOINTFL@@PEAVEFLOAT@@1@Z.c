/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401F1450
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140038E54 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z @ 0x1400C07F0 (-bXform@EXFORMOBJ@@QEBA_NPEBVVECTORFL@@PEAV2@_K@Z.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x140133F40 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 *     ?efSin@@YA?AVEFLOAT@@V1@@Z @ 0x14014A420 (-efSin@@YA-AVEFLOAT@@V1@@Z.c)
 */

char __fastcall EXFORMOBJ::bComputeUnits(
        float **this,
        int a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  float *v5; // rbx
  int v9; // r10d
  unsigned int v10; // esi
  float v11; // xmm2_4
  float v12; // xmm1_4
  char v13; // dl
  int v14; // xmm4_4
  int v15; // xmm5_4
  __m128i v16; // xmm0
  __m128i v17; // xmm6
  float v19; // [rsp+20h] [rbp-40h] BYREF
  int v20; // [rsp+24h] [rbp-3Ch] BYREF
  float v21[6]; // [rsp+28h] [rbp-38h] BYREF

  v5 = *this;
  v9 = -a2;
  v19 = 0.0;
  if ( a2 > 0 )
    v9 = a2;
  v10 = (unsigned int)a2 >> 31;
  if ( ((_BYTE)v5[8] & 1) == 0 || v9 != 900 * (v9 / 900) )
  {
    v16 = (__m128i)COERCE_UNSIGNED_INT((float)v9);
    *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 / 10.0;
    v17 = v16;
    *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 + *(float *)&FP_90_0;
    LODWORD(v21[0]) = efSin((unsigned int)_mm_cvtsi128_si32(v16));
    LODWORD(v21[1]) = efSin((unsigned int)_mm_cvtsi128_si32(v17));
    if ( ((_DWORD)v5[8] & 2) != 0 || EXFORMOBJ::bXform(this, (const struct VECTORFL *)v21, (struct VECTORFL *)v21, 1LL) )
    {
      EFLOAT::eqLength((EFLOAT *)&v19, &v20, v21);
      if ( !EFLOAT::bIsZero((EFLOAT *)&v19) )
      {
        v11 = v21[1] / v19;
        v12 = v19 * 16.0;
        v21[0] = v21[0] / v19;
        goto LABEL_18;
      }
    }
    return 0;
  }
  if ( ((v9 / 900) & 1) != 0 )
  {
    v21[1] = FLOAT_1_0;
    v11 = FLOAT_1_0;
    v21[0] = 0.0;
    v12 = v5[3];
  }
  else
  {
    v11 = 0.0;
    *(_QWORD *)v21 = 1065353216LL;
    v12 = *v5;
  }
  v19 = v12;
  if ( EFLOAT::bIsZero((EFLOAT *)&v19) )
    return 0;
  if ( (v13 & 2) != 0 )
    LODWORD(v12) ^= _xmm;
  if ( v12 >= 0.0 )
    goto LABEL_19;
  LODWORD(v21[0]) = v14 ^ _xmm;
  LODWORD(v12) ^= _xmm;
  LODWORD(v11) = v15 ^ _xmm;
LABEL_18:
  v21[1] = v11;
LABEL_19:
  if ( (_BYTE)v10 )
    LODWORD(v21[1]) = LODWORD(v11) ^ _xmm;
  *(_QWORD *)a3 = *(_QWORD *)v21;
  *(float *)a4 = v12;
  if ( a5 )
    *(float *)a5 = 1.0 / v12;
  return 1;
}
