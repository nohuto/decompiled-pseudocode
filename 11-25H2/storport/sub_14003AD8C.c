/*
 * XREFs of sub_14003AD8C @ 0x14003AD8C
 * Callers:
 *     sub_14003AC78 @ 0x14003AC78 (sub_14003AC78.c)
 *     sub_14009FE10 @ 0x14009FE10 (sub_14009FE10.c)
 *     sub_140133C1C @ 0x140133C1C (sub_140133C1C.c)
 *     sub_140133C9C @ 0x140133C9C (sub_140133C9C.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 sub_14003AD8C(void *a1, ULONG a2, void **a3, const wchar_t *a4, ...)
{
  NTSTATUS v7; // ebx
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[64]; // [rsp+A0h] [rbp-60h] BYREF
  va_list Args; // [rsp+180h] [rbp+80h] BYREF

  va_start(Args, a4);
  KeyHandle = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( (unsigned int)vsnwprintf(Dest, 0x3EuLL, a4, Args) >= 0x3E )
    Dest[62] = 0;
  Dest[63] = 0;
  RtlInitUnicodeString(&DestinationString, Dest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, a2, &Disposition);
  if ( v7 >= 0 )
  {
    if ( Disposition == 2 )
      v7 = 0x40000000;
    if ( a3 )
      *a3 = KeyHandle;
    else
      ZwClose(KeyHandle);
  }
  return (unsigned int)v7;
}
