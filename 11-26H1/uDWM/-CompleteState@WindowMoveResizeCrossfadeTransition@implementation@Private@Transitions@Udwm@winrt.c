/*
 * XREFs of ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004232C
 * Callers:
 *     ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x180030A24 (-PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800732F4 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CompleteState(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  __int64 *v1; // rbx
  char v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 24);
  v4 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator!=((char *)this + 24, &v4) )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v1);
    if ( v1 != (__int64 *)&v3 )
    {
      if ( *v1 )
        winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v1);
      *v1 = 0LL;
    }
  }
  *((_BYTE *)this + 72) = 0;
}
