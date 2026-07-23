/*
 * XREFs of ZwSetSecurityObject @ 0x14072B700
 * Callers:
 *     DifZwSetSecurityObjectWrapper @ 0x1406BF500 (DifZwSetSecurityObjectWrapper.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1406E62A8 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoRecord @ 0x140869C08 (CmpDoReDoRecord.c)
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 *     _RegRtlSetKeySecurity @ 0x1408A3F2C (_RegRtlSetKeySecurity.c)
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140A47944 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
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
