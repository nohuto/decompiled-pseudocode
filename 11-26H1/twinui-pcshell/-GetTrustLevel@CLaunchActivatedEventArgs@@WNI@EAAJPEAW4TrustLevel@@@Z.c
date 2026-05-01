/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x180680B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 216), a2);
}
