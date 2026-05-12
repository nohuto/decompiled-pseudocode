/*
 * XREFs of sub_14006EF74 @ 0x14006EF74
 * Callers:
 *     sub_14006FDFC @ 0x14006FDFC (sub_14006FDFC.c)
 * Callees:
 *     sub_1400710E8 @ 0x1400710E8 (sub_1400710E8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14006EF74(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  WCHAR ValueName[8]; // [rsp+88h] [rbp+2Fh] BYREF
  __int128 v8; // [rsp+98h] [rbp+3Fh]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(_OWORD *)ValueName = 0LL;
  v8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeAuthKeys");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    sub_1400710E8(ValueName, 16LL, L"%d", *(unsigned int *)(a1 + 4));
    v2 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, ValueName);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
