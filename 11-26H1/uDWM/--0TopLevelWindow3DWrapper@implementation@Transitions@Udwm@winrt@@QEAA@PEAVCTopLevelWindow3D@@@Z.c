/*
 * XREFs of ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F928
 * Callers:
 *     ??$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@@Z @ 0x180085E24 (--$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAV.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x180088518 (--0-$producers_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@V-$tuple@UTo.c)
 */

_QWORD *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        struct CTopLevelWindow3D *a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r9
  CBaseObject *v5; // r10

  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>(
    this,
    a2,
    a3,
    this);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 24);
  v4[2] = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  *v4 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  v4[4] = v5;
  if ( v5 )
    CBaseObject::AddRef(v5);
  v4[5] = 0LL;
  return v4;
}
