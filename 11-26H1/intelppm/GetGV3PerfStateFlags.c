/*
 * XREFs of GetGV3PerfStateFlags @ 0x140002BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetGV3PerfStateFlags(__int64 a1)
{
  return *(_BYTE *)(a1 + 74) != 0;
}
