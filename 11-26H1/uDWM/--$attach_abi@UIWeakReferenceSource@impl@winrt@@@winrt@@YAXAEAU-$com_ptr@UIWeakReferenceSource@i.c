/*
 * XREFs of ??$attach_abi@UIWeakReferenceSource@impl@winrt@@@winrt@@YAXAEAU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@0@PEAUIWeakReferenceSource@impl@0@@Z @ 0x180086A74
 * Callers:
 *     ??$get_weak@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x1800403D0 (--$get_weak@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800D6A3C (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall winrt::attach_abi<winrt::impl::IWeakReferenceSource>(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
    if ( *a1 )
      result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
  }
  *a1 = a2;
  return result;
}
