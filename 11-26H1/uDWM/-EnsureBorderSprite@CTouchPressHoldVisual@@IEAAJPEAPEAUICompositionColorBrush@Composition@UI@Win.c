/*
 * XREFs of ?EnsureBorderSprite@CTouchPressHoldVisual@@IEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800CD0E4
 * Callers:
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z @ 0x18000834C (-UpdateIsCenterHollow@CNineGridVisual@@QEAAJ_N@Z.c)
 *     ??$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180008DF0 (--$UpdateInnerBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPE.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x1800845B8 (--$GetInnerBrush@UICompositionColorBrush@Composition@UI@Windows@@@CNineGridVisual@@QEAAJPEAPEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTouchPressHoldVisual::EnsureBorderSprite(
        CBaseObject **this,
        struct Windows::UI::Composition::ICompositionColorBrush **a2)
{
  struct CNineGridVisual **v4; // rdi
  int IsCenterHollow; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  CNineGridVisual *v8; // rbx
  __int64 v9; // rcx
  struct Windows::UI::Composition::ICompositionColorBrush *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionColorBrush *v15; // [rsp+40h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = this + 38;
  if ( !this[38] )
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 38);
    IsCenterHollow = CNineGridVisual::Create(v4);
    v6 = IsCenterHollow;
    if ( IsCenterHollow < 0 )
    {
      v7 = 362LL;
      goto LABEL_6;
    }
    IsCenterHollow = CNineGridVisual::UpdateIsCenterHollow(*v4, 1);
    v6 = IsCenterHollow;
    if ( IsCenterHollow < 0 )
    {
      v7 = 363LL;
      goto LABEL_6;
    }
  }
  if ( !*((_BYTE *)this + 260) )
  {
    IsCenterHollow = CContainerVisual::InsertChildAfter((CContainerVisual *)this, *v4, 0LL);
    v6 = IsCenterHollow;
    if ( IsCenterHollow < 0 )
    {
      v7 = 369LL;
      goto LABEL_6;
    }
    *((_BYTE *)this + 260) = 1;
  }
  v8 = *v4;
  v9 = (__int64)v15;
  v15 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  IsCenterHollow = CNineGridVisual::GetInnerBrush<Windows::UI::Composition::ICompositionColorBrush>(v8, &v15);
  v6 = IsCenterHollow;
  if ( IsCenterHollow >= 0 )
  {
    v10 = v15;
    if ( !v15 )
    {
      v11 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
      v12 = *v11;
      v15 = 0LL;
      IsCenterHollow = (*(__int64 (__fastcall **)(__int64 *, struct Windows::UI::Composition::ICompositionColorBrush **))(v12 + 56))(
                         v11,
                         &v15);
      v6 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v7 = 377LL;
        goto LABEL_6;
      }
      IsCenterHollow = CNineGridVisual::UpdateInnerBrush<Windows::UI::Composition::ICompositionColorBrush *>(
                         *v4,
                         (__int64)v15);
      v6 = IsCenterHollow;
      if ( IsCenterHollow < 0 )
      {
        v7 = 378LL;
        goto LABEL_6;
      }
      v10 = v15;
    }
    v15 = 0LL;
    *a2 = v10;
    v6 = 0;
    goto LABEL_22;
  }
  v7 = 373LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\touchpressholdvisual.cpp",
    (const char *)(unsigned int)IsCenterHollow);
LABEL_22:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v15);
  return v6;
}
