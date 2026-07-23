/*
 * XREFs of ZwFilterToken @ 0x140729D60
 * Callers:
 *     DifZwFilterTokenWrapper @ 0x1406A9C40 (DifZwFilterTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
