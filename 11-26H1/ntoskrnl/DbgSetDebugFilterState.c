/*
 * XREFs of DbgSetDebugFilterState @ 0x1406180A0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1408A6EF0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
