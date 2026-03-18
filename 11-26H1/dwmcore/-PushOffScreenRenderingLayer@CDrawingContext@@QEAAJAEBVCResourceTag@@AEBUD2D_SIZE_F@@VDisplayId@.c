/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC
 * Callers:
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  __m128 v6; // xmm2
  __m128i v7; // xmm0
  _QWORD *v11; // rsi
  __m128i v12; // xmm3
  int v13; // ecx
  int v14; // ecx
  __int64 *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rbx
  int v19; // edi
  HANDLE ProcessHeap; // rax
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // r12d
  int v30; // ebx
  __int64 v31; // rcx
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36[2]; // [rsp+20h] [rbp-60h]
  _QWORD *v37; // [rsp+30h] [rbp-50h] BYREF
  __int128 v38; // [rsp+38h] [rbp-48h] BYREF
  char v39[8]; // [rsp+48h] [rbp-38h] BYREF
  int v40; // [rsp+50h] [rbp-30h]
  _BYTE v41[4]; // [rsp+60h] [rbp-20h] BYREF
  int v42; // [rsp+64h] [rbp-1Ch]
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v7 = (__m128i)*a3;
  v11 = 0LL;
  if ( *(float *)v7.m128i_i32 <= 0.0 || (v12 = (__m128i)a3[1], *(float *)v12.m128i_i32 <= 0.0) )
  {
    v19 = -2147024809;
    v33 = 1511;
    goto LABEL_30;
  }
  *(_QWORD *)&v38 = 0LL;
  if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
    v6 = _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5));
    v13 = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
  }
  else
  {
    *(float *)&v37 = *(float *)v7.m128i_i32 + 6291456.25;
    v13 = (int)((_DWORD)v37 << 10) >> 11;
  }
  DWORD2(v38) = v13;
  if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
    v14 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v37 = *(float *)v12.m128i_i32 + 6291456.25;
    v14 = (int)((_DWORD)v37 << 10) >> 11;
  }
  v15 = *(__int64 **)(a1 + 24);
  HIDWORD(v38) = v14;
  (*(void (__fastcall **)(__int64 *, _BYTE *))(v15[1] + 24))(v15 + 1, v41);
  v16 = *v15;
  v42 = 1;
  (*(void (__fastcall **)(__int64 *, char *))(v16 + 120))(v15, v39);
  v40 = a4;
  v37 = 0LL;
  v17 = CExternalLayer::CreateBitmap(a2, &v38, v41, v39, a5, &v37);
  v18 = v37;
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x25u, 0LL);
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 0, 0x78uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *v11 = &CExternalLayer::`vftable';
    v11[1] = v18;
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
    v21 = v38;
    *((_DWORD *)v11 + 8) = 0;
    v11[5] = 0LL;
    *((_OWORD *)v11 + 1) = v21;
    *(_QWORD *)((char *)v11 + 108) = 1065353216LL;
    v11[6] = 1065353216LL;
    v11[7] = 0LL;
    *((_DWORD *)v11 + 16) = 0;
    *(_QWORD *)((char *)v11 + 68) = 1065353216LL;
    *(_QWORD *)((char *)v11 + 76) = 0LL;
    *((_DWORD *)v11 + 21) = 0;
    v11[11] = 1065353216LL;
    v11[12] = 0LL;
    *((_DWORD *)v11 + 26) = 0;
    *((_BYTE *)v11 + 113) &= 0xE9u;
    *((_BYTE *)v11 + 113) |= 0x29u;
    *((_BYTE *)v11 + 112) = -86;
    *v11 = &COffScreenRenderingLayer::`vftable';
  }
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  if ( v19 < 0 )
  {
    v33 = 1507;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v33, 0LL);
    if ( v11 )
    {
      CExternalLayer::~CExternalLayer((CExternalLayer *)v11);
      operator delete(v11, 0x78uLL);
    }
    return (unsigned int)v19;
  }
  v38 = 6uLL;
  if ( *(_DWORD *)(a1 + 264) == *(_DWORD *)(a1 + 268) )
  {
    *(_QWORD *)v36 = a1 + 256;
    v34 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow(a1 + 256);
    v19 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v34,
        v36[0]);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xFE6u, 0LL);
      goto LABEL_35;
    }
  }
  v22 = *(_QWORD *)(a1 + 256);
  v23 = 2LL * *(unsigned int *)(a1 + 264);
  v37 = v11;
  *(_OWORD *)(v22 + 8 * v23) = v38;
  ++*(_DWORD *)(a1 + 264);
  v24 = *(_DWORD *)(a1 + 276);
  if ( v24 <= *(_DWORD *)(a1 + 264) )
    v24 = *(_DWORD *)(a1 + 264);
  *(_DWORD *)(a1 + 276) = v24;
  v25 = *(_DWORD *)(a1 + 376);
  v26 = v25 + 1;
  if ( v25 + 1 < v25 )
  {
    v19 = -2147024362;
    v28 = 183;
    v29 = -2147024362;
    goto LABEL_24;
  }
  if ( v26 > *(_DWORD *)(a1 + 372) )
  {
    v29 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 352, 8LL, 1LL, &v37, *(_QWORD *)v36);
    v19 = v29;
    if ( v29 >= 0 )
      goto LABEL_21;
    v28 = 194;
LABEL_24:
    v30 = v19;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v28, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xFEBu, 0LL);
    goto LABEL_43;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 352) + 8LL * v25) = v11;
  *(_DWORD *)(a1 + 376) = v26;
LABEL_21:
  v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 24LL))(v11, a1);
  v19 = v27;
  if ( v27 >= 0 )
  {
    ++dword_1803DE368;
    ++dword_1803DE418;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xFF0u, 0LL);
  --*(_DWORD *)(a1 + 376);
  v30 = v19;
LABEL_43:
  v35 = *(_DWORD *)(a1 + 264);
  if ( v35 )
  {
    *(_DWORD *)(a1 + 264) = v35 - 1;
    goto LABEL_35;
  }
  v19 = v30;
  if ( v30 < 0 )
  {
LABEL_35:
    v33 = 1515;
    goto LABEL_30;
  }
LABEL_26:
  v31 = v11[1];
  *a6 = v31;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  return (unsigned int)v19;
}
