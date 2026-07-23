/*
 * XREFs of ZwQueryAttributesFile @ 0x140728760
 * Callers:
 *     DifZwQueryAttributesFileWrapper @ 0x1406B3430 (DifZwQueryAttributesFileWrapper.c)
 *     BiResolveLocateDevice @ 0x140897718 (BiResolveLocateDevice.c)
 *     BiResolveLocatePartitionCallback @ 0x140899768 (BiResolveLocatePartitionCallback.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x1409A1830 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
