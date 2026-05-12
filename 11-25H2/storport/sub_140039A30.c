/*
 * XREFs of sub_140039A30 @ 0x140039A30
 * Callers:
 *     sub_1400554A4 @ 0x1400554A4 (sub_1400554A4.c)
 * Callees:
 *     sub_140039B40 @ 0x140039B40 (sub_140039B40.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140039A30(int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+80h] [rbp-80h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  sub_140039B40(SourceString, 512LL, L"%s\\Scsi Port %d", L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi", a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v2 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v2;
  }
  return result;
}
