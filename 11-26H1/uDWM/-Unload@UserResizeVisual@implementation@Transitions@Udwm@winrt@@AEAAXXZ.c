/*
 * XREFs of ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DDA90
 * Callers:
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800DD2D0 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::operator() @ 0x1800DD348 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--__ea_1800DD348.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180095778 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  CTopLevelWindow3D *v2; // rcx
  __int64 v3; // r8

  v2 = (CTopLevelWindow3D *)*((_QWORD *)this + 8);
  if ( *((_QWORD *)v2 + 29) )
  {
    CTopLevelWindow3D::StopAnimation(v2);
    CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 8) + 232LL) + 440LL), 1.0, v3);
  }
  if ( *((_QWORD *)this + 20) )
    std::_Func_class<void,>::operator()((__int64)this + 104);
  if ( *((_QWORD *)this + 9) )
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 9);
}
