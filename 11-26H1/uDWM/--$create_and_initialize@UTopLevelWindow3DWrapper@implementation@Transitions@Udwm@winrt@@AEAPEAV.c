/*
 * XREFs of ??$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@@Z @ 0x180085E24
 * Callers:
 *     ??$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@@Z @ 0x180085D98 (--$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D.c)
 * Callees:
 *     ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F928 (--0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(
        struct CTopLevelWindow3D **a1)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // r11

  v2 = (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)operator new(0x30uLL);
  if ( !v2 )
    return 0LL;
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::TopLevelWindow3DWrapper(v2, *a1, v3);
  *v4 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  v4[2] = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  return v4;
}
