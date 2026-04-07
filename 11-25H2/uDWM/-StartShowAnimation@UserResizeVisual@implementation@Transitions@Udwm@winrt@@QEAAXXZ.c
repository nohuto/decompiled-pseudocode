/*
 * XREFs of ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E0A3C
 * Callers:
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x1800E0A10 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800E06F4 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartShowAnimation(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  CAcrylicSheet *v2; // rbx
  float v3; // xmm0_4

  CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 9) + 288LL) + 440LL), 0.0);
  CTopLevelWindow3D::StartAnimation(*((_QWORD *)this + 9), 0xEu);
  v2 = (CAcrylicSheet *)*((_QWORD *)this + 5);
  v3 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)this);
  CAcrylicSheet::StartAlphaAnimation(v2, 0.0, 1.0, v3);
}
