/*
 * XREFs of DbgQueryDebugFilterState @ 0x140618080
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140488440 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
