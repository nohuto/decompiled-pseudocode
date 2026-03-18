/*
 * XREFs of ZwSetInformationObject @ 0x140723F70
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1406BA470 (DifZwSetInformationObjectWrapper.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
