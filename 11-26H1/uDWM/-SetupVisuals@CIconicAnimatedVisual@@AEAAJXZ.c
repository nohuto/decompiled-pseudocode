/*
 * XREFs of ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B7998 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CIconicAnimatedVisual::SetupVisuals(CIconicAnimatedVisual *this)
{
  const struct tagRECT *v2; // rsi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, CRectangleVisual **); // r14
  CRectangleVisual *v5; // rcx
  unsigned int v6; // eax
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const struct tagRECT *v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  CRectangleVisual *v13; // rbx
  int v14; // eax
  int v15; // esi
  struct _D3DCOLORVALUE v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CRectangleVisual *v19; // [rsp+60h] [rbp+20h] BYREF

  v2 = (const struct tagRECT *)((char *)this + 264);
  if ( IsRectEmpty((const RECT *)((char *)this + 264)) )
  {
    v10 = (const struct tagRECT *)((char *)this + 248);
    goto LABEL_15;
  }
  v19 = 0LL;
  *(struct _D3DCOLORVALUE *)&v17.r = 0LL;
  CImmersiveState::GetPillarBoxColor(&v17);
  v3 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, CRectangleVisual **))(*(_QWORD *)v3 + 64LL);
  v5 = v19;
  v19 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(CRectangleVisual *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = WUColorFromD2DColor(&v17.r);
  updated = v4(v3, v6, &v19);
  v8 = updated;
  if ( updated >= 0 )
  {
    updated = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(this, (__int64)v19);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 143LL;
      goto LABEL_12;
    }
    v10 = (const struct tagRECT *)((char *)this + 248);
    updated = CNineGridVisual::UpdateInsets(
                this,
                (float)(*((_DWORD *)this + 62) - v2->left),
                0.0,
                (float)(*((_DWORD *)this + 68) - *((_DWORD *)this + 64)),
                0);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 147LL;
      goto LABEL_12;
    }
    updated = CNineGridVisual::UpdateIsCenterHollow(this, 1);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 148LL;
      goto LABEL_12;
    }
    CRectangleVisual::SetRect(this, v2);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v19);
LABEL_15:
    v19 = 0LL;
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v19);
    v11 = CSolidRectangleVisual::Create(&v19);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = CSurfaceBrush::ApplyViewportTransformForView((CIconicAnimatedVisual *)((char *)this + 232), v10);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v13 = v19;
        v14 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
                (__int64)v19,
                *((_QWORD *)this + 29));
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9C,
            (int)"clientcore\\windows\\dwm\\udwm\\iconicanimatedvisual.cpp",
            (const char *)(unsigned int)v14);
          v8 = v15;
          goto LABEL_25;
        }
        CRectangleVisual::SetRect(v13, v10);
        v11 = CContainerVisual::AddChild(this, v13);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v8 = 0;
          goto LABEL_25;
        }
        v12 = 159LL;
      }
      else
      {
        v12 = 155LL;
      }
    }
    else
    {
      v12 = 154LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\iconicanimatedvisual.cpp",
      (const char *)(unsigned int)v11);
LABEL_25:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    return v8;
  }
  v9 = 141LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\iconicanimatedvisual.cpp",
    (const char *)(unsigned int)updated);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v19);
  return v8;
}
