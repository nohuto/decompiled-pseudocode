/*
 * XREFs of ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DDA1C
 * Callers:
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x1800DD9F0 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800DD6C0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartShowAnimation(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2,
        __int64 a3)
{
  CAcrylicSheet *v4; // rbx
  float v5; // xmm0_4

  CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 8) + 232LL) + 440LL), 0.0, a3);
  CTopLevelWindow3D::StartAnimation(*((_QWORD *)this + 8), 0xEu);
  v4 = (CAcrylicSheet *)*((_QWORD *)this + 5);
  v5 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)this);
  CAcrylicSheet::StartAlphaAnimation(v4, 0.0, 1.0, v5);
}
