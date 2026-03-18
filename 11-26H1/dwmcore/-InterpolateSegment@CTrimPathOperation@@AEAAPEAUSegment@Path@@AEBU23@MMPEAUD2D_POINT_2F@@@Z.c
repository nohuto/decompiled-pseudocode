/*
 * XREFs of ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x180053A48
 * Callers:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180052E94 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180053E88 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x180053FD4 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

// local variable allocation has failed, the output may be wrong!
struct Path::Segment *__fastcall CTrimPathOperation::InterpolateSegment(
        CTrimPathOperation *this,
        const struct Path::Segment *a2,
        double a3,
        float a4,
        struct D2D_POINT_2F *a5)
{
  __m128 v7; // xmm7
  char *v8; // rdi
  float *v10; // rax
  float v11; // xmm1_4
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  __m128 v19; // xmm1
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *(__m128 *)&a3;
  if ( *(_BYTE *)a2 == 5 )
  {
    v8 = (char *)this + 80;
    *((_QWORD *)this + 10) = *(_QWORD *)a2;
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 1);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 13) = *((_QWORD *)a2 + 3);
    if ( CTrimPathOperation::InterpolateBezier(this, *(float *)&a3, a4, a5 != 0LL) )
    {
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)this + 120);
      *((_QWORD *)this + 13) = *((_QWORD *)this + 17);
      if ( a5 )
        *a5 = *(struct D2D_POINT_2F *)((char *)this + 112);
    }
    else
    {
      v13 = (__m128)LODWORD(FLOAT_1_0);
      v14 = 1.0 - a4;
      v8 = (char *)this + 64;
      *((_BYTE *)this + 65) = *((_BYTE *)this + 81);
      v15 = a4 * *((float *)this + 27);
      v16 = *((float *)this + 9);
      v17 = (float)(1.0 - a4) * *((float *)this + 10);
      v18 = a4 * *((float *)this + 26);
      *((float *)this + 19) = v17 + v15;
      *((float *)this + 18) = (float)(v16 * v14) + v18;
      if ( a5 )
      {
        v13.m128_f32[0] = 1.0 - v7.m128_f32[0];
        v19 = v13;
        v13.m128_f32[0] = (float)((float)(1.0 - v7.m128_f32[0]) * *((float *)this + 10))
                        + (float)(v7.m128_f32[0] * *((float *)this + 27));
        v19.m128_f32[0] = (float)(v19.m128_f32[0] * v16) + (float)(v7.m128_f32[0] * *((float *)this + 26));
        *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v19, v13).m128_u64[0];
      }
    }
  }
  else
  {
    if ( *(_BYTE *)a2 != 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v8 = (char *)this + 64;
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    v10 = (float *)((char *)this + 72);
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
    if ( a5 )
    {
      v12 = *(__m128 *)&a3;
      v7.m128_f32[0] = (float)(*(float *)&a3 * *((float *)this + 19))
                     + (float)((float)(1.0 - *(float *)&a3) * *((float *)this + 10));
      v12.m128_f32[0] = (float)(*(float *)&a3 * *v10) + (float)((float)(1.0 - *(float *)&a3) * *((float *)this + 9));
      *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v12, v7).m128_u64[0];
    }
    v11 = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 19));
    *v10 = (float)(a4 * *v10) + (float)((float)(1.0 - a4) * *((float *)this + 9));
    *((float *)this + 19) = v11;
  }
  return (struct Path::Segment *)v8;
}
