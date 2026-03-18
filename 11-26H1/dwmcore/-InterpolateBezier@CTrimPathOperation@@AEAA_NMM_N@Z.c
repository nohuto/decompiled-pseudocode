/*
 * XREFs of ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4
 * Callers:
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x180053A48 (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800543D4 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180054480 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x1800546A0 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1800551DC (-TrimToEndAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18005534C (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 *     ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801AD1EC (-TrimToStartAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     _hypot_0 @ 0x1802B9684 (_hypot_0.c)
 */

char __fastcall CTrimPathOperation::InterpolateBezier(CTrimPathOperation *this, float a2, float a3, char a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  float *v7; // rcx
  float v9; // xmm8_4
  float v10; // xmm3_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm10_4
  unsigned __int32 v17; // xmm4_4
  float v18; // xmm0_4
  unsigned int v19; // edi
  float *v20; // rax
  __int64 v21; // rbp
  float v22; // xmm11_4
  __int64 v23; // rax
  int v24; // xmm0_4
  __int128 v25; // xmm7
  unsigned int v26; // esi
  __int128 v27; // xmm6
  bool v28; // zf
  __int64 v29; // r13
  float v30; // xmm1_4
  float v31; // xmm6_4
  char *v32; // rcx
  int v34; // xmm0_4
  int v35; // [rsp+40h] [rbp-B8h]
  float v36; // [rsp+44h] [rbp-B4h]
  char v37; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+110h] [rbp+18h] BYREF
  char v39; // [rsp+118h] [rbp+20h]

  v7 = (float *)((char *)this + 112);
  v9 = *((float *)this + 24);
  v10 = *((float *)this + 26);
  v11 = *((float *)this + 9);
  v12 = *((float *)this + 27);
  v13 = *((float *)this + 10);
  v14 = *((float *)this + 22);
  v15 = *((float *)this + 23);
  v16 = *((float *)this + 25);
  v7[14] = v10 - v11;
  v7[3] = v15;
  *v7 = v11;
  v7[1] = v13;
  v7[12] = v11;
  v7[13] = v13;
  v7[2] = v14;
  v7[15] = v12 - v13;
  v7[4] = v9;
  v7[5] = v16;
  v7[6] = v10;
  v7[7] = v12;
  v7[16] = (float)((float)(v14 - (float)(v9 + v9)) + v10) * 6.0;
  v7[17] = (float)((float)(v15 - (float)(v16 + v16)) + v12) * 6.0;
  v17 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v18 = v7[3] + v7[3];
  v7[18] = (float)((float)(v11 - (float)(v14 + v14)) + v9) * 6.0;
  v7[21] = 0.0;
  v7[22] = 1.0;
  *((_DWORD *)v7 + 20) = 1;
  v7[19] = (float)((float)(v13 - v18) + v16) * 6.0;
  while ( (fmaxf(COERCE_FLOAT((_DWORD)v7[16] & v17), COERCE_FLOAT((_DWORD)v7[17] & v17)) > v7[8]
        || fmaxf(COERCE_FLOAT((_DWORD)v7[18] & v17), COERCE_FLOAT((_DWORD)v7[19] & v17)) > v7[8])
       && v7[22] > 0.001 )
    CBezierFlattener<float,CMilPoint2F>::HalveTheStep(v7, v4, v5);
  v19 = 0;
  v20 = (float *)((char *)this + 84);
  v21 = 0LL;
  if ( a4 )
  {
    v19 = 1;
    v36 = a2 * *v20;
  }
  if ( a3 == 1.0 )
  {
    if ( !a4 || COERCE_FLOAT(LODWORD(a2) & v17) < 0.0000011920929 )
      return 1;
  }
  else
  {
    v22 = a3 * *v20;
    v23 = v19++;
    *(&v36 + 2 * v23) = v22;
  }
  if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent((char *)this + 112, &v37) >= 0 )
  {
    v24 = *((_DWORD *)this + 10);
    v25 = 0LL;
    *((_DWORD *)this + 51) = *((_DWORD *)this + 9);
    *((_DWORD *)this + 52) = v24;
    for ( *((_DWORD *)this + 83) = 0; ; *((_DWORD *)this + 83) = *((_DWORD *)this + 98) )
    {
      v38 = 0;
      v39 = CBezierFlattener<float,CMilPoint2F>::Flatten(
              (int)this + 112,
              (int)this + 212,
              (int)this + 112,
              (int)this + 336,
              15,
              (__int64)&v38,
              1);
      v26 = 0;
      do
      {
        v27 = v25;
        while ( 1 )
        {
          v28 = v26 == v38;
          if ( v26 >= v38 )
            break;
          v29 = v26 + 1;
          v30 = hypot_0(
                  (float)(*((float *)this + 2 * v29 + 51) - *((float *)this + 2 * v26 + 51)),
                  (float)(*((float *)this + 2 * v29 + 52) - *((float *)this + 2 * v26 + 52)));
          *(float *)&v27 = *(float *)&v27 + v30;
          if ( *(float *)&v27 > *(&v36 + 2 * v21) )
          {
            v28 = v26 == v38;
            v31 = (float)(*(float *)&v27 - *(&v36 + 2 * v21)) / v30;
            *((float *)&v35 + 2 * v21) = (float)((float)(1.0 - (float)(1.0 - v31)) * *((float *)this + v26 + 83))
                                       + (float)((float)(1.0 - v31) * *((float *)this + v29 + 83));
            break;
          }
          v25 = v27;
          ++v26;
        }
        if ( v28 )
          break;
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (_DWORD)v21 != v19 );
      if ( (_DWORD)v21 == v19 )
        break;
      if ( !v39 )
        return 0;
      v34 = *((_DWORD *)this + 82);
      *((_DWORD *)this + 51) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 52) = v34;
    }
    v32 = (char *)this + 112;
    if ( !a4 )
    {
      CBezier<float,CMilPoint2F>::TrimToEndAt(v32);
      return 1;
    }
    if ( v19 == 1 )
    {
      CBezier<float,CMilPoint2F>::TrimToStartAt(v32);
      return 1;
    }
    if ( (unsigned __int8)CBezier<float,CMilPoint2F>::TrimBetween(v32) )
      return 1;
  }
  return 0;
}
