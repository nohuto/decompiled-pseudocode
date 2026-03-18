/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140726170
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1406B4010 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x140797740 (IoIsValidNameGraftingBuffer.c)
 *     SiTranslateSymbolicLink @ 0x140894C18 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14089573C (SiGetBiosSystemDisk.c)
 *     ExpTranslateSymbolicLink @ 0x140A95510 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140B220E4 (BiTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
