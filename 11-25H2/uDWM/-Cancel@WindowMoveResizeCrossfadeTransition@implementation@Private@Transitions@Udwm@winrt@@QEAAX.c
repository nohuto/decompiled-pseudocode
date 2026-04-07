/*
 * XREFs of ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002B1DC
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180062034 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D8D78 (--1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x1800D8EF0 (-Cancel@-$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002A6D0 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CancelPendingAnimations@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D8F1C (-CancelPendingAnimations@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DW.c)
 *     ?StopAnimation@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D90D0 (-StopAnimation@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Tra.c)
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
  if ( winrt::Windows::Foundation::operator!=((_QWORD *)this + 4, &v7) )
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
    if ( winrt::Windows::Foundation::operator!=((_QWORD *)this + 5, &v7) )
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
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    v4 = (char *)this + 72;
  }
  if ( v6 )
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations((char *)this + 40);
  *v4 = 0;
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(this);
}
