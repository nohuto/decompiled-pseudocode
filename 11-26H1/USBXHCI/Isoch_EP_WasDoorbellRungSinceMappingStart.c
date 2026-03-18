/*
 * XREFs of Isoch_EP_WasDoorbellRungSinceMappingStart @ 0x14004CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Isoch_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 336) & 1;
}
