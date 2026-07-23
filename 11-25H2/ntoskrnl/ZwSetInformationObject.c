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

NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
