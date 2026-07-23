/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x14072B560
 * Callers:
 *     DifZwSetInformationSymbolicLinkWrapper @ 0x1406BE500 (DifZwSetInformationSymbolicLinkWrapper.c)
 *     ObpInitializeRootNamespace @ 0x1407C5FFC (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
