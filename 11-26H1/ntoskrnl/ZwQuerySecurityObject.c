/*
 * XREFs of ZwQuerySecurityObject @ 0x140726110
 * Callers:
 *     RtlIsUntrustedObject @ 0x1404CE5D0 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x1406B3B00 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x14089D908 (_RegRtlGetKeySecurity.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408B5DB0 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
