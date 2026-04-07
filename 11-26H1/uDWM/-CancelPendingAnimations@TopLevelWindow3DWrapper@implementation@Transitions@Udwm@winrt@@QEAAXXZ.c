/*
 * XREFs of ?CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18008AB08
 * Callers:
 *     ?CancelPendingAnimations@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x18007C420 (-CancelPendingAnimations@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::CancelPendingAnimations(
        CTopLevelWindow3D **this)
{
  CTopLevelWindow3D::ClearPendingAnimations(this[4]);
}
