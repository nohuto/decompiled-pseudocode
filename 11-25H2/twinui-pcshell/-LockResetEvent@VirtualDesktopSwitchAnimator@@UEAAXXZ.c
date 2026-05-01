/*
 * XREFs of ?LockResetEvent@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180544220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitchAnimator::LockResetEvent(wil::details **this, void *a2)
{
  wil::details::ResetEvent(this[25], a2);
}
