/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x18065A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 152), a2);
}
