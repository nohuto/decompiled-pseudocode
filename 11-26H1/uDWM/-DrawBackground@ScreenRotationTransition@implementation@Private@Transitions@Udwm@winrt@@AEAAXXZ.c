/*
 * XREFs of ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38
 * Callers:
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D41AC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetBrush@CAnimatedTransitionVisual@@QEAA?AVCSurfaceBrush@@XZ @ 0x1800BF408 (-GetBrush@CAnimatedTransitionVisual@@QEAA-AVCSurfaceBrush@@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800D1CD8 (--$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  _QWORD *v2; // rax
  LONG v3; // esi
  LONG v4; // r14d
  int v5; // eax
  CRectangleVisual *v6; // rbx
  int v7; // eax
  int updated; // eax
  int v9; // eax
  CVisual *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CRectangleVisual *v16; // [rsp+20h] [rbp-40h] BYREF
  CRectangleVisual *v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+4Ch] [rbp-14h]
  int v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (_QWORD *)winrt::Windows::Foundation::IUnknown::as<ITransitionStateNative>((_QWORD *)this + 6, (__int64)&v16);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v2 + 80LL))(*v2, &v20);
  if ( v16 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref((__int64 *)&v16);
  v3 = 0;
  if ( v22 - v20 >= 0 )
    v3 = v22 - v20;
  v4 = 0;
  if ( v23 - v21 >= 0 )
    v4 = v23 - v21;
  CVisual::SetSize(*((CVisual **)this + 7), v3, v4);
  v16 = 0LL;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v16);
  v5 = CSolidRectangleVisual::Create(&v16);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      459LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v5,
      (int)v16);
  v6 = v16;
  v7 = CContainerVisual::AddChild(*((CContainerVisual **)this + 7), v16);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      460LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v7,
      (int)v16);
  updated = CSolidRectangleVisual::UpdateColor(v6, &stru_1800FA7F8);
  if ( updated < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      463LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)updated,
      (int)v16);
  v19.left = -v3;
  v19.top = -v4;
  v19.right = v3;
  v19.bottom = v4;
  CRectangleVisual::SetRect(v6, &v19);
  CVisual::MoveToFront(v6, 1);
  CAnimatedTransitionVisual::GetBrush(*((_QWORD *)this + 8), &v18);
  if ( v18 )
  {
    v17 = 0LL;
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v17);
    v9 = CSolidRectangleVisual::Create(&v17);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        476LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v9,
        (int)v16);
    v10 = v17;
    v11 = CContainerVisual::AddChild(*((CContainerVisual **)this + 7), v17);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        477LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v11,
        (int)v16);
    CVisual::MoveToFront(v10, 1);
    *(_QWORD *)&v19.left = 0LL;
    v12 = *((_QWORD *)this + 7);
    v19.right = *(_DWORD *)(v12 + 64);
    v19.bottom = *(_DWORD *)(v12 + 68);
    CRectangleVisual::SetRect(v10, &v19);
    v13 = CSurfaceBrush::ApplyViewportTransformForView((CSurfaceBrush *)&v18, &v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        483LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v13,
        (int)v16);
    v14 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)v10, v18);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        484LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v14,
        (int)v16);
    v15 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 32LL))(v10);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        485LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)v15,
        (int)v16);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v16);
}
