/*
 * XREFs of ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800DA2B4
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@impl@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800D9E94 (--$create_and_initialize@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLev.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::UserResizeVisual,CTopLevelWindow3D * &,bool>(
        __int64 *a1,
        struct CTopLevelWindow3D **a2,
        bool *a3)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v4; // rax

  v4 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::UserResizeVisual,CTopLevelWindow3D * &,bool>(
         a2,
         a3);
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  return a1;
}
