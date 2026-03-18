/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180127CB4 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  int v2; // edi
  __int64 v3; // r14
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  _QWORD *v6; // rcx
  CExcludeVisualReference *v7; // rbx
  CExcludeVisualReference **v8; // rdi
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  bool v10; // al
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  CDrawingContext *v14; // rbx
  int v15; // eax
  struct CVisualTree *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  CComposition *v19; // rcx
  unsigned int v21; // eax
  __int64 v22; // rax
  struct CDrawingContext *v23; // [rsp+48h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v25; // [rsp+68h] [rbp-A0h]
  __m128i v26; // [rsp+78h] [rbp-90h]
  __m128i v27; // [rsp+88h] [rbp-80h]
  int v28; // [rsp+98h] [rbp-70h]
  __m128 v29[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  __m128i v31; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+108h] [rbp+0h]
  __m128i v33; // [rsp+110h] [rbp+8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v2 = 0;
  v26 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = 0LL;
  v25 = _mm_load_si128((const __m128i *)&_xmm);
  v28 = 170;
  v33 = 0LL;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 371));
  v27 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 372));
  v6 = (_QWORD *)*((_QWORD *)this + 6);
  BYTE1(v28) = 41;
  v31.m128i_i64[0] = 0LL;
  v31.m128i_i32[2] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v31.m128i_i32[3] = _mm_cvtepi32_ps(v5).m128_u32[0];
  if ( !v6[9] )
    return (unsigned int)v2;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v6 + 192LL))(v6) )
    v3 = *((_QWORD *)this + 6);
  v7 = (CExcludeVisualReference *)*((_QWORD *)g_pComposition + 767);
  v8 = (CExcludeVisualReference **)((char *)g_pComposition + 6128);
  while ( v7 != *v8 )
  {
    v7 = (CExcludeVisualReference *)((char *)v7 - 32);
    if ( (int)CExcludeVisualReference::Hide(v7) < 0 )
      std::vector<CComposition::CursorVisualData>::erase(v8, &v23, v7);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 368) - 1.0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)&si128, *((float *)this + 368), *((float *)this + 368), 1.0);
  CMILMatrix::Translate(
    (CMILMatrix *)&si128,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 369)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 370)) ^ _xmm));
  v23 = 0LL;
  CDrawingContext::Create(&v23);
  *((_BYTE *)g_pComposition + 6458) = 1;
  v29[0] = (__m128)si128;
  v29[1] = (__m128)v25;
  v29[2] = (__m128)v26;
  v29[3] = (__m128)v27;
  v30 = v28;
  v10 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v29, v29, v9);
  LOWORD(v30) = v30 & 0xC003;
  if ( v10 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v29, (const struct D2D_RECT_F *)&v31, (float *)v33.m128i_i32);
    v11 = (__int64 *)*((_QWORD *)this + 6);
    v12 = *v11;
    v31.m128i_i64[1] = (__int64)&v33;
    v31.m128i_i64[0] = 1LL;
    (*(__int64 (__fastcall **)(__int64 *, __m128i *, char *))(v12 + 208))(v11, &v31, (char *)this + 72);
  }
  else
  {
    v33 = _mm_load_si128((const __m128i *)&_xmm);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
  v14 = v23;
  v15 = CDrawingContext::BeginFrame(
          (__int64)v23,
          (__int64 *)((v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)),
          (__int64)&si128,
          &xmmword_1802F55C8,
          4u,
          0LL);
  v2 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x19Fu, 0LL);
  }
  else
  {
    ++dword_1803DE368;
    v16 = (struct CVisualTree *)*((_QWORD *)this + 6);
    v31 = v33;
    v32 = 0LL;
    v2 = CDrawingContext::DrawVisualTree(v14, v16, 2, 0, 0LL);
    if ( v2 < 0 )
    {
      v21 = 424;
    }
    else
    {
      if ( !v3 || (v17 = *(_QWORD *)(v3 + 4048)) == 0 || (v2 = CComposeTop::FullRender(v17, v14, &si128, &v33), v2 >= 0) )
      {
        v18 = CDrawingContext::EndFrame(v14);
        v2 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x1BBu, 0LL);
        }
        else if ( g_LockAndReadOffscreenTarget )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 112LL))(
            v22,
            ((unsigned __int64)v14 + 16) & -(__int64)(v14 != 0LL));
        }
        goto LABEL_17;
      }
      v21 = 438;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, v21, 0LL);
    CDrawingContext::EndFrame(v14);
  }
LABEL_17:
  v19 = g_pComposition;
  *((_BYTE *)g_pComposition + 6458) = 0;
  CComposition::RestoreCursors(v19);
  if ( v14 )
    (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v2;
}
