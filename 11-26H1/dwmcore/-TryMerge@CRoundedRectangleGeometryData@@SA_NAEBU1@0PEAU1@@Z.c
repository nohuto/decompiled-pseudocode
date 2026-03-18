/*
 * XREFs of ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x1800DAB28
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     _CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator() @ 0x1800DA21C (_CRoundedRectangleGeometryData--TryMerge_--_2_--_lambda_1_--operator().c)
 */

char __fastcall CRoundedRectangleGeometryData::TryMerge(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CRoundedRectangleGeometryData *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  float v3; // xmm3_4
  float v7; // xmm10_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm11_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm12_4
  float v15; // xmm9_4
  float v16; // xmm14_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm15_4
  float v20; // xmm13_4
  float v21; // xmm8_4
  int v22; // xmm13_4
  int v23; // xmm8_4
  unsigned int v24; // r15d
  __m128i si128; // xmm1
  __int64 v26; // r8
  __int64 v27; // rcx
  float *v28; // r14
  const struct D2D_VECTOR_2F *v29; // r8
  bool v30; // zf
  float *v31; // r13
  float v32; // xmm0_4
  char *v33; // rdx
  __int64 v34; // rax
  const struct D2D_VECTOR_2F *v35; // rax
  char *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  const struct D2D_VECTOR_2F *v39; // r9
  __int16 *v40; // rax
  _DWORD *v41; // r8
  char v42; // cl
  char v43; // al
  float v44; // xmm0_4
  float v45; // xmm1_4
  __int16 v47; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-B8h]
  float v49; // [rsp+58h] [rbp-B0h]
  float v50; // [rsp+5Ch] [rbp-ACh]
  _DWORD *v51; // [rsp+60h] [rbp-A8h]
  const struct D2D_VECTOR_2F *v52; // [rsp+68h] [rbp-A0h]
  _DWORD v53[8]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v54[8]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v55[8]; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v56[12]; // [rsp+D0h] [rbp-38h] BYREF

  v3 = *(float *)a1;
  v7 = *((float *)a1 + 1);
  v48 = __PAIR64__(LODWORD(v7), *(_DWORD *)a1);
  if ( *((_BYTE *)a1 + 52) )
  {
    v8 = v3 + *((float *)a1 + 2);
    v9 = v7 + *((float *)a1 + 3);
  }
  else
  {
    v8 = *((float *)a1 + 2);
    v9 = *((float *)a1 + 3);
  }
  v10 = *((float *)a2 + 1);
  v11 = *(float *)a2;
  v50 = v9;
  v49 = v8;
  if ( *((_BYTE *)a2 + 52) )
  {
    v12 = v11 + *((float *)a2 + 2);
    v13 = v10 + *((float *)a2 + 3);
  }
  else
  {
    v12 = *((float *)a2 + 2);
    v13 = *((float *)a2 + 3);
  }
  if ( v11 <= v3 )
    v14 = *(float *)&v48;
  else
    v14 = v11;
  v15 = *((float *)&v48 + 1);
  v16 = *((float *)&v48 + 1);
  if ( v10 > *((float *)&v48 + 1) )
  {
    v15 = v10;
    v16 = v10;
  }
  v17 = v49;
  *(float *)&v51 = v49;
  v18 = v49;
  v19 = v49;
  if ( v49 > v12 )
  {
    *(float *)&v51 = v12;
    v18 = v12;
    v17 = v12;
    v19 = v12;
  }
  v20 = v50;
  *(float *)&v52 = v50;
  v21 = v50;
  if ( v50 > v13 )
  {
    *(float *)&v52 = v13;
    v20 = v13;
    v17 = v19;
    v21 = v13;
  }
  if ( v18 <= v14 || v20 <= v16 || (float)(v17 - 0.0000011920929) <= v14 || (float)(v21 - 0.0000011920929) <= v15 )
  {
    *((_BYTE *)a3 + 52) = 1;
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 2) = 0LL;
    *((_DWORD *)a3 + 12) = 0;
  }
  else
  {
    v22 = (int)v51;
    v23 = (int)v52;
    v24 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm_bf8000003f800000bf800000bf800000);
    *((_DWORD *)a3 + 2) = (_DWORD)v51;
    *((_DWORD *)a3 + 3) = v23;
    *(float *)a3 = v14;
    *((float *)a3 + 1) = v15;
    *((_BYTE *)a3 + 52) = 0;
    *((_OWORD *)a3 + 1) = 0LL;
    HIBYTE(v47) = 0;
    *((_OWORD *)a3 + 2) = 0LL;
    LOBYTE(v47) = 0;
    v56[1] = _mm_load_si128((const __m128i *)&_xmm);
    *(float *)v54 = v3;
    *(float *)&v54[1] = v7;
    *(float *)&v54[2] = v8;
    *(float *)&v54[3] = v7;
    *(float *)&v54[4] = v8;
    *(float *)&v54[5] = v9;
    *(float *)&v54[6] = v3;
    *(float *)&v54[7] = v9;
    *(float *)v55 = v11;
    *(float *)&v55[1] = v10;
    *(float *)&v55[2] = v12;
    *(float *)&v55[3] = v10;
    *(float *)&v55[4] = v12;
    *(float *)&v55[5] = v13;
    *(float *)&v55[6] = v11;
    *(float *)&v55[7] = v13;
    *(float *)v53 = v14;
    *(float *)&v53[1] = v15;
    v53[2] = v22;
    *(float *)&v53[3] = v15;
    v53[4] = v22;
    v53[5] = v23;
    *(float *)&v53[6] = v14;
    v53[7] = v23;
    v56[0] = si128;
    while ( v24 < 4 )
    {
      v26 = 16LL;
      v27 = 8LL * v24 + 16;
      if ( !*((_BYTE *)a1 + 52) )
        v26 = 8LL * v24 + 16;
      v28 = (float *)&v53[2 * v24];
      v29 = (const struct D2D_VECTOR_2F *)((char *)a1 + v26);
      v30 = *((_BYTE *)a2 + 52) == 0;
      v31 = (float *)&v55[2 * v24];
      v32 = *v31;
      v33 = (char *)v56 + 8 * v24;
      v34 = 16LL;
      v51 = &v54[2 * v24];
      if ( v30 )
        v34 = 8LL * v24 + 16;
      v52 = v29;
      v35 = (const struct D2D_VECTOR_2F *)((char *)a2 + v34);
      v36 = (char *)a3 + v27;
      v30 = v32 == *v28;
      v48 = (unsigned __int64)v35;
      if ( v30 && v31[1] == v28[1] )
      {
        if ( !CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator()(
                (__int64)&v47,
                (__int64)v33,
                (__int64)v31,
                v35,
                (__int64)v28,
                (__int64)v36,
                &v47) )
          return 0;
        v39 = v52;
        v40 = (__int16 *)((char *)&v47 + 1);
        v41 = v51;
      }
      else
      {
        if ( !CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator()(
                v27,
                (__int64)v33,
                (__int64)&v54[2 * v24],
                v29,
                (__int64)v28,
                (__int64)a3 + v27,
                (_BYTE *)&v47 + 1) )
          return 0;
        v39 = (const struct D2D_VECTOR_2F *)v48;
        v40 = &v47;
        v41 = &v55[2 * v24];
      }
      if ( !CRoundedRectangleGeometryData::TryMerge_::_2_::_lambda_1_::operator()(
              v38,
              v37,
              (__int64)v41,
              v39,
              (__int64)v28,
              (__int64)v36,
              v40) )
        return 0;
      ++v24;
    }
    v42 = HIBYTE(v47);
    v43 = v47;
    if ( v47 )
    {
      v44 = FLOAT_3_4028235e38;
      *((_DWORD *)a3 + 12) = 2139095039;
      if ( v42 )
      {
        v44 = *((float *)a1 + 12);
        *((float *)a3 + 12) = v44;
      }
      if ( v43 )
      {
        v45 = *((float *)a2 + 12);
        if ( v44 > v45 )
          *((float *)a3 + 12) = v45;
      }
    }
  }
  return 1;
}
