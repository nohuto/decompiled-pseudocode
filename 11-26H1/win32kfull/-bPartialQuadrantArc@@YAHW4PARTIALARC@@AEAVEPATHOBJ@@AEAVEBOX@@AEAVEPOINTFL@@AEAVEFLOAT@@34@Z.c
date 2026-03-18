/*
 * XREFs of ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x140111548
 * Callers:
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1401111E4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x14011184C (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bPartialQuadrantArc(int a1, __int64 a2, EBOX *a3, float *a4, float *a5, float *a6, unsigned int *a7)
{
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  __m128i v17; // xmm1
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm5_4
  _QWORD *v28; // rax
  int v30; // ebx
  char v31; // al
  float v32; // xmm0_4
  _BYTE v33[4]; // [rsp+28h] [rbp-81h] BYREF
  float v34; // [rsp+2Ch] [rbp-7Dh]
  __int64 v35; // [rsp+30h] [rbp-79h]
  __int64 v36; // [rsp+38h] [rbp-71h]
  float v37; // [rsp+40h] [rbp-69h]
  float v38; // [rsp+44h] [rbp-65h]
  _BYTE *v39; // [rsp+48h] [rbp-61h] BYREF
  __int64 v40; // [rsp+50h] [rbp-59h]
  __int64 v41; // [rsp+58h] [rbp-51h]
  __int16 v42; // [rsp+60h] [rbp-49h]
  unsigned __int64 v43; // [rsp+68h] [rbp-41h]
  _QWORD v44[3]; // [rsp+70h] [rbp-39h] BYREF

  v7 = *a4;
  v8 = a4[1];
  v12 = *a6;
  v14 = a6[1];
  v15 = (float)(*a4 * v14) - (float)(v8 * *a6);
  v16 = v15;
  if ( v15 < 0.0 )
    LODWORD(v16) = LODWORD(v15) ^ _xmm;
  if ( FP_EPSILON >= v16 )
  {
    v35 = *(_QWORD *)a4;
    v36 = v35;
    v32 = a6[1];
    v37 = *a6;
    v38 = v32;
    v43 = __PAIR64__(LODWORD(v32), LODWORD(v37));
  }
  else
  {
    v17 = (__m128i)*a7;
    v34 = *a4;
    v18 = (float)(v14 - v8) / v16;
    *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 - *a5) * 0.5;
    v19 = (float)(v7 - v12) / v16;
    v20 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v17)));
    if ( v20 < 0.0 )
      LODWORD(v20) ^= _xmm;
    v21 = (float)(FP_4DIV3 * v20) / (float)(FP_1_0 + v20);
    v35 = *(_QWORD *)a4;
    v22 = FP_1_0 - v21;
    v23 = v21 * v19;
    v24 = (float)((float)(FP_4DIV3 * v20) / (float)(FP_1_0 + v20)) * v18;
    v25 = (float)(v22 * *(float *)&v35) + v24;
    *((float *)&v36 + 1) = (float)(v22 * *((float *)&v35 + 1)) + v23;
    v26 = v22 * *a6;
    v27 = v22 * a6[1];
    *(float *)&v36 = v25;
    v37 = v26 + v24;
    v43 = *(_QWORD *)a6;
    v38 = v27 + v23;
  }
  if ( !a1 )
    goto LABEL_8;
  EBOX::ptlXform(a3, (struct EPOINTFL *)v33);
  v30 = a1 - 1;
  if ( v30 )
  {
    if ( v30 != 1 )
    {
LABEL_8:
      v44[0] = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)v33);
      v44[1] = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)v33);
      v28 = (_QWORD *)EBOX::ptlXform(a3, (struct EPOINTFL *)v33);
      v41 = 0LL;
      v40 = 3LL;
      v42 = 0;
      v44[2] = *v28;
      v39 = v44;
      return (unsigned __int8)EPATHOBJ::bPolyBezierTo(a2, 0LL, &v39, 3LL);
    }
    v40 = 1LL;
    v39 = v33;
    v41 = 0LL;
    v42 = 0;
    v31 = EPATHOBJ::bPolyLineTo(a2, 0LL, &v39, 1LL);
  }
  else
  {
    v40 = 1LL;
    v39 = v33;
    v41 = 0LL;
    v42 = 0;
    v31 = EPATHOBJ::bMoveTo(a2, 0LL, &v39);
  }
  if ( v31 )
    goto LABEL_8;
  return 0LL;
}
