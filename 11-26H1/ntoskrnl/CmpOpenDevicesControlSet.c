/*
 * XREFs of CmpOpenDevicesControlSet @ 0x140852D30
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x140852334 (CmpMarkCurrentProfileDirty.c)
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 */

__int64 __fastcall CmpOpenDevicesControlSet(__int64 a1, HANDLE *a2, UNICODE_STRING *a3)
{
  const UNICODE_STRING *v3; // rdi
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[256]; // [rsp+70h] [rbp-90h] BYREF

  v3 = &CmpDevicesHiveNameString;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  KeyHandle = 0LL;
  if ( !HIDWORD(WheapPfaLock.KernelStack) )
    v3 = &CmpSystemHiveNameString;
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)v12;
  memset(&ObjectAttributes, 0, 32);
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%wZ\\CurrentControlSet", v3);
  if ( v6 < 0 )
    goto LABEL_11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !HIDWORD(WheapPfaLock.KernelStack) )
      goto LABEL_11;
    *(_QWORD *)&DestinationString.Length = 0x1000000LL;
    v3 = &CmpSystemHiveNameString;
    DestinationString.Buffer = (wchar_t *)v12;
    v6 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"\\Registry\\Machine\\%wZ\\CurrentControlSet",
           &CmpSystemHiveNameString);
    if ( v6 < 0 )
      goto LABEL_11;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
  {
LABEL_11:
    v7 = KeyHandle;
    goto LABEL_12;
  }
  v7 = 0LL;
  *a2 = KeyHandle;
  KeyHandle = 0LL;
  if ( !a3 )
    return (unsigned int)v6;
  *a3 = *v3;
LABEL_12:
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v6;
}
