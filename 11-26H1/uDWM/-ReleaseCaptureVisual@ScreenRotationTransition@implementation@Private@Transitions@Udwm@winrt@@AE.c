/*
 * XREFs of ?ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004203C
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ReleaseCaptureVisual(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 56);
  v2 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
}
