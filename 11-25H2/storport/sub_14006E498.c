/*
 * XREFs of sub_14006E498 @ 0x14006E498
 * Callers:
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14006E498(_OWORD *a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v11; // [rsp+94h] [rbp-6Ch]
  unsigned int Src; // [rsp+98h] [rbp-68h]
  int Src_4; // [rsp+9Ch] [rbp-64h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *a1 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  a1[1] = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( (_BYTE)xmmword_140168790 )
    goto LABEL_13;
  if ( byte_140168840 )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"NvmeHostName");
    v1 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ResultLength);
    if ( v1 >= 0 )
    {
      if ( v11 == 1 && (v3 = Src) != 0 )
      {
        if ( Src > 0x20 )
          v3 = 32;
        memmove(&xmmword_140168790, &Src_4, v3);
      }
      else
      {
        v1 = -1073739509;
      }
    }
    byte_140168840 = 1;
    ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
LABEL_13:
      *a1 = xmmword_140168790;
      a1[1] = xmmword_1401687A0;
    }
  }
  return (unsigned int)v1;
}
