/*
 * XREFs of ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C
 * Callers:
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040C90 (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator() @ 0x180087744 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransition--PostTra.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041818 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004232C (-CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ClearTaggedWindowRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A440 (-ClearTaggedWindowRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWra.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  char *v1; // rbx
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 32;
  v7 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator!=((char *)this + 32, &v7) )
  {
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::ClearTaggedWindowRect(v1);
    v7 = 0LL;
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(v1, &v7);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset((CAnimationResource **)this + 8);
  v3 = (_QWORD *)((char *)this + 40);
  if ( (char *)this + 40 != &v6 )
  {
    if ( *v3 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this + 5);
    *v3 = 0LL;
  }
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CompleteState(this);
  UDwmTrace::WindowMoveResizeCrossfadeAnimationTeardownComplete(v5, v4);
}
