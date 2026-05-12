/*
 * XREFs of GetNvmeHostName @ 0x1400753A0
 * Callers:
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall GetNvmeHostName(_OWORD *a1)
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

  *a1 = 0LL;
  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  a1[1] = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ValueName = 0LL;
  ResultLength = 0;
  if ( (_BYTE)NvmeHostName )
    goto LABEL_13;
  if ( NvmeHostNameChecked )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
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
        memmove(&NvmeHostName, &Src_4, v3);
      }
      else
      {
        v1 = -1073739509;
      }
    }
    NvmeHostNameChecked = 1;
    ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
LABEL_13:
      *a1 = NvmeHostName;
      a1[1] = xmmword_140172700;
    }
  }
  return (unsigned int)v1;
}
