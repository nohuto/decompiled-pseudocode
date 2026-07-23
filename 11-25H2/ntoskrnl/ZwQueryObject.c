/*
 * XREFs of ZwQueryObject @ 0x14069B340
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x14063A260 (DifZwQueryObjectWrapper.c)
 *     EtwpObjectTypeRundown @ 0x1407A1C14 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x1407C61E4 (CmpCmdRenameHive.c)
 *     _RegRtlQueryKeyPathName @ 0x1408112B8 (_RegRtlQueryKeyPathName.c)
 *     CmpNameFromAttributes @ 0x140914048 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140A678B4 (CmpAddToHiveFileList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
