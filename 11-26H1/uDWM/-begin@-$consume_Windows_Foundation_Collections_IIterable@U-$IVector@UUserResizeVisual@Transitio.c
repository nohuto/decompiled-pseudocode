/*
 * XREFs of ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800D7FEC
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D71AC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D7318 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 *     ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800D787C (-UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU.c)
 * Callees:
 *     ??$get_begin_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800D69F0 (--$get_begin_iterator@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundati.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::begin(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
    a2,
    a1);
  return v2;
}
