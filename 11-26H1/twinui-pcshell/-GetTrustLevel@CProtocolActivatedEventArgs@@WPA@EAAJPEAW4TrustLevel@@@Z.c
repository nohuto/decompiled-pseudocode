/*
 * XREFs of ?GetTrustLevel@CProtocolActivatedEventArgs@@WPA@EAAJPEAW4TrustLevel@@@Z @ 0x18032C400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 240), a2);
}
