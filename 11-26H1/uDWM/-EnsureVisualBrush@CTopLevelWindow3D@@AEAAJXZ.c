/*
 * XREFs of ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18006E3C4 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??0CVisualBrush@@QEAA@AEBV0@@Z @ 0x180083D50 (--0CVisualBrush@@QEAA@AEBV0@@Z.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x180088F30 (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0 (--4CVisualBrush@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::EnsureVisualBrush(CVisualProxy **this)
{
  char *v2; // r14
  CSecondaryWindowRepresentation **v3; // rsi
  bool ShouldFreezeAnimationCVI; // bl
  __int64 v5; // r8
  __int64 v6; // rax
  LONG v7; // eax
  LONG v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (char *)(this + 43);
  CVisualBrush::CVisualBrush((CVisualBrush *)&v13, (const struct CVisualBrush *)(this + 43));
  if ( v13 )
  {
    v3 = this + 30;
  }
  else
  {
    ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)this);
    v3 = this + 30;
    LOBYTE(v5) = ShouldFreezeAnimationCVI;
    v6 = CSecondaryWindowRepresentation::CreateVisualBrushForAnimation(this[30], &v15, v5);
    CVisualBrush::operator=(&v13, v6);
    CVisualBrush::~CVisualBrush((CVisualBrush *)&v15);
    if ( ShouldFreezeAnimationCVI )
      CVisualBrush::operator=(v2, &v13);
  }
  CSecondaryWindowRepresentation::GetRelativeWindowRect(*v3, &v15);
  *(_QWORD *)&v16.left = 0LL;
  v7 = 0;
  if ( v15.right - v15.left >= 0 )
    v7 = v15.right - v15.left;
  v16.right = v7;
  v8 = 0;
  if ( v15.bottom - v15.top >= 0 )
    v8 = v15.bottom - v15.top;
  v16.bottom = v8;
  CRectangleVisual::SetRect(this[32], &v16);
  v9 = CSurfaceBrush::ApplyViewportTransformForView((CSurfaceBrush *)&v13, &v16);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this[32], v13);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this[29] + 55) + 185LL) & 0x10) != 0 )
        CVisualProxy::SetVisualProtectContent(this[2], 1);
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x397,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v11,
        v13);
    }
    CVisualBrush::~CVisualBrush((CVisualBrush *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x396,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v9,
      v13);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(v14);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v13);
  }
  return v10;
}
