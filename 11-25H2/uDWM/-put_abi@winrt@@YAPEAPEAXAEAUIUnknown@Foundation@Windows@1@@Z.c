/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800999F8
 * Callers:
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x180089630 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     ?get@?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18009576C (-get@-$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800DA0EC (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?get@?$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800DB26C (-get@-$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@win.c)
 *     ?get@?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E0E10 (-get@-$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
  return (void **)this;
}
