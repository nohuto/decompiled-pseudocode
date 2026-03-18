/*
 * XREFs of ZwSetInformationObject @ 0x14069BCC0
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x14063C7E0 (DifZwSetInformationObjectWrapper.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
