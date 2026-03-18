/*
 * XREFs of RIMCmShouldDeliverSuppressedContact @ 0x14015DE18
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x14015DDE4 (RIMCmShouldDeliverSuppressedContactEndState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMCmShouldDeliverSuppressedContact(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 24) == 7 && *(_DWORD *)(a2 + 8) == 16;
}
