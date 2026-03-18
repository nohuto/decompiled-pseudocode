/*
 * XREFs of ZwQueryAttributesFile @ 0x14069B8E0
 * Callers:
 *     BiResolveLocateDevice @ 0x1408028C4 (BiResolveLocateDevice.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     BiDoesHiveExist @ 0x140A28838 (BiDoesHiveExist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
