/*
 * XREFs of ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000A180 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ??$GetInnerBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009898 (--$GetInnerBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEA.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x180009B74 (--$UpdateInnerBrush@PEAUICompositionSurfaceBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJ.c)
 *     ?GetInsets@NineGridLayout@@QEBAXPEAM000@Z @ 0x18000A044 (-GetInsets@NineGridLayout@@QEBAXPEAM000@Z.c)
 *     ?UpdateRectangle@CImage@@AEAAXXZ @ 0x18000A098 (-UpdateRectangle@CImage@@AEAAXXZ.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z @ 0x180082BF4 (--$SetBrush@$$T@CSpriteVisual@@QEAAJ$$T@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     ?Make@NineGridLayout@@SA?AU1@PEAVCBitmapSource@@@Z @ 0x18008CEF4 (-Make@NineGridLayout@@SA-AU1@PEAVCBitmapSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImage::UpdateBitmap(CBitmapSource **this)
{
  _OWORD *v2; // rax
  __int32 v3; // xmm2_4
  float v4; // xmm6_4
  bool v5; // si
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int updated; // eax
  struct Windows::UI::Composition::ICompositionSurface *v13; // rbx
  int v14; // eax
  int v15; // esi
  __int64 v17; // rdx
  int v18; // eax
  int v19; // [rsp+28h] [rbp-39h]
  int v20; // [rsp+28h] [rbp-39h]
  __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  float v25; // [rsp+C8h] [rbp+67h] BYREF
  float v26; // [rsp+D0h] [rbp+6Fh] BYREF
  float v27; // [rsp+D8h] [rbp+77h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v28; // [rsp+E0h] [rbp+7Fh] BYREF

  if ( this[29] )
  {
    v27 = 0.0;
    v26 = 0.0;
    v25 = 0.0;
    LODWORD(v28) = 0;
    v2 = (_OWORD *)NineGridLayout::Make(v23);
    v22[0] = *v2;
    v22[1] = v2[1];
    NineGridLayout::GetInsets((NineGridLayout *)v22, &v27, &v26, &v25, (float *)&v28);
    COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v4 = *(float *)&v28;
    v5 = COERCE_FLOAT(LODWORD(v27) & v3) >= 0.0000011920929
      || COERCE_FLOAT(LODWORD(v26) & v3) >= 0.0000011920929
      || COERCE_FLOAT(LODWORD(v25) & v3) >= 0.0000011920929
      || COERCE_FLOAT((unsigned int)v28 & v3) >= 0.0000011920929;
    v21 = 0LL;
    v28 = 0LL;
    if ( v5 )
    {
      v21 = 0LL;
      v6 = CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionSurfaceBrush>(this, &v21);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
          (const char *)(unsigned int)v6,
          v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        return v7;
      }
    }
    else
    {
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset(&v21);
      CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>((__int64)this, &v21);
    }
    v8 = v21;
    if ( !v21 )
    {
      v9 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
      v10 = *v9;
      v21 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 184))(v9, &v21);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
          (const char *)(unsigned int)v11,
          v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        return v7;
      }
      updated = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 88LL))(v21, 1LL);
      v7 = updated;
      if ( updated < 0 )
      {
        v17 = 109LL;
        goto LABEL_38;
      }
      v8 = v21;
    }
    if ( v5 )
    {
      updated = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionSurfaceBrush *>((CNineGridVisual *)this);
      v7 = updated;
      if ( updated < 0 )
      {
        v17 = 114LL;
        goto LABEL_38;
      }
      updated = CNineGridVisual::UpdateInsets((CNineGridVisual *)this, v27, v26, v25, v4);
      v7 = updated;
      if ( updated < 0 )
      {
        v17 = 115LL;
        goto LABEL_38;
      }
    }
    else
    {
      updated = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(this, v8);
      v7 = updated;
      if ( updated < 0 )
      {
        v17 = 119LL;
        goto LABEL_38;
      }
    }
    v28 = 0LL;
    updated = CBitmapSource::GetCompSurface(this[29], &v28);
    v7 = updated;
    if ( updated >= 0 )
    {
      v13 = v28;
      v14 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v21 + 104LL))(
              v21,
              v28);
      v15 = v14;
      if ( v14 >= 0 )
      {
        CImage::UpdateRectangle((CImage *)this);
        if ( v13 )
          (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
        (const char *)(unsigned int)v14,
        v20);
      v7 = v15;
      goto LABEL_41;
    }
    v17 = 122LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
      (const char *)(unsigned int)updated,
      v20);
LABEL_41:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
    return v7;
  }
  v18 = CSpriteVisual::SetBrush<std::nullptr_t>();
  v7 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v18,
    v19);
  return v7;
}
