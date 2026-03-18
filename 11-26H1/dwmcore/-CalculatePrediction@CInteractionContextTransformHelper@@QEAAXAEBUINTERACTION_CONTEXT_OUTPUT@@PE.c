/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1801161F0
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180115940 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x180116C90 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const struct MANIPULATION_TRANSFORM *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  CInteractionContextTransformHelper *v9; // r10
  char v10; // al
  char *v11; // rcx
  const struct MANIPULATION_TRANSFORM *v12; // rax
  __m128 v13; // xmm11
  int v14; // r8d
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm14_4
  __int128 v18; // xmm0
  float v19; // xmm12_4
  float v20; // xmm4_4
  __int64 v21; // xmm1_8
  float v22; // xmm14_4
  float v23; // xmm13_4
  float v24; // xmm15_4
  float v25; // xmm3_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm7_4
  char v29; // dl
  float v30; // xmm4_4
  __int128 v31; // xmm0
  __int64 v32; // r10
  __int128 v33; // xmm0
  __int64 v34; // r10
  __int128 v35; // xmm0
  unsigned __int64 v36; // xmm2_8
  float v37; // xmm8_4
  float v38; // xmm5_4
  float v39; // xmm3_4
  __int64 v40; // xmm1_8
  __int128 v41; // xmm0
  float v42; // xmm1_4
  float v43; // [rsp+38h] [rbp-91h] BYREF
  float v44; // [rsp+3Ch] [rbp-8Dh] BYREF
  float v45; // [rsp+40h] [rbp-89h] BYREF
  float v46; // [rsp+44h] [rbp-85h] BYREF
  float v47; // [rsp+48h] [rbp-81h] BYREF
  float v48; // [rsp+4Ch] [rbp-7Dh] BYREF
  __int128 v49; // [rsp+50h] [rbp-79h] BYREF
  __int128 v50; // [rsp+60h] [rbp-69h]

  v9 = this;
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v11 = (char *)this + 176;
    v10 = a5 == 1;
    *(_QWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 1) = 1065353216LL;
    *((_DWORD *)v11 + 4) = 0;
    *((_BYTE *)v9 + 196) = 0;
  }
  else
  {
    v10 = *((_BYTE *)this + 197) & (a5 == 1);
    v11 = (char *)this + 176;
  }
  *((_BYTE *)v9 + 197) = v10;
  v12 = (const struct MANIPULATION_TRANSFORM *)v11;
  if ( a3 )
    v12 = a3;
  v13 = *(__m128 *)v12;
  v14 = *((_DWORD *)v12 + 4);
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v16 = (float)(v15 - *((float *)v11 + 1)) + a7;
  *a8 = (float)(COERCE_FLOAT(*(_OWORD *)v12) - *(float *)v11) + a6;
  *a9 = v16;
  if ( *(_DWORD *)a2 == 1 && *((_DWORD *)a2 + 2) == 2 && a4 )
  {
    v17 = *((float *)a2 + 10);
    v18 = *(_OWORD *)v9;
    v19 = *(float *)v11;
    v20 = v17 + v13.m128_f32[0];
    v21 = *((_QWORD *)v9 + 2);
    v22 = v17 - *((float *)a2 + 5);
    v23 = *((float *)v9 + 45);
    v24 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v25 = *((float *)a2 + 11) + v15;
    v26 = (float)(a4->right - a4->left) - 1.0;
    v27 = (float)(a4->bottom - a4->top);
    v43 = v22;
    v28 = v27 - 1.0;
    v44 = v24;
    v45 = v19;
    v46 = v23;
    v47 = v20;
    v48 = v25;
    v49 = v18;
    *(_QWORD *)&v50 = v21;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v49) )
    {
      v31 = *((_OWORD *)v9 + 3);
      *(_QWORD *)&v50 = *((_QWORD *)v9 + 8);
      v49 = v31;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v49,
        v30,
        v25,
        &v47,
        &v48);
      v33 = *(_OWORD *)(v32 + 48);
      *(_QWORD *)&v50 = *(_QWORD *)(v32 + 64);
      v49 = v33;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v49,
        v22,
        v24,
        &v43,
        &v44);
      v35 = *(_OWORD *)(v34 + 48);
      *(_QWORD *)&v50 = *(_QWORD *)(v34 + 64);
      v49 = v35;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v49,
        v19,
        v23,
        &v45,
        &v46);
      v30 = v47;
      v25 = v48;
      v22 = v43;
      v24 = v44;
      v19 = v45;
      v23 = v46;
    }
    v36 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    if ( !*((_BYTE *)v9 + 197)
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & v36) <= v26
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & v36) <= v28 )
    {
      v29 = 0;
    }
    if ( v29 )
    {
      if ( *((_BYTE *)v9 + 196) )
      {
        *a8 = 0.0;
        *a9 = 0.0;
      }
      else
      {
        v37 = v30;
        v38 = v25;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & v36) > v26 )
        {
          v30 = v26;
          if ( v37 < 0.0 )
            LODWORD(v30) = LODWORD(v26) ^ _xmm;
          v25 = (float)(v25 * v30) / v37;
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & v36) > v28 )
        {
          v25 = v28;
          if ( v38 < 0.0 )
            LODWORD(v25) = LODWORD(v28) ^ _xmm;
          v30 = (float)(v37 * v25) / v38;
        }
        v39 = v25 - (float)(v23 + v24);
        *a8 = v30 - (float)(v19 + v22);
        *a9 = v39;
        v40 = *((_QWORD *)v9 + 2);
        v49 = *(_OWORD *)v9;
        *(_QWORD *)&v50 = v40;
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v49) )
        {
          v41 = *(_OWORD *)((char *)v9 + 72);
          v42 = *a8;
          *(_QWORD *)&v50 = *((_QWORD *)v9 + 11);
          v49 = v41;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v49,
            v42,
            v39,
            a8,
            a9);
        }
      }
    }
    *((_BYTE *)v9 + 196) = v29;
  }
  *((__m128 *)v9 + 11) = v13;
  *((_DWORD *)v9 + 48) = v14;
}
