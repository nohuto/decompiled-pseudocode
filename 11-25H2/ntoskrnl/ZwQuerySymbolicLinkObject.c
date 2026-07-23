/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14069DEA0
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x14063A770 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x1407096D0 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140806D70 (SiGetBiosSystemDisk.c)
 *     SiTranslateSymbolicLink @ 0x140A24494 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A61C44 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140A801EC (BiTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
