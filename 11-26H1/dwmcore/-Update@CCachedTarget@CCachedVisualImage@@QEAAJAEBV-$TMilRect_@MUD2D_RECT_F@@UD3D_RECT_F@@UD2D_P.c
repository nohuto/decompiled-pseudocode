/*
 * XREFs of ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180057CB8 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18005C1C0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x1801A09DC (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@PEAVCMILMatrix@@@Z @ 0x1801A0A14 (-CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ @ 0x1801A0AF0 (-FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ.c)
 *     McTemplateU0ppffffddtt_EventWriteTransfer @ 0x1801BBAE0 (McTemplateU0ppffffddtt_EventWriteTransfer.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::Update(__m128i *this, const __m128i *a2, __int32 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  __m128i *v10; // r14
  __int64 *v11; // r15
  float v12; // xmm6_4
  __int64 *v13; // rdi
  DwmDbg::Backdrops *v14; // rcx
  float v15; // xmm8_4
  __int64 v16; // r8
  int v17; // ebx
  float v18; // xmm1_4
  float v19; // xmm0_4
  __int64 v20; // r8
  struct Windows::Foundation::Numerics::float4x4 *v21; // r8
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  int v28; // eax
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  bool v32; // al
  __int64 v33; // r14
  void (__fastcall *v34)(__int64, CDrawingContext **); // r12
  int v35; // eax
  double v36; // xmm0_8
  float v37; // xmm6_4
  int v38; // eax
  double v39; // xmm0_8
  CDrawingContext *v40; // rdi
  __int64 v41; // rcx
  struct CVisualTree *v42; // rax
  int v43; // eax
  bool v44; // zf
  CDrawingContext *v45; // rax
  CComposition *v46; // rcx
  __int64 v47; // rdi
  void **v48; // rsi
  const char *v49; // rdx
  void **v50; // rax
  const char *v52; // [rsp+68h] [rbp-A0h] BYREF
  CDrawingContext *v53[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  __int128 v55; // [rsp+98h] [rbp-70h]
  __int128 v56; // [rsp+A8h] [rbp-60h]
  int v57; // [rsp+B8h] [rbp-50h]
  __int128 v58; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-30h]
  __int128 v60; // [rsp+E8h] [rbp-20h]
  __int128 v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+108h] [rbp+0h]
  struct D2D_RECT_F v63; // [rsp+118h] [rbp+10h] BYREF
  __int64 v64; // [rsp+128h] [rbp+20h]
  struct D2D_RECT_F v65; // [rsp+130h] [rbp+28h] BYREF

  v5 = 0;
  v6 = this->m128i_i64[1];
  v53[0] = 0LL;
  v10 = this + 1;
  v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6);
  if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(this + 1, a2) )
  {
    *v10 = *a2;
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  if ( this[2].m128i_i32[0] != a3 )
  {
    this[2].m128i_i32[0] = a3;
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  v12 = *(float *)(a4 + 16);
  v13 = v11 + 2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      *(float *)((*(__int64 (__fastcall **)(__int64 *, struct D2D_RECT_F *))(v11[2] + 120))(
                                   v11 + 2,
                                   &v65)
                               + 16)
                    - v12) & _xmm) > 0.0000011920929 )
  {
    (*(void (__fastcall **)(__int64 *))(*v13 + 160))(v11 + 2);
    CCachedVisualImage::CCachedTarget::MarkDirty((CCachedVisualImage::CCachedTarget *)this);
  }
  if ( this[3].m128i_i8[8] )
  {
    (*(void (__fastcall **)(__int64 *, const char **))(*v11 + 88))(v11, &v52);
    v15 = 0.0;
    v16 = this->m128i_i64[0];
    *(_QWORD *)&v63.left = 0LL;
    v17 = *(_DWORD *)(v16 + 1604);
    v63.right = (float)(int)v52;
    v63.bottom = (float)SHIDWORD(v52);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v18 = *(float *)&this[1].m128i_i32[3] - *(float *)&this[1].m128i_i32[1];
      v19 = *(float *)&this[1].m128i_i32[2] - *(float *)v10->m128i_i32;
      McTemplateU0ppffffddtt_EventWriteTransfer(
        v17 == 3,
        v17 == 2,
        v16,
        *(_QWORD *)(v16 + 120),
        v10->m128i_i32[0],
        this[1].m128i_i32[1],
        SLOBYTE(v19),
        SLOBYTE(v18),
        (char)v52,
        SBYTE4(v52),
        v17 == 3,
        v17 == 2);
    }
    v20 = this[2].m128i_u32[0];
    v62 = 0;
    CCachedVisualImage::CalculateViewboxToViewportMapping(&v63, &this[1], v20, &v58);
    v22 = *(_QWORD *)(this->m128i_i64[0] + 144);
    if ( v22 )
    {
      v23 = *(_OWORD *)(v22 + 16);
      *(_OWORD *)&v53[1] = *(_OWORD *)v22;
      v24 = *(_OWORD *)(v22 + 32);
      v54 = v23;
      v25 = *(_OWORD *)(v22 + 48);
      v26 = *(_DWORD *)(v22 + 64);
      v55 = v24;
      v57 = v26;
      v56 = v25;
      CMILMatrix::Multiply((CMILMatrix *)&v53[1], (const struct CMILMatrix *)&v58);
      v27 = *(_OWORD *)&v53[1];
      v28 = v57;
      v29 = v54;
      v62 = v57;
      v30 = v55;
      v31 = v56;
      v58 = *(_OWORD *)&v53[1];
      v59 = v54;
      v60 = v55;
      v61 = v56;
    }
    else
    {
      v28 = v62;
      v31 = v61;
      v30 = v60;
      v29 = v59;
      v27 = v58;
    }
    *(_OWORD *)&v53[1] = v27;
    v54 = v29;
    v55 = v30;
    v56 = v31;
    v57 = v28;
    v32 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v53[1], (__m128 *)&v53[1], v21);
    LOWORD(v57) = v57 & 0xC003;
    if ( v32 )
    {
      v65 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v53[1], &v63, &v65.left);
      (*(void (__fastcall **)(__int64 *, _QWORD))(*v13 + 152))(v11 + 2, *(unsigned int *)(a4 + 8));
      v33 = this->m128i_i64[0];
      v34 = *(void (__fastcall **)(__int64, CDrawingContext **))(*(_QWORD *)this->m128i_i64[0] + 232LL);
      if ( v53[0] )
        (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v53[0] + 16LL))(v53[0]);
      v34(v33, v53);
      v35 = CDrawingContext::BeginFrame(
              (__int64)v53[0],
              v11 + 2,
              (__int64)&v58,
              &xmmword_180362B60,
              6 - (unsigned int)(v17 != 3),
              0LL);
      v5 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x3BCu, 0LL);
      }
      else
      {
        CD2DContext::FlushCurrentTargetOnPopForDImage((CD2DContext *)(*((_QWORD *)v53[0] + 4) + 16LL));
        ++dword_1803DE368;
        ++dword_1803DE42C;
        if ( *(float *)&v58 < 0.5 || *((float *)&v59 + 1) < 0.5 )
        {
          *(_QWORD *)&v36 = LODWORD(v65.right);
          *(float *)&v36 = (float)(v65.right - v65.left) * 0.5;
          v37 = (float)(int)v52;
          v38 = PixelAlign(v36, 1, *(double *)&v30);
          *(_QWORD *)&v39 = LODWORD(v65.bottom);
          *(float *)&v39 = (float)(v65.bottom - v65.top) * 0.5;
          v15 = fmaxf((float)v38 / v37, (float)(int)PixelAlign(v39, 1, *(double *)&v30) / v37);
        }
        v40 = v53[0];
        (*(void (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)this->m128i_i64[0] + 224LL))(
          this->m128i_i64[0],
          &v65);
        v41 = this->m128i_i64[0];
        v64 = 0LL;
        v63 = v65;
        v42 = (struct CVisualTree *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 208LL))(v41);
        v43 = CDrawingContext::DrawVisualTree(v40, v42, 2, SLODWORD(v15), 0LL);
        v5 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x404u, 0LL);
        }
        else
        {
          v44 = !g_LockAndReadCVI;
          v45 = v53[0];
          this[3].m128i_i8[9] = *((_BYTE *)v53[0] + 7982);
          if ( !v44 )
            (*(void (__fastcall **)(__int64 *, unsigned __int64))(*v11 + 112))(
              v11,
              ((unsigned __int64)v45 + 16) & -(__int64)(v45 != 0LL));
          v46 = g_pComposition;
          this[3].m128i_i8[8] = 0;
          this[2].m128i_i64[1] = CComposition::GetFrameTargetTime(v46);
          this[3].m128i_i64[0] = (__int64)GetCurrentFrameId();
        }
        CDrawingContext::EndFrame(v53[0]);
      }
    }
    else
    {
      v5 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304441, 0x3A8u, 0LL);
    }
  }
  if ( DwmDbg::Backdrops::IsEtwEnabled(v14) )
  {
    v47 = this->m128i_i64[0];
    if ( *(_DWORD *)(this->m128i_i64[0] + 1604) == 3 && v5 < 0 )
    {
      v48 = (void **)DwmDbg::DbgString::DbgString((char **)&v63, word_1802F327A);
      if ( v5 == -2147467263 )
      {
        v49 = "E_NOTIMPL";
      }
      else if ( v5 == -2147467262 )
      {
        v49 = "E_NOINTERFACE";
      }
      else if ( v5 == -2147467260 )
      {
        v49 = "E_ABORT";
      }
      else if ( v5 == -2147467259 )
      {
        v49 = "E_FAIL";
      }
      else if ( v5 == -2147418113 )
      {
        v49 = "E_UNEXPECTED";
      }
      else if ( v5 == -2147221184 )
      {
        v49 = "E_DRAW";
      }
      else
      {
        if ( v5 != -2147024882 )
        {
          if ( v5 == -2147024809 )
            DwmDbg::DbgString::DbgString((char **)&v52, "E_INVALIDARG");
          else
            DwmDbg::DbgString::DbgString((char **)&v52, "0x%x", v5);
          goto LABEL_49;
        }
        v49 = "E_OUTOFMEMORY";
      }
      DwmDbg::DbgString::DbgString((char **)&v52, v49);
LABEL_49:
      v50 = (void **)DwmDbg::DbgString::DbgString((char **)&v65, "BVI-FailedRenderWalk-%s", v52);
      CBackdropVisualImage::LogEtwEvent(v47, v50, v48);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v52);
    }
  }
  if ( v53[0] )
    (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v53[0] + 16LL))(v53[0]);
  return (unsigned int)v5;
}
