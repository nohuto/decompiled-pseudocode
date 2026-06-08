/*
 * XREFs of CpcAcquirePerformance @ 0x140002AB0
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x140002AEC (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation(CpcSubspaceAcquirePerformance, a1, 0LL);
}
