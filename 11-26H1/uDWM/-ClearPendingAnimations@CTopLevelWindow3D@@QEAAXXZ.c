/*
 * XREFs of ?ClearPendingAnimations@CTopLevelWindow3D@@QEAAXXZ @ 0x18007D600
 * Callers:
 *     ?CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18008AB08 (-CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::ClearPendingAnimations(CTopLevelWindow3D *this)
{
  *((_DWORD *)this + 71) = 0;
}
