/*
 * XREFs of ZwQueryObject @ 0x1407235F0
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1406B2FA0 (DifZwQueryObjectWrapper.c)
 *     EtwpObjectTypeRundown @ 0x14082F85C (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x140854A18 (CmpCmdRenameHive.c)
 *     _RegRtlQueryKeyPathName @ 0x14089D928 (_RegRtlQueryKeyPathName.c)
 *     CmpNameFromAttributes @ 0x14097C958 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140B05280 (CmpAddToHiveFileList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass);
}
