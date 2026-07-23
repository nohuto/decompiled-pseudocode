/*
 * XREFs of ZwQueryObject @ 0x1407281C0
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1406B6B80 (DifZwQueryObjectWrapper.c)
 *     EtwpObjectTypeRundown @ 0x140835A9C (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x14085AD28 (CmpCmdRenameHive.c)
 *     _RegRtlQueryKeyPathName @ 0x1408A3D28 (_RegRtlQueryKeyPathName.c)
 *     CmpNameFromAttributes @ 0x14093E968 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x140B06E90 (CmpAddToHiveFileList.c)
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
