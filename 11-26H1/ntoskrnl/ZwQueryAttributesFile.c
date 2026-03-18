/*
 * XREFs of ZwQueryAttributesFile @ 0x140723B90
 * Callers:
 *     DifZwQueryAttributesFileWrapper @ 0x1406AF850 (DifZwQueryAttributesFileWrapper.c)
 *     BiResolveLocateDevice @ 0x14089131C (BiResolveLocateDevice.c)
 *     BiResolveLocatePartitionCallback @ 0x140893368 (BiResolveLocatePartitionCallback.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x1409D0850 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
