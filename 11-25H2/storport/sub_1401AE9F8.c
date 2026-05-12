/*
 * XREFs of sub_1401AE9F8 @ 0x1401AE9F8
 * Callers:
 *     sub_1401780C8 @ 0x1401780C8 (sub_1401780C8.c)
 *     sub_1401A8AEC @ 0x1401A8AEC (sub_1401A8AEC.c)
 *     sub_1401AE7D8 @ 0x1401AE7D8 (sub_1401AE7D8.c)
 *     sub_1401AE8EC @ 0x1401AE8EC (sub_1401AE8EC.c)
 *     sub_1401B2250 @ 0x1401B2250 (sub_1401B2250.c)
 *     sub_1401B236C @ 0x1401B236C (sub_1401B236C.c)
 *     sub_1401B2484 @ 0x1401B2484 (sub_1401B2484.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1401AE9F8(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  void *v5; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v5 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"Parameters");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v5, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  ZwClose(KeyHandle);
  return v5;
}
