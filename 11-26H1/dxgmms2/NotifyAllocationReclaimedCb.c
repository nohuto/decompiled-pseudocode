/*
 * XREFs of NotifyAllocationReclaimedCb @ 0x1400B26D0
 * Callers:
 *     <none>
 * Callees:
 *     NotifyAllocationReclaimed @ 0x14012430C (NotifyAllocationReclaimed.c)
 */

__int64 __fastcall NotifyAllocationReclaimedCb(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return NotifyAllocationReclaimed(a1, a2, a3);
}
