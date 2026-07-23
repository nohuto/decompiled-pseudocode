/*
 * XREFs of ZwSetSecurityObject @ 0x14069E860
 * Callers:
 *     BiZwSetSecurityObject @ 0x1404A0958 (BiZwSetSecurityObject.c)
 *     DifZwSetSecurityObjectWrapper @ 0x14063CE20 (DifZwSetSecurityObjectWrapper.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14065BB28 (CmpApplyAdminSdOnHiveFiles.c)
 *     SmKmStoreFileCreateForIoType @ 0x14078B834 (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoRecord @ 0x1407D6E40 (CmpDoReDoRecord.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     _RegRtlSetKeySecurity @ 0x1408114BC (_RegRtlSetKeySecurity.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14094C678 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
