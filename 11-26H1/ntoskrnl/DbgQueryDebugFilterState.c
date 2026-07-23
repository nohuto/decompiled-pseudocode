/*
 * XREFs of DbgQueryDebugFilterState @ 0x14061B0D0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140481F80 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
