/*
 * XREFs of ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0
 * Callers:
 *     ?SetBorderRects@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@0@Z @ 0x180081C7C (-SetBorderRects@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@0@Z.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800B8CAC (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ?UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z @ 0x180009A58 (-UpdateInsets@CNineGridVisual@@QEAAJMMMM@Z.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18000B308 (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800581F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8 (--$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLegacyNonClientBackground::EnsureBorderSprite(CNineGridVisual **this)
{
  float *v2; // r15
  const struct tagRECT *v3; // r14
  int IsCenterHollow; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CNineGridVisual *v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // r12
  __int64 v10; // rcx
  CBaseObject *v11; // rcx
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-10h]
  int v19; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  struct CNineGridVisual *v22; // [rsp+68h] [rbp+38h] BYREF

  v2 = (float *)(this + 28);
  if ( *((float *)this + 59) == 0.0
    || (v3 = (const struct tagRECT *)(this + 32),
        TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty((_DWORD *)this + 64)) )
  {
    CLegacyNonClientBackground::ClearBorder((CLegacyNonClientBackground *)this);
  }
  else
  {
    v21 = 0LL;
    if ( !this[25] )
    {
      v22 = 0LL;
      wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v22);
      IsCenterHollow = CNineGridVisual::Create(&v22);
      v5 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v6 = 113LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
          (const char *)(unsigned int)IsCenterHollow,
          v18);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
LABEL_31:
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
        return v5;
      }
      v7 = v22;
      IsCenterHollow = CNineGridVisual::UpdateIsCenterHollow(v22, 1);
      v5 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v6 = 114LL;
        goto LABEL_16;
      }
      v8 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL);
      v10 = v21;
      v21 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      IsCenterHollow = v9(v8, &v21);
      v5 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v6 = 117LL;
        goto LABEL_16;
      }
      IsCenterHollow = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(v7, v21);
      v5 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v6 = 118LL;
        goto LABEL_16;
      }
      IsCenterHollow = CContainerVisual::InsertChildAfter((CContainerVisual *)this, v7, 0LL);
      v5 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v6 = 121LL;
        goto LABEL_16;
      }
      v22 = 0LL;
      v11 = this[25];
      this[25] = v7;
      if ( v11 )
        CBaseObject::Release(v11);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
    }
    updated = CNineGridVisual::UpdateInsets(
                this[25],
                (float)(*((_DWORD *)this + 60) - v3->left),
                (float)(*((_DWORD *)this + 61) - *((_DWORD *)this + 65)),
                (float)(*((_DWORD *)this + 66) - *((_DWORD *)this + 62)),
                COERCE_INT((float)(*((_DWORD *)this + 67) - *((_DWORD *)this + 63))));
    v5 = updated;
    if ( updated < 0 )
    {
      v13 = 129LL;
LABEL_29:
      v14 = (unsigned int)updated;
      goto LABEL_30;
    }
    CRectangleVisual::SetRect(this[25], v3);
    if ( !v21 )
    {
      v21 = 0LL;
      updated = CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionColorBrush>(this[25], &v21);
      v5 = updated;
      if ( updated < 0 )
      {
        v13 = 135LL;
        goto LABEL_29;
      }
      if ( !v21 )
      {
        v5 = -2147418113;
        v14 = 2147549183LL;
        v13 = 136LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
          (const char *)v14,
          v19);
        goto LABEL_31;
      }
    }
    v15 = WUColorFromD2DColor(v2);
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 56LL))(v16, v15);
    v5 = updated;
    if ( updated < 0 )
    {
      v13 = 139LL;
      goto LABEL_29;
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
  }
  return 0LL;
}
