/*
 * XREFs of sub_1400B1F4C @ 0x1400B1F4C
 * Callers:
 *     sub_1400AEEE0 @ 0x1400AEEE0 (sub_1400AEEE0.c)
 *     sub_1400B2118 @ 0x1400B2118 (sub_1400B2118.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400B9DF0 @ 0x1400B9DF0 (sub_1400B9DF0.c)
 */

int __fastcall sub_1400B1F4C(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  ULONG Length; // esi
  __int64 v5; // rbx
  ULONG v6; // edi
  NTSTATUS v7; // eax
  void *KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING String; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+77h] BYREF
  ULONG Value; // [rsp+C8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  Value = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  String = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    v5 = sub_1400143E0(256LL, 20LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( v5 )
    {
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, (PVOID)v5, Length, &ResultLength);
          if ( v7 < 0 )
            break;
          if ( *(_DWORD *)(v5 + 4) == 4 && *(_DWORD *)(v5 + 12) == 4 )
          {
            String.Length = *(_WORD *)(v5 + 16);
            String.MaximumLength = *(_WORD *)(v5 + 16);
            String.Buffer = (PWSTR)(v5 + 20);
            if ( RtlUnicodeStringToInteger(&String, 0, &Value) >= 0 )
              sub_1400B9DF0(a1, Value, *(unsigned int *)(*(unsigned int *)(v5 + 8) + v5));
          }
          ++v6;
        }
        if ( v7 != -2147483643 && v7 != -1073741789 )
          break;
        Length = ResultLength;
        ExFreePoolWithTag((PVOID)v5, 0x65546152u);
        v5 = sub_1400143E0(256LL, Length, 1700028754LL, *(_QWORD *)(a1 + 8));
        if ( !v5 )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag((PVOID)v5, 0x65546152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
