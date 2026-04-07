/*
 * XREFs of ??$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@impl@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800D9E94
 * Callers:
 *     ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800DA2B4 (--$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@wi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800DD118 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::UserResizeVisual,CTopLevelWindow3D * &,bool>(
        struct CTopLevelWindow3D **a1,
        bool *a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v4; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v5; // rbx

  v4 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)operator new(0xA8uLL);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(v4, *a1, *a2);
  *(_QWORD *)v5 = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>'};
  *((_QWORD *)v5 + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>'};
  return v5;
}
