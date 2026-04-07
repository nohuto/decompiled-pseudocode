/*
 * XREFs of ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040C90
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D5E0C (--1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800D5FA0 (-Cancel@-$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?CancelPendingAnimations@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008BEC4 (-CancelPendingAnimations@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DW.c)
 *     ?StopAnimation@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008BF64 (-StopAnimation@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionV.c)
 *     ?StopAnimation@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D60E4 (-StopAnimation@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Tra.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::Cancel(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  char v1; // r14
  char *v2; // rbx
  _BYTE *v4; // rsi
  __int64 v5; // rbx
  char v6; // bp
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (char *)this + 32;
  v7 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator!=((char *)this + 32, &v7) )
  {
    if ( *((_BYTE *)this + 72) )
      winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StopAnimation(v2);
    else
      winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations(v2);
  }
  v4 = (char *)this + 72;
  if ( *((_BYTE *)this + 72) )
  {
    v5 = 0LL;
    v7 = 0LL;
    v1 = 1;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator!=((char *)this + 40, &v7) )
    {
      v6 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = v7;
  }
  v6 = 0;
LABEL_5:
  if ( (v1 & 1) != 0 && v5 )
  {
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v7);
    v4 = (char *)this + 72;
  }
  if ( v6 )
    winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StopAnimation((char *)this + 40);
  *v4 = 0;
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(this);
}
