/*
 * XREFs of ?GetTrustLevel@CProtocolActivatedEventArgs@@WGA@EAAJPEAW4TrustLevel@@@Z @ 0x18032E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 96), a2);
}
