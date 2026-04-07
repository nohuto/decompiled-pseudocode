/*
 * XREFs of ??$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@@Z @ 0x180062CF0
 * Callers:
 *     ??$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@@Z @ 0x180062CB8 (--$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D.c)
 * Callees:
 *     ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x180062D40 (--0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(
        struct CTopLevelWindow3D **a1,
        const struct std::nothrow_t *a2)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *v3; // rax
  _QWORD *v4; // r11

  v3 = (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)operator new[](0x30uLL, a2);
  if ( !v3 )
    return 0LL;
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::TopLevelWindow3DWrapper(v3, *a1);
  *v4 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  v4[2] = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  return v4;
}
