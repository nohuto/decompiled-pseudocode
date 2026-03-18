/*
 * XREFs of ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x1800E8CE8
 * Callers:
 *     _CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1_::operator() @ 0x1800180A8 (_CBlurRenderingGraphBuilder--BuildPrescale_--_2_--_lambda_1_--operator().c)
 *     _CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_1_::operator() @ 0x180018B84 (_CBlurRenderingGraphBuilder--BuildOnePass_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  __m128 v4; // xmm2
  __m128i v5; // xmm0
  CExternalLayer *v6; // rsi
  __int64 v7; // r15
  int v8; // ebx
  __int64 v10; // r14
  __m128i v12; // xmm3
  int v13; // ecx
  int v14; // ecx
  __int64 *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  CExternalLayer *v18; // rbx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // r12d
  int v32; // ebx
  __int64 v33; // rbx
  __int64 v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // eax
  int v44; // eax
  CExternalLayer *v45; // [rsp+30h] [rbp-39h] BYREF
  __int128 v46; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-21h]
  char v48[8]; // [rsp+50h] [rbp-19h] BYREF
  int v49; // [rsp+58h] [rbp-11h]
  _BYTE v50[4]; // [rsp+68h] [rbp-1h] BYREF
  int v51; // [rsp+6Ch] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = (__m128i)*a4;
  v6 = 0LL;
  v7 = *a1;
  v8 = *((_DWORD *)a1 + 2);
  v10 = a1[2];
  v47 = a2;
  if ( *(float *)v5.m128i_i32 <= 0.0 || (v12 = (__m128i)a4[1], *(float *)v12.m128i_i32 <= 0.0) )
  {
    v19 = -2147024809;
    v35 = 1511;
    goto LABEL_30;
  }
  *(_QWORD *)&v46 = 0LL;
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
    v13 = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32((__m128i)v4);
  }
  else
  {
    *(float *)&v45 = *(float *)v5.m128i_i32 + 6291456.25;
    v13 = (int)((_DWORD)v45 << 10) >> 11;
  }
  DWORD2(v46) = v13;
  if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
    v14 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v45 = *(float *)v12.m128i_i32 + 6291456.25;
    v14 = (int)((_DWORD)v45 << 10) >> 11;
  }
  v15 = *(__int64 **)(v7 + 24);
  HIDWORD(v46) = v14;
  (*(void (__fastcall **)(__int64 *, _BYTE *))(v15[1] + 24))(v15 + 1, v50);
  v16 = *v15;
  v51 = 1;
  (*(void (__fastcall **)(__int64 *, char *))(v16 + 120))(v15, v48);
  v49 = v8;
  v45 = 0LL;
  v17 = CExternalLayer::CreateBitmap(v10 + 1544, &v46, v50, v48, a3, &v45);
  v18 = v45;
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x25u, 0LL);
  }
  else
  {
    v6 = (CExternalLayer *)operator new(0x78uLL);
    if ( v6 )
    {
      *(_QWORD *)v6 = &CExternalLayer::`vftable';
      *((_QWORD *)v6 + 1) = v18;
      if ( v18 )
        (*(void (__fastcall **)(CExternalLayer *))(*(_QWORD *)v18 + 8LL))(v18);
      v23 = v46;
      *((_DWORD *)v6 + 8) = 0;
      *((_QWORD *)v6 + 5) = 0LL;
      *((_OWORD *)v6 + 1) = v23;
      *(_QWORD *)((char *)v6 + 108) = 1065353216LL;
      *((_QWORD *)v6 + 6) = 1065353216LL;
      *((_QWORD *)v6 + 7) = 0LL;
      *((_DWORD *)v6 + 16) = 0;
      *(_QWORD *)((char *)v6 + 68) = 1065353216LL;
      *(_QWORD *)((char *)v6 + 76) = 0LL;
      *((_DWORD *)v6 + 21) = 0;
      *((_QWORD *)v6 + 11) = 1065353216LL;
      *((_QWORD *)v6 + 12) = 0LL;
      *((_DWORD *)v6 + 26) = 0;
      *((_BYTE *)v6 + 113) &= 0xE9u;
      *((_BYTE *)v6 + 113) |= 0x29u;
      *((_BYTE *)v6 + 112) = -86;
      *(_QWORD *)v6 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v19 = -2147024882;
      v6 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(CExternalLayer *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 >= 0 )
  {
    v46 = 6uLL;
    if ( *(_DWORD *)(v7 + 264) == *(_DWORD *)(v7 + 268) )
    {
      v43 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow(
              v7 + 256,
              v20,
              v21,
              v22,
              (const void **)(v7 + 256));
      v19 = v43;
      if ( v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v43);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xFE6u, 0LL);
        goto LABEL_45;
      }
    }
    v24 = *(_QWORD *)(v7 + 256);
    v25 = 2LL * *(unsigned int *)(v7 + 264);
    v45 = v6;
    *(_OWORD *)(v24 + 8 * v25) = v46;
    ++*(_DWORD *)(v7 + 264);
    v26 = *(_DWORD *)(v7 + 276);
    if ( v26 <= *(_DWORD *)(v7 + 264) )
      v26 = *(_DWORD *)(v7 + 264);
    *(_DWORD *)(v7 + 276) = v26;
    v27 = *(_DWORD *)(v7 + 376);
    v28 = v27 + 1;
    if ( v27 + 1 < v27 )
    {
      v19 = -2147024362;
      v30 = 183;
      v31 = -2147024362;
    }
    else
    {
      if ( v28 <= *(_DWORD *)(v7 + 372) )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 352) + 8LL * v27) = v6;
        *(_DWORD *)(v7 + 376) = v28;
LABEL_21:
        v29 = (*(__int64 (__fastcall **)(CExternalLayer *, __int64))(*(_QWORD *)v6 + 24LL))(v6, v7);
        v19 = v29;
        if ( v29 >= 0 )
        {
          ++dword_1803DE368;
          ++dword_1803DE418;
          goto LABEL_26;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0xFF0u, 0LL);
        --*(_DWORD *)(v7 + 376);
        v32 = v19;
LABEL_53:
        v44 = *(_DWORD *)(v7 + 264);
        if ( v44 )
        {
          *(_DWORD *)(v7 + 264) = v44 - 1;
          goto LABEL_45;
        }
        v19 = v32;
        if ( v32 < 0 )
        {
LABEL_45:
          v35 = 1515;
          goto LABEL_30;
        }
LABEL_26:
        v33 = *((_QWORD *)v6 + 1);
        if ( v33 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 8LL))(*((_QWORD *)v6 + 1));
        v34 = v33;
        goto LABEL_33;
      }
      v31 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 352, 8, 1, &v45);
      v19 = v31;
      if ( v31 >= 0 )
        goto LABEL_21;
      v30 = 194;
    }
    v32 = v19;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v30, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0xFEBu, 0LL);
    goto LABEL_53;
  }
  v35 = 1507;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v35, 0LL);
  v33 = 0LL;
  if ( v6 )
  {
    CExternalLayer::~CExternalLayer(v6);
    operator delete(v6, 0x78uLL);
  }
  v34 = 0LL;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
LABEL_33:
  v36 = v47;
  *((_DWORD *)a1 + 9) = v47;
  v37 = (v34 + 8) & -(__int64)(v33 != 0);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
  v38 = a1[6];
  v39 = 112 * v36;
  v40 = *(_QWORD *)(v39 + v38);
  *(_QWORD *)(v39 + v38) = 0LL;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = *(_QWORD *)(v39 + v38 + 8);
  *(_QWORD *)(v39 + v38 + 8) = v37;
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  *(_BYTE *)(v39 + v38 + 16) = 0;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return 0LL;
}
