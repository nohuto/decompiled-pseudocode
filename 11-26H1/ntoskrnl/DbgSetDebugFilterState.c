/*
 * XREFs of DbgSetDebugFilterState @ 0x14061B0F0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1408AD360 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
