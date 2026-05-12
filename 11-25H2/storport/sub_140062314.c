/*
 * XREFs of sub_140062314 @ 0x140062314
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140034288 @ 0x140034288 (sub_140034288.c)
 *     sub_140070610 @ 0x140070610 (sub_140070610.c)
 *     sub_140070FE0 @ 0x140070FE0 (sub_140070FE0.c)
 */

__int64 __fastcall sub_140062314(__int64 a1)
{
  const UNICODE_STRING *v2; // rcx
  int v3; // r8d
  NTSTATUS v4; // ebx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v2 = (const UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
  v3 = *(_DWORD *)(a1 + 56);
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  v4 = sub_140034288(v2, &UnicodeString, v3, 1);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)sub_1400143E0(64LL, 192LL, 1465016658LL, 0LL);
      if ( v5 )
      {
        v6 = (_QWORD *)sub_1400143E0(64LL, 192LL, 1465016658LL, 0LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 616);
          v5[1] = 0LL;
          *v5 = v7 + 16;
          v6[1] = sub_140065220;
          *v6 = v5;
          sub_140070610(KeyHandle, v6);
          sub_140070FE0(v6);
          KeyHandle = 0LL;
          *(_QWORD *)(a1 + 6048) = v6;
        }
        else
        {
          v4 = -1073741670;
          ExFreePoolWithTag(v5, 0x57526152u);
        }
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
