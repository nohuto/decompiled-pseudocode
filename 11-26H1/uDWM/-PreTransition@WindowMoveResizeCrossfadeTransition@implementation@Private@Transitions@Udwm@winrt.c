/*
 * XREFs of ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x180030A24
 * Callers:
 *     ?PreTransition@?$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800309F0 (-PreTransition@-$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180030428 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x180042200 (-CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004232C (-CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PreTransition(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CompleteState((winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *)a1);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 24), a3);
  *(_DWORD *)(a1 + 48) = a2;
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals(a1, a2);
  UDwmTrace::WindowMoveResizeCrossfadeCaptureVisualsComplete();
}
