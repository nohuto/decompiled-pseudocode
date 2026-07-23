/*
 * XREFs of ZwQuerySecurityObject @ 0x14069DE40
 * Callers:
 *     RtlIsUntrustedObject @ 0x1404912C0 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x14063A5C0 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     _RegRtlGetKeySecurity @ 0x1408111D4 (_RegRtlGetKeySecurity.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1409104C8 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
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
