/*
 * XREFs of CpcAcquirePerformanceCallback @ 0x140002D40
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x140002D5C (CpcConsolidateCommandCompletion.c)
 */

__int64 __fastcall CpcAcquirePerformanceCallback(__int64 a1, __int64 a2)
{
  return CpcConsolidateCommandCompletion(*(_QWORD *)(a2 + 176));
}
