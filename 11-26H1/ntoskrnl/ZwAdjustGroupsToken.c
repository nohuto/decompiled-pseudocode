/*
 * XREFs of ZwAdjustGroupsToken @ 0x140728D40
 * Callers:
 *     DifZwAdjustGroupsTokenWrapper @ 0x14069C720 (DifZwAdjustGroupsTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
