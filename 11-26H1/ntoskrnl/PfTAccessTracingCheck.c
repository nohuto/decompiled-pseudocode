/*
 * XREFs of PfTAccessTracingCheck @ 0x1405FFF34
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C5760 (PfpLogScenarioEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 76) & 1;
}
