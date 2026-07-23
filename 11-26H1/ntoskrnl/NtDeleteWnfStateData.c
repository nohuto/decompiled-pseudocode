/*
 * XREFs of NtDeleteWnfStateData @ 0x1408458E0
 * Callers:
 *     DifNtDeleteWnfStateDataWrapper @ 0x140679A00 (DifNtDeleteWnfStateDataWrapper.c)
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  return ExpNtDeleteWnfStateData((void *)StateName, (__int64)ExplicitScope, 1);
}
