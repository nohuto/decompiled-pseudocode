/*
 * XREFs of ExpGetOriginalImageVersionRegistryValue @ 0x14084C968
 * Callers:
 *     ExInitSystemPhase2 @ 0x140CEA3E4 (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

__int64 __fastcall ExpGetOriginalImageVersionRegistryValue(_DWORD *a1)
{
  int v2; // edi
  NTSTATUS v3; // ebx
  HANDLE v4; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+37h] BYREF
  int v12; // [rsp+9Ch] [rbp+3Bh]
  int v13; // [rsp+A0h] [rbp+3Fh]
  int v14; // [rsp+A4h] [rbp+43h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v2 = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\HAL\\OriginalImageFeatures");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"OriginalImageVersion");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    if ( v3 >= 0 )
    {
      if ( v12 == 3 && v13 == 4 )
        v2 = v14;
      else
        v3 = -1073741823;
    }
  }
  v4 = KeyHandle;
  *a1 = v2;
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v3;
}
