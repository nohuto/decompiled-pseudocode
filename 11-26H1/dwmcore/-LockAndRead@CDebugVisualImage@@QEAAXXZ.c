/*
 * XREFs of ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x18026302C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18002C32C (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180128D84 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18015DC60 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180262340 (-GetRenderTargetBitmap@CCachedVisualImage@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x18028D60C (-Print@DwmDbg@@YAXQEBDZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDebugVisualImage::LockAndRead(CDebugVisualImage *this)
{
  __m128 v2; // xmm2
  bool IsInfinite; // al
  signed int width; // edx
  float v5; // xmm0_4
  CDisplayManager *height; // rcx
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // xmm1_8
  __int64 v17; // rbx
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+28h] [rbp-19h] BYREF
  char *v20; // [rsp+40h] [rbp-1h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v22[24]; // [rsp+50h] [rbp+Fh] BYREF

  v2 = (__m128)_mm_loadu_si128((const __m128i *)CVisual::GetBounds(*((_QWORD *)this + 15), *((_QWORD *)this + 20)));
  *(__m128 *)v19 = v2;
  IsInfinite = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite((float *)v19);
  width = CDebugVisualImage::s_renderTargetSize.width;
  v5 = 0.0;
  height = (CDisplayManager *)CDebugVisualImage::s_renderTargetSize.height;
  if ( IsInfinite )
  {
    *(_QWORD *)v19 = 0LL;
    v7 = (float)(int)CDebugVisualImage::s_renderTargetSize.height;
    v8 = (float)(int)CDebugVisualImage::s_renderTargetSize.width;
    v9 = 0.0;
    *(float *)&v19[12] = (float)(int)CDebugVisualImage::s_renderTargetSize.height;
    *(float *)&v19[8] = (float)(int)CDebugVisualImage::s_renderTargetSize.width;
    v2 = *(__m128 *)v19;
  }
  else
  {
    LODWORD(v7) = _mm_shuffle_ps(v2, v2, 255).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
    v5 = v2.m128_f32[0];
    LODWORD(v9) = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  }
  v10 = v8 - v5;
  *((__m128 *)this + 6) = v2;
  v11 = FLOAT_1_0;
  v12 = (float)width;
  if ( v10 > (float)width || (float)(v7 - v9) > (float)(int)height )
  {
    v13 = (float)(v7 - v9) / (float)(int)height;
    if ( (float)(v10 / v12) <= v13 )
      v11 = 1.0 / v13;
    else
      v11 = 1.0 / (float)(v10 / v12);
  }
  *((float *)this + 28) = v10 * v11;
  *((float *)this + 29) = (float)(v7 - v9) * v11;
  CDisplayManager::GetPrimaryAdapterLuid(height, v19);
  *(_DWORD *)&v19[8] = -1;
  *(_WORD *)&v19[21] = 0;
  v19[23] = 0;
  *(_QWORD *)&v19[12] = 0LL;
  v19[20] = 0;
  v14 = **((_QWORD **)g_pComposition + 77);
  if ( v14 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v14 + 8) + 24LL))(v14 + 8, v22);
    v16 = *(_QWORD *)(v15 + 16);
    *(_OWORD *)v19 = *(_OWORD *)v15;
    *(_QWORD *)&v19[16] = v16;
  }
  v21 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
  if ( (int)CCachedVisualImage::GetRenderTargetBitmap(this, (const struct RenderTargetInfo *)v19, &v21) < 0 )
  {
    DwmDbg::DbgString::DbgString(&v20, "0x%p", *((const void **)this + 15));
    DwmDbg::Print((DwmDbg *)"Unable to render DebugCVI with root visual %s!\n", v20);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v20);
  }
  else
  {
    v17 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v19, (const struct D2D_RECT_F *)this + 6);
    DwmDbg::DbgString::DbgString(&v20, "0x%p", *((const void **)this + 15));
    DwmDbg::Print((DwmDbg *)"Successfully rendered DebugCVI with root visual %s and bounds [%s]!\n", v20, v17);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v20);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)v19);
    v18 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v21 + 144LL))(v21);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 112LL))(v18, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
}
