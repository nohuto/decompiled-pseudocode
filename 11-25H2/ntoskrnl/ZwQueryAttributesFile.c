/*
 * XREFs of ZwQueryAttributesFile @ 0x14069B8E0
 * Callers:
 *     BiResolveLocateDevice @ 0x1408028C4 (BiResolveLocateDevice.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x140A28838 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
