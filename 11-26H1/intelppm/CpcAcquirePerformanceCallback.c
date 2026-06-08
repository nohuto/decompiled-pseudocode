/*
 * XREFs of CpcAcquirePerformanceCallback @ 0x140004330
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x14000434C (CpcConsolidateCommandCompletion.c)
 */

__int64 __fastcall CpcAcquirePerformanceCallback(__int64 a1, __int64 a2)
{
  return CpcConsolidateCommandCompletion(*(_QWORD *)(a2 + 176));
}
