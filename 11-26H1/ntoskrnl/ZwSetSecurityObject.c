/*
 * XREFs of ZwSetSecurityObject @ 0x140726B30
 * Callers:
 *     DifZwSetSecurityObjectWrapper @ 0x1406BB920 (DifZwSetSecurityObjectWrapper.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1406E2028 (CmpApplyAdminSdOnHiveFiles.c)
 *     CmpDoReDoRecord @ 0x140863828 (CmpDoReDoRecord.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     _RegRtlSetKeySecurity @ 0x14089DB2C (_RegRtlSetKeySecurity.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14098C464 (PiDevCfgCopyDeviceKeys.c)
 *     BiCreateKey @ 0x1409D5868 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
