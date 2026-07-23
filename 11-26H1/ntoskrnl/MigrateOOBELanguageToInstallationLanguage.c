/*
 * XREFs of MigrateOOBELanguageToInstallationLanguage @ 0x1406D78EC
 * Callers:
 *     NtFlushInstallUILanguage @ 0x140849A20 (NtFlushInstallUILanguage.c)
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 MigrateOOBELanguageToInstallationLanguage()
{
  NTSTATUS v0; // ebx
  unsigned __int16 v1; // dx
  __int64 i; // r8
  __int16 v3; // ax
  unsigned __int16 v4; // cx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+98h] [rbp-70h] BYREF
  __int16 v12; // [rsp+A0h] [rbp-68h]
  _BYTE KeyValueInformation[8]; // [rsp+A8h] [rbp-60h] BYREF
  ULONG DataSize; // [rsp+B0h] [rbp-58h]
  _BYTE Data[516]; // [rsp+B4h] [rbp-54h] BYREF

  v11 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString_8 = 0LL;
  v12 = 0;
  memset_0(KeyValueInformation, 0, 0x210uLL);
  DestinationString = 0;
  ValueName_8 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\NLS\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString_8, L"InstallLanguage");
    v1 = PsInstallUILanguageId;
    for ( i = 3LL; i >= 0; --i )
    {
      v3 = 55;
      v4 = v1 & 0xF;
      if ( v4 <= 9u )
        v3 = 48;
      v1 >>= 4;
      *((_WORD *)&v11 + i) = v4 + v3;
    }
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           &DestinationString) >= 0 )
    {
      RtlInitUnicodeString(&ValueName_8, L"PreviousInstallLanguage");
      ZwSetValueKey(KeyHandle, &ValueName_8, 0, 1u, Data, DataSize);
    }
    v0 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, &v11, 0xAu);
    if ( v0 >= 0 )
      v0 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
