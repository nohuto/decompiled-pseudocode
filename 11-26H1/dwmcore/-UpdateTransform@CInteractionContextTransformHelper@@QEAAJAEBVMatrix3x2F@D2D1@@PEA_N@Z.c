/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1801C14AC
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     GetInverse @ 0x1801C1780 (GetInverse.c)
 *     IsEqualMatrix @ 0x1801C184C (IsEqualMatrix.c)
 *     GetIndividualScales @ 0x1801C18A8 (GetIndividualScales.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  __int64 v6; // xmm1_8
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 v9; // xmm1
  float v10; // xmm6_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  __m128 v15; // xmm12
  __m128 v16; // xmm13
  float v17; // xmm5_4
  __m128 v18; // xmm11
  unsigned __int64 v19; // xmm7_8
  __m128 v20; // xmm6
  __int128 v21; // xmm5
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm1
  float v29; // [rsp+28h] [rbp-E0h] BYREF
  float v30; // [rsp+2Ch] [rbp-DCh] BYREF
  float v31; // [rsp+38h] [rbp-D0h] BYREF
  float v32; // [rsp+3Ch] [rbp-CCh]
  float v33; // [rsp+40h] [rbp-C8h]
  float v34; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v35; // [rsp+48h] [rbp-C0h]
  __int128 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int128 v38; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __int128 v42; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int128 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-30h]

  if ( !(unsigned __int8)IsEqualMatrix(a2, this, 0LL) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v38 = *(_OWORD *)a2;
    v39 = v6;
    Inverse = GetInverse(&v38, &v40);
    if ( Inverse >= 0 )
    {
      v7 = *(_OWORD *)a2;
      v30 = 1.0;
      v8 = *((_QWORD *)a2 + 2);
      v38 = v7;
      v29 = 1.0;
      v39 = v8;
      Inverse = GetIndividualScales(&v38, &v30, &v29);
      if ( Inverse >= 0 )
      {
        v9 = *(_OWORD *)a2;
        v37 = *((_QWORD *)a2 + 2);
        v10 = 1.0 / v30;
        v15 = (__m128)(unsigned int)v37;
        v11 = (float)(1.0 / v29) * *((float *)&v9 + 1);
        v12 = (float)(1.0 / v29) * *((float *)&v9 + 3);
        v16 = (__m128)HIDWORD(v37);
        v13 = (float)(1.0 / v30) * *((float *)&v9 + 2);
        v14 = (float)(1.0 / v30) * *(float *)&v9;
        v15.m128_f32[0] = *(float *)&v37 * (float)(1.0 / v30);
        v16.m128_f32[0] = *((float *)&v37 + 1) * (float)(1.0 / v29);
        *((float *)&v36 + 1) = v11;
        *((float *)&v36 + 3) = v12;
        v32 = v11;
        v34 = v12;
        *(float *)&v36 = v14;
        *((float *)&v36 + 2) = v13;
        v31 = v14;
        v33 = v13;
        *(float *)&v35 = v15.m128_f32[0];
        *((float *)&v35 + 1) = v16.m128_f32[0];
        Inverse = GetInverse(&v31, &v42);
        if ( Inverse >= 0 )
        {
          v31 = v14;
          *(float *)&v38 = v10;
          *(_QWORD *)((char *)&v38 + 4) = 0LL;
          v32 = v11;
          v33 = v13;
          v18 = 0LL;
          v34 = v12;
          v18.m128_f32[0] = 0.0 - (float)(v10 * 0.0);
          v20 = 0LL;
          *((float *)&v38 + 3) = v17;
          v19 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          v35 = v19;
          v20.m128_f32[0] = 0.0 - (float)(v17 * 0.0);
          Inverse = GetInverse(&v31, &v44);
          if ( Inverse >= 0 )
          {
            *(_OWORD *)this = *(_OWORD *)a2;
            v22 = v40;
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            v23 = v41;
            *(_OWORD *)((char *)this + 24) = v22;
            v24 = v36;
            *((_QWORD *)this + 5) = v23;
            *((_OWORD *)this + 3) = v24;
            *(_OWORD *)((char *)this + 72) = v42;
            v25 = v38;
            *((_QWORD *)this + 8) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
            v26 = v43;
            *((_OWORD *)this + 6) = v25;
            *(_QWORD *)&v25 = v45;
            *((_QWORD *)this + 11) = v26;
            v27 = v44;
            *(_OWORD *)((char *)this + 120) = v21;
            *((_OWORD *)this + 9) = v27;
            *((_QWORD *)this + 20) = v25;
            *((_QWORD *)this + 14) = _mm_unpacklo_ps(v18, v20).m128_u64[0];
            *((_QWORD *)this + 17) = v19;
          }
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
