/*
 * XREFs of SpRegOpenKey @ 0x140840894
 * Callers:
 *     SpRegOpenRedirectedKey @ 0x140840930 (SpRegOpenRedirectedKey.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

__int64 __fastcall SpRegOpenKey(UNICODE_STRING *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  unsigned int v5; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v4 = KeyHandle;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *a2 = KeyHandle;
    v4 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  return v5;
}
