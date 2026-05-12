/*
 * XREFs of sub_1401AE8EC @ 0x1401AE8EC
 * Callers:
 *     sub_1400444A0 @ 0x1400444A0 (sub_1400444A0.c)
 *     sub_1401AE6B8 @ 0x1401AE6B8 (sub_1401AE6B8.c)
 *     sub_1401AE748 @ 0x1401AE748 (sub_1401AE748.c)
 * Callees:
 *     sub_140039B40 @ 0x140039B40 (sub_140039B40.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AE9F8 @ 0x1401AE9F8 (sub_1401AE9F8.c)
 */

void *__fastcall sub_1401AE8EC(__int64 a1, unsigned int a2)
{
  void *v3; // rdi
  void *KeyHandle; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  WCHAR SourceString[64]; // [rsp+70h] [rbp-39h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v3 = (void *)sub_1401AE9F8();
  if ( v3 )
  {
    if ( a2 == -1 )
      sub_140039B40(SourceString, 0x80uLL, L"Device");
    else
      sub_140039B40(SourceString, 0x80uLL, L"Device%d", a2);
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v3;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    ZwClose(v3);
  }
  return KeyHandle;
}
