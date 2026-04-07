/*
 * XREFs of ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44
 * Callers:
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D57F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D70BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18002A93C (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x18009A35C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800D4760 (--$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  _QWORD *v2; // rax
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  struct CRenderDataInstruction *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v14; // eax
  int v15; // eax
  CSolidRectangleInstruction *v16; // [rsp+20h] [rbp-40h] BYREF
  struct CBaseGeometryProxy *v17; // [rsp+28h] [rbp-38h] BYREF
  struct CDrawGeometryInstruction *v18; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+4Ch] [rbp-14h]
  int v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v18 = 0LL;
  v17 = 0LL;
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
  v5 = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 7));
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      460LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v5,
      (int)v16);
  v16 = 0LL;
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(&v16);
  v6 = CSolidRectangleInstruction::Create(&v16);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      464LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v6,
      (int)v16);
  v7 = CSolidRectangleInstruction::SetSolidFill((struct _D3DCOLORVALUE *)v16, &stru_1800FED18);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      466LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v7,
      (int)v16);
  v19.left = COERCE_UNSIGNED_INT((float)v3) ^ _xmm;
  v19.top = COERCE_UNSIGNED_INT((float)v4) ^ _xmm;
  *(float *)&v19.right = (float)v3;
  *(float *)&v19.bottom = (float)v4;
  CSolidRectangleInstruction::SetRect(v8, &v19);
  v10 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v9);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      473LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v10,
      (int)v16);
  v19.left = 0;
  v19.top = 0;
  v11 = *((_QWORD *)this + 7);
  v19.right = *(_DWORD *)(v11 + 72);
  v19.bottom = *(_DWORD *)(v11 + 76);
  v17 = 0LL;
  v12 = ResourceHelper::CreateRectangleGeometry(&v19, &v17);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      476LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v12,
      (int)v16);
  v18 = 0LL;
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(*((CAnimatedTransitionVisual **)this + 8));
  v14 = CDrawGeometryInstruction::Create(BrushNoRef, v17, &v18);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      478LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v14,
      (int)v16);
  v15 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v18);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      479LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v15,
      (int)v16);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
}
