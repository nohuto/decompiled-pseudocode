/*
 * XREFs of ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x18008BFD0
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18008AEF0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18008C7A8 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
const struct COcclusionContext *__fastcall CMonitorDirty::GetOcclusionContext(
        CMonitorDirty *this,
        __int64 a2,
        double a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  CComposition *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  const struct COcclusionContext *v9; // rdi
  __int64 v10; // rbp
  unsigned int *v11; // rbx
  __m128 si128; // xmm7
  unsigned int *v13; // rbp
  __m128i v14; // xmm3
  int v15; // r13d
  __m128 v16; // xmm2
  __m128 v17; // xmm2
  __m128i v18; // xmm3
  int v19; // r14d
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  __m128i v22; // xmm3
  int v23; // esi
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128i v26; // xmm3
  int v27; // edx
  __m128 v28; // xmm2
  __int64 v29; // rax
  int *v30; // rcx
  __int64 v31; // rax
  __int64 i; // r8
  int *v33; // rax
  int *v34; // r11
  int v35; // r10d
  int *v36; // r9
  int *j; // r12
  char v38; // al
  const struct COcclusionContext *result; // rax
  int v40; // eax
  _QWORD v41[2]; // [rsp+20h] [rbp-88h] BYREF
  float v43; // [rsp+B8h] [rbp+10h]
  float v44; // [rsp+B8h] [rbp+10h]
  float v45; // [rsp+B8h] [rbp+10h]
  float v46; // [rsp+B8h] [rbp+10h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 235) + 56LL))(*((_QWORD *)this + 235));
  v6 = g_pComposition;
  v7 = 0LL;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 110);
  v9 = (const struct COcclusionContext *)(v4 + 2648);
  if ( *(_QWORD *)(v4 + 2664) != v8 )
    v9 = 0LL;
  if ( !*((_BYTE *)this + 456) )
  {
    CMergedRectBase<8>::Optimize((char *)this + 16);
    v6 = g_pComposition;
  }
  v10 = *((unsigned int *)this + 4);
  v11 = (unsigned int *)((char *)this + 20);
  v41[1] = (char *)this + 20;
  v41[0] = v10;
  if ( this == (CMonitorDirty *)-20LL && v10 )
  {
    ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v5, v8);
    __debugbreak();
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v13 = &v11[4 * v10];
  while ( v11 != v13 )
  {
    v14 = (__m128i)*v11;
    if ( (_mm_cvtsi128_si32(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v14.m128i_i32 - *(float *)v14.m128i_i32;
      v15 = (int)*(float *)v14.m128i_i32
          - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v43 = *(float *)v14.m128i_i32 + 6291456.25;
      v15 = (int)(LODWORD(v43) << 10) >> 11;
    }
    v16 = (__m128)*v11;
    v16.m128_f32[0] = *(float *)v14.m128i_i32 - (float)v15;
    v17 = _mm_and_ps(v16, si128);
    if ( v17.m128_f32[0] > 0.00390625 )
    {
      if ( *(float *)v14.m128i_i32 < -2147483600.0 )
      {
        v15 = 0x80000000;
      }
      else if ( *(float *)v14.m128i_i32 >= 2147483600.0 )
      {
        v15 = 0x7FFFFFFF;
      }
      else
      {
        v15 = (int)floorf_0(*(float *)v14.m128i_i32);
      }
    }
    v18 = (__m128i)v11[1];
    if ( (_mm_cvtsi128_si32(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v17.m128_f32[0] = (float)(int)*(float *)v18.m128i_i32 - *(float *)v18.m128i_i32;
      v19 = (int)*(float *)v18.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v17, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v44 = *(float *)v18.m128i_i32 + 6291456.25;
      v19 = (int)(LODWORD(v44) << 10) >> 11;
    }
    v20 = (__m128)v11[1];
    v20.m128_f32[0] = *(float *)v18.m128i_i32 - (float)v19;
    v21 = _mm_and_ps(v20, si128);
    if ( v21.m128_f32[0] > 0.00390625 )
    {
      if ( *(float *)v18.m128i_i32 < -2147483600.0 )
      {
        v19 = 0x80000000;
      }
      else if ( *(float *)v18.m128i_i32 >= 2147483600.0 )
      {
        v19 = 0x7FFFFFFF;
      }
      else
      {
        v19 = (int)floorf_0(*(float *)v18.m128i_i32);
      }
    }
    v22 = (__m128i)v11[2];
    if ( (_mm_cvtsi128_si32(v22) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v21.m128_f32[0] = (float)(int)*(float *)v22.m128i_i32 - *(float *)v22.m128i_i32;
      v23 = (int)*(float *)v22.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v21, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v45 = *(float *)v22.m128i_i32 + 6291456.25;
      v23 = (int)(LODWORD(v45) << 10) >> 11;
    }
    v24 = (__m128)v11[2];
    v24.m128_f32[0] = *(float *)v22.m128i_i32 - (float)v23;
    v25 = _mm_and_ps(v24, si128);
    if ( v25.m128_f32[0] > 0.00390625 )
      v23 = CFloatFPU::CeilingSat(*(float *)v22.m128i_i32);
    v26 = (__m128i)v11[3];
    if ( (_mm_cvtsi128_si32(v26) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v25.m128_f32[0] = (float)(int)*(float *)v26.m128i_i32 - *(float *)v26.m128i_i32;
      v27 = (int)*(float *)v26.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v25, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v46 = *(float *)v26.m128i_i32 + 6291456.25;
      v27 = (int)(LODWORD(v46) << 10) >> 11;
    }
    v28 = (__m128)v11[3];
    v28.m128_f32[0] = *(float *)v26.m128i_i32 - (float)v27;
    *(__m128 *)&a3 = _mm_and_ps(v28, si128);
    if ( *(float *)&a3 > 0.00390625 )
      v27 = CFloatFPU::CeilingSat(*(float *)v26.m128i_i32);
    v29 = 0LL;
    if ( v6 )
      v29 = *((_QWORD *)v6 + 110);
    if ( *((_QWORD *)v9 + 2) != v29 )
      goto LABEL_55;
    v30 = (int *)*((_QWORD *)v9 + 62);
    v31 = *v30;
    if ( !(_DWORD)v31 )
      goto LABEL_55;
    if ( v15 < v30[1] || v23 > v30[2] || v19 < v30[3] || v27 > v30[2 * v31 + 1] )
    {
      v38 = 0;
    }
    else
    {
      for ( i = 0LL; ; i += 2LL )
      {
        v33 = &v30[i + 3];
        if ( v27 <= *v33 )
        {
          v38 = 1;
          v7 = 0LL;
          goto LABEL_45;
        }
        v34 = &v30[i + 5];
        if ( v19 < *v34 )
        {
          v35 = v15;
          v36 = (int *)((char *)v33 + v33[1]);
          for ( j = (int *)((char *)v34 + v34[1]); v36 < j; v35 = v40 )
          {
            if ( *v36 > v35 )
              break;
            v40 = v36[1];
            v36 += 2;
            if ( v40 <= v35 )
              v40 = v35;
          }
          if ( v35 < v23 )
            break;
        }
      }
      v38 = 0;
      v7 = 0LL;
    }
LABEL_45:
    if ( !v38 )
      goto LABEL_55;
    v11 += 4;
  }
  if ( v9 )
  {
    result = v9;
    *((_BYTE *)this + 1873) = 0;
    return result;
  }
LABEL_55:
  if ( (int)CTargetDirtyBase<8>::CalcOcclusion(this, v41) >= 0 )
    return (CMonitorDirty *)((char *)this + 472);
  return (const struct COcclusionContext *)v7;
}
