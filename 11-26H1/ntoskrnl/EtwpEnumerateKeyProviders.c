/*
 * XREFs of EtwpEnumerateKeyProviders @ 0x140B40078
 * Callers:
 *     EtwpEnableKeyProviders @ 0x140833B0C (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 */

int __fastcall EtwpEnumerateKeyProviders(
        void *a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        _DWORD *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v12; // ebx
  int v13; // r12d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  _RTL_AVL_TABLE *v17; // rcx
  const WCHAR *v18; // rdx
  ULONG ValueData; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  ValueData = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  NewElement = 0;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v12 = 0;
    v13 = a8;
    while ( 1 )
    {
      v14 = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
      v15 = KeyInformation[3];
      if ( v15 >= 0x108 )
      {
        v14 = -2147483643;
        goto LABEL_11;
      }
      if ( v14 < 0 )
        break;
      v16 = v15;
      v17 = Table;
      *((_WORD *)KeyInformation + (v16 >> 1) + 8) = 0;
      RtlInsertElementGenericTableAvl(v17, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
      if ( NewElement )
        EtwpEnableAutoLoggerProvider(a1, a2, (const WCHAR *)KeyInformation + 8, (__int64)a3, a4, v13);
      ++v12;
    }
    if ( v14 == -2147483622 )
      return ZwClose(KeyHandle);
LABEL_11:
    ValueData = RtlNtStatusToDosError(v14);
    v18 = (const WCHAR *)a4;
    if ( !a4 )
      v18 = a3;
    RtlWriteRegistryValue(0, v18, L"EnableStatus", 4u, &ValueData, 4u);
    return ZwClose(KeyHandle);
  }
  return result;
}
