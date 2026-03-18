/*
 * XREFs of RIMCmShouldDeliverSuppressedContactEndState @ 0x14015DDE4
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 * Callees:
 *     RIMCmShouldDeliverSuppressedContact @ 0x14015DE18 (RIMCmShouldDeliverSuppressedContact.c)
 */

__int64 __fastcall RIMCmShouldDeliverSuppressedContactEndState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( *(_DWORD *)(a2 + 2684) == 0x2000000 )
    return (unsigned int)RIMCmShouldDeliverSuppressedContact(a1, a2, 0LL, a4) == 0;
  return v4;
}
