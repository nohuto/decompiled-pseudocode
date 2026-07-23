/*
 * XREFs of ZwQuerySecurityObject @ 0x14072ACE0
 * Callers:
 *     RtlIsUntrustedObject @ 0x1404C8000 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x1406B76E0 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x1408A3D08 (_RegRtlGetKeySecurity.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
