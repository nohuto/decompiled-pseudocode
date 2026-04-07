/*
 * XREFs of ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84
 * Callers:
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800C8B90 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800C8C00 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     _o_asinf_0 @ 0x18008EE94 (_o_asinf_0.c)
 *     _o_sqrtf_0 @ 0x18008EF00 (_o_sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTetherVisual::UpdateVisual(CTetherVisual *this)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm10_4
  float v6; // xmm9_4
  __int64 v7; // rax
  float v8; // xmm0_4
  __m128 v9; // xmm8
  __m128 v10; // xmm0
  __m128 v11; // xmm13
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, GUID *, __int64); // r9
  __int64 v14; // r10
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  CBitmapSource *v18; // rbx
  int CompSurface; // eax
  __int64 v20; // rdx
  __int128 v21; // [rsp+28h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 v23; // [rsp+D8h] [rbp+67h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v24; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+E8h] [rbp+77h] BYREF

  if ( *((_QWORD *)this + 35) )
  {
    v21 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    CRectangleVisual::SetRect((__int64)this, &v21);
    return 0LL;
  }
  v3 = (float)*((int *)this + 62);
  v4 = (float)*((int *)this + 63);
  v5 = (float)*((int *)this + 64);
  v6 = (float)*((int *)this + 65);
  v7 = *((_QWORD *)this + 34);
  if ( v7 )
  {
    v8 = *(double *)(v7 + 48);
    v3 = (float)((float)(v3 - v5) * v8) + v5;
    v4 = (float)((float)(v4 - v6) * v8) + v6;
  }
  v9 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 65));
  v9.m128_f32[0] = v6 - v4;
  v10 = v9;
  v10.m128_f32[0] = o_sqrtf_0((float)(v9.m128_f32[0] * v9.m128_f32[0]) + (float)((float)(v5 - v3) * (float)(v5 - v3)));
  v11 = v10;
  v11.m128_f32[0] = v10.m128_f32[0] * 0.5;
  *(float *)&v21 = (float)((float)(v3 * 0.5) + (float)(v5 * 0.5)) - 6.0;
  *((float *)&v21 + 1) = (float)((float)(v4 * 0.5) + (float)(v6 * 0.5)) - (float)(v10.m128_f32[0] * 0.5);
  *((float *)&v21 + 2) = *(float *)&v21 + 12.0;
  *((float *)&v21 + 3) = *((float *)&v21 + 1) + v10.m128_f32[0];
  CRectangleVisual::SetRect((__int64)this, &v21);
  if ( COERCE_FLOAT(v10.m128_i32[0] & _xmm) >= 0.0000011920929 )
    o_asinf_0(v9.m128_f32[0] / v10.m128_f32[0]);
  v25 = 0LL;
  v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v25);
  v15 = v13(v14, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, v12);
  v16 = v15;
  if ( v15 >= 0 )
  {
    *(_QWORD *)&v21 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_6_0), v11).m128_u64[0];
    DWORD2(v21) = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 104LL))(v25, &v21);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 174LL;
      goto LABEL_11;
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 224LL))(v25);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 175LL;
      goto LABEL_11;
    }
    if ( !*((_BYTE *)this + 297) )
    {
      v24 = 0LL;
      v23 = 0LL;
      v18 = (CBitmapSource *)*((_QWORD *)this + 33);
      wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v24);
      CompSurface = CBitmapSource::GetCompSurface(v18, &v24);
      v16 = CompSurface;
      if ( CompSurface < 0 )
      {
        v20 = 184LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
          (const char *)(unsigned int)CompSurface);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v23);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v24);
        goto LABEL_24;
      }
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v23);
      CompSurface = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>((__int64)this, &v23);
      v16 = CompSurface;
      if ( CompSurface < 0 )
      {
        v20 = 185LL;
        goto LABEL_17;
      }
      CompSurface = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v23 + 104LL))(
                      v23,
                      v24);
      v16 = CompSurface;
      if ( CompSurface < 0 )
      {
        v20 = 186LL;
        goto LABEL_17;
      }
      *((_BYTE *)this + 297) = 1;
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v23);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v24);
    }
    v16 = 0;
    goto LABEL_24;
  }
  v17 = 173LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"clientcore\\windows\\dwm\\udwm\\tethervisual.cpp",
    (const char *)(unsigned int)v15);
LABEL_24:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v25);
  return v16;
}
