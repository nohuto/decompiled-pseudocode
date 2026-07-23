/*
 * XREFs of NtUpdateWnfStateData @ 0x1409C61D0
 * Callers:
 *     DifNtUpdateWnfStateDataWrapper @ 0x140694730 (DifNtUpdateWnfStateDataWrapper.c)
 *     SepSecureBootCheckForUpdates @ 0x140CE443C (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  return ExpNtUpdateWnfStateData((void *)StateName, (__int64)ExplicitScope, MatchingChangeStamp, CheckStamp, 1);
}
