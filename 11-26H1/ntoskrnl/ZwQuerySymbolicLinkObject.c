/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x14072AD40
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x1406B7BF0 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x14079A270 (IoIsValidNameGraftingBuffer.c)
 *     SiTranslateSymbolicLink @ 0x14089B018 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14089BB3C (SiGetBiosSystemDisk.c)
 *     ExpTranslateSymbolicLink @ 0x140A2DD60 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140B244E4 (BiTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
