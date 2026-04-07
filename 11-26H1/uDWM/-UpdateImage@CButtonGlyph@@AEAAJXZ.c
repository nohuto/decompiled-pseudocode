/*
 * XREFs of ?UpdateImage@CButtonGlyph@@AEAAJXZ @ 0x180009120
 * Callers:
 *     ?ValidateVisual@CButtonGlyph@@UEAAJXZ @ 0x18000A0F0 (-ValidateVisual@CButtonGlyph@@UEAAJXZ.c)
 * Callees:
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ?UpdateAlignment@CButtonGlyph@@AEAAJXZ @ 0x18000A374 (-UpdateAlignment@CButtonGlyph@@AEAAJXZ.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CButtonGlyph::UpdateImage(CBitmapSource **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int CompSurface; // eax
  struct Windows::UI::Composition::ICompositionSurface *v10; // rbx
  int v11; // eax
  int v12; // esi
  __int64 v14; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+48h] [rbp+28h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v18; // [rsp+50h] [rbp+30h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v2 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>(this, &v17);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v2,
      savedregs);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v3;
  }
  if ( v17 )
    goto LABEL_8;
  v4 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v5 = *v4;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 184))(v4, &v17);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v6,
      savedregs);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v3;
  }
  v7 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(this, v17);
  v3 = v7;
  if ( v7 < 0 )
  {
    v14 = 532LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v7,
      savedregs);
LABEL_34:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v17);
    return v3;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 88LL))(v17, 0LL);
  v3 = v7;
  if ( v7 < 0 )
  {
    v14 = 535LL;
    goto LABEL_32;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
  v3 = v7;
  if ( v7 < 0 )
  {
    v14 = 536LL;
    goto LABEL_32;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 120LL))(v17);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v8,
      savedregs);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v3;
  }
LABEL_8:
  v18 = 0LL;
  CompSurface = CBitmapSource::GetCompSurface(this[29], &v18);
  v3 = CompSurface;
  if ( CompSurface < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)CompSurface,
      savedregs);
    if ( v18 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v3;
  }
  v10 = v18;
  v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v17 + 104LL))(
          v17,
          v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v11,
      savedregs);
    v3 = v12;
    goto LABEL_34;
  }
  CButtonGlyph::UpdateAlignment((CButtonGlyph *)this);
  if ( v10 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
