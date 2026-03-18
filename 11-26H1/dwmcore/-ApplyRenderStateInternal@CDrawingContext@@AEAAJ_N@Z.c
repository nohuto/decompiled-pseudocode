/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C9380 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298 (-DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801D76FC (-Clear@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180234FCC (-DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180235D6C (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18006FB70 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  char v2; // si
  unsigned int v3; // r14d
  __int64 result; // rax
  __int64 v6; // rcx
  __m128 v7; // xmm6
  __m128 si128; // xmm7
  float v9; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm8_4
  float v12; // xmm3_4
  __m128 v13; // xmm6
  float v14; // xmm4_4
  float v15; // xmm5_4
  __m128 v16; // xmm6
  float v17; // xmm11_4
  unsigned int v18; // r15d
  __m128 v19; // xmm6
  __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // eax
  CBatchOptimizer *v23; // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // r12
  int v26; // ebx
  bool v27; // zf
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int128 v30; // xmm0
  int v31; // ebx
  float v32; // xmm7_4
  int v33; // eax
  float v34; // xmm8_4
  int v35; // eax
  float v36; // xmm10_4
  int v37; // eax
  float v38; // xmm9_4
  __m128 v39; // xmm1
  __int64 v40; // rcx
  int v41; // eax
  __m128 v42; // xmm1
  __m128 v43; // xmm1
  __int64 v44; // rcx
  int v45; // eax
  __m128 v46; // xmm0
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  int v53; // eax
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-79h]
  _DWORD v56[2]; // [rsp+30h] [rbp-69h] BYREF
  __m128i v57; // [rsp+38h] [rbp-61h] BYREF
  __int64 v58; // [rsp+48h] [rbp-51h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 93) - 8LL) )
    v2 = a2;
  if ( !v2 )
  {
    v53 = CDrawingContext::FlushAllDeferredClipping(this);
    v3 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1D6u, 0LL);
      return v3;
    }
  }
  if ( !*((_BYTE *)this + 8065) )
    return v3;
  v6 = *((_QWORD *)this + 93);
  v7 = 0LL;
  v57 = 0LL;
  if ( v6 == *((_QWORD *)this + 92) )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v9) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
    LODWORD(v10) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
    LODWORD(v11) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
LABEL_9:
    v12 = v11;
    v13 = _mm_shuffle_ps(si128, si128, 225);
    v14 = v10;
    v13.m128_f32[0] = v11;
    v15 = v9;
    v16 = _mm_shuffle_ps(v13, v13, 198);
    v17 = si128.m128_f32[0];
    v16.m128_f32[0] = v10;
    v18 = 0;
    v19 = _mm_shuffle_ps(v16, v16, 39);
    v19.m128_f32[0] = v9;
    v7 = _mm_shuffle_ps(v19, v19, 57);
    v57 = (__m128i)v7;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(v6 - 184) )
  {
    v41 = *((_DWORD *)this + 778);
    if ( !v41 )
    {
      v43 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      LODWORD(v9) = _mm_shuffle_ps(v43, v43, 255).m128_u32[0];
      LODWORD(v10) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
      v57 = (__m128i)v43;
      goto LABEL_50;
    }
    v42 = *(__m128 *)(*((_QWORD *)this + 388) + 16LL * (unsigned int)(v41 - 1));
    LODWORD(v9) = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
    v57 = (__m128i)v42;
    LODWORD(v10) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(v6 - 192) + 88LL))(*(_QWORD *)(v6 - 192), v56);
    v10 = (float)v56[0];
    v9 = (float)v56[1];
  }
  v43 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_50:
  if ( v2 || (v44 = *((_QWORD *)this + 93), v44 == *((_QWORD *)this + 92)) || !*(_QWORD *)(v44 - 168) )
  {
    v11 = *(float *)&v57.m128i_i32[1];
    si128 = (__m128)v57.m128i_u32[0];
  }
  else
  {
    v45 = *((_DWORD *)this + 784);
    if ( v45 )
      v46 = *(__m128 *)(*((_QWORD *)this + 391) + 16LL * (unsigned int)(v45 - 1));
    else
      v46 = v43;
    si128 = (__m128)v57.m128i_u32[0];
    if ( v46.m128_f32[0] > *(float *)v57.m128i_i32 )
      si128 = v46;
    v11 = *(float *)&v57.m128i_i32[1];
    v47 = *(float *)&v57.m128i_i32[1];
    v48 = _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
    if ( v48 > *(float *)&v57.m128i_i32[1] )
    {
      v11 = v48;
      v47 = v48;
    }
    v49 = v10;
    v50 = _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
    if ( v10 > v50 )
    {
      v10 = v50;
      v49 = v50;
    }
    v51 = v9;
    v52 = _mm_shuffle_ps(v46, v46, 255).m128_f32[0];
    if ( v9 > v52 )
    {
      v9 = v52;
      v51 = v52;
    }
    if ( v49 <= si128.m128_f32[0] || v51 <= v47 )
    {
      v9 = 0.0;
      v10 = 0.0;
      v11 = 0.0;
      si128.m128_i32[0] = 0;
      goto LABEL_70;
    }
  }
  if ( v10 > si128.m128_f32[0] && v9 > v11 )
    goto LABEL_9;
