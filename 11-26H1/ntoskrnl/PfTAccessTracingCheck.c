/*
 * XREFs of PfTAccessTracingCheck @ 0x1406029E4
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C87C0 (PfpLogScenarioEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 76) & 1;
}
