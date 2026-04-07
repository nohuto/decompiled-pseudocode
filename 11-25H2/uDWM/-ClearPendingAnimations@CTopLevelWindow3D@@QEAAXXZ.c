/*
 * XREFs of ?ClearPendingAnimations@CTopLevelWindow3D@@QEAAXXZ @ 0x18008E8F8
 * Callers:
 *     ?CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800978C8 (-CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::ClearPendingAnimations(CTopLevelWindow3D *this)
{
  *((_DWORD *)this + 85) = 0;
}
