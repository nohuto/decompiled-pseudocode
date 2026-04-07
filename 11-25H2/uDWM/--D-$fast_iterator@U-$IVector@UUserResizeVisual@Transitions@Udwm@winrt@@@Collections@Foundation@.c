/*
 * XREFs of ??D?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@XZ @ 0x1800D9EE8
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DA1FC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800DA368 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 *     ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800DA8AC (-UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800DA0EC (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 */

__int64 __fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::operator*(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
    *(_QWORD *)a1,
    a2,
    *(unsigned int *)(a1 + 8));
  return a2;
}