LABEL_70:
  LODWORD(v15) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
  LODWORD(v14) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v18 = 1;
  LODWORD(v12) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v17 = 0.0;
LABEL_10:
  v20 = *((_QWORD *)this + 4);
  v21 = 0LL;
  v22 = *(_DWORD *)(v20 + 360);
  if ( v22 )
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 336) + 8LL * (unsigned int)(v22 - 1));
  if ( !*(_BYTE *)(v20 + 445)
    || *(_BYTE *)(v20 + 447)
    || v18 != *(_DWORD *)(v20 + 424)
    || v17 != *(float *)(v20 + 408)
    || v12 != *(float *)(v20 + 412)
    || v14 != *(float *)(v20 + 416)
    || v15 != *(float *)(v20 + 420) )
  {
    if ( *(_QWORD *)(v20 + 152) )
    {
      v23 = *(CBatchOptimizer **)(v20 + 160);
      if ( v23 )
        CBatchOptimizer::Flush(v23);
      v24 = *(_QWORD *)(v20 + 152);
      *(_DWORD *)(v24 + 44) = *(_DWORD *)(v20 + 48);
      *(_QWORD *)(v24 + 32) = 0LL;
      v25 = *(volatile signed __int32 **)(v20 + 152);
      *(_QWORD *)(v20 + 152) = 0LL;
      if ( v25 )
      {
        CD2DContext::EnsureBeginDraw((CD2DContext *)(v20 + 16));
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)(v20 + 224) + 120LL))(
          *(_QWORD *)(v20 + 224),
          v25);
        v26 = _InterlockedDecrement(v25 + 2);
        if ( v26 < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v55);
        if ( !v26 )
        {
          if ( _InterlockedAdd(v25 + 2, 1u) <= 0 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v55);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 40LL))(v25);
          v54 = _InterlockedDecrement(v25 + 2);
          v56[0] = v54;
          if ( v54 < -1 )
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v55);
            v54 = v56[0];
          }
          if ( !v54 )
          {
            if ( _InterlockedDecrement(v25 + 2) < -1 )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x26,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v55);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 32LL))(v25, 1LL);
          }
        }
      }
    }
    v27 = *(_BYTE *)(v21 + 78) == 0;
    *(__m128 *)(v21 + 52) = v7;
    *(_DWORD *)(v21 + 68) = v18;
    if ( !v27 )
    {
      v28 = *(_QWORD *)(v21 + 16);
      v57 = _mm_load_si128((const __m128i *)&_xmm);
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(v28 + 200) + 240LL))(*(_QWORD *)(v28 + 200), &v57);
      v29 = *(_QWORD *)(v28 + 208);
      *(_BYTE *)(v28 + 431) = 0;
      v30 = *(_OWORD *)(v21 + 52);
      *(_DWORD *)(v28 + 408) = v18;
      *(_OWORD *)(v28 + 392) = v30;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 80LL))(v29, v21 + 52, v18);
    }
    *(_BYTE *)(v21 + 77) = 1;
  }
  v31 = 0x7FFFFFFF;
  v32 = si128.m128_f32[0] - 0.5;
  if ( v32 < -2147483600.0 )
  {
    v33 = 0x80000000;
  }
  else if ( v32 >= 2147483600.0 )
  {
    v33 = 0x7FFFFFFF;
  }
  else
  {
    v33 = (int)ceilf_0(v32);
  }
  v34 = v11 - 0.5;
  *(float *)v57.m128i_i32 = (float)v33;
  if ( v34 < -2147483600.0 )
  {
    v35 = 0x80000000;
  }
  else if ( v34 >= 2147483600.0 )
  {
    v35 = 0x7FFFFFFF;
  }
  else
  {
    v35 = (int)ceilf_0(v34);
  }
  v36 = v10 - 0.5;
  *(float *)&v57.m128i_i32[1] = (float)v35;
  if ( v36 < -2147483600.0 )
  {
    v37 = 0x80000000;
  }
  else if ( v36 >= 2147483600.0 )
  {
    v37 = 0x7FFFFFFF;
  }
  else
  {
    v37 = (int)ceilf_0(v36);
  }
  v38 = v9 - 0.5;
  *(float *)&v57.m128i_i32[2] = (float)v37;
  if ( v38 < -2147483600.0 )
  {
    v31 = 0x80000000;
  }
  else if ( v38 < 2147483600.0 )
  {
    v31 = (int)ceilf_0(v38);
  }
  *((_BYTE *)this + 8065) = 0;
  v39 = _mm_shuffle_ps((__m128)v57, (__m128)v57, 147);
  v39.m128_f32[0] = (float)v31;
  *(__m128 *)((char *)this + 216) = _mm_shuffle_ps(v39, v39, 57);
  if ( !v2 )
    return v3;
  v40 = *((_QWORD *)this + 93);
  if ( v40 == *((_QWORD *)this + 92) || !*(_QWORD *)(v40 - 176) )
    return v3;
  result = v3;
  if ( *(_QWORD *)(*((_QWORD *)this + 336) - 24LL) )
    *((_BYTE *)this + 8066) = 1;
  return result;
}
