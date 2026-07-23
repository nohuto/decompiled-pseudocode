/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1800D1B94
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x18015F480 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(void **a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  int v3; // ebx
  void *v6; // rsi
  WCHAR *v7; // r14
  size_t v8; // rax
  void *v9; // rcx
  NTSTATUS result; // eax
  _UNICODE_STRING v11; // xmm0
  size_t v12; // rax
  unsigned __int16 v13; // ax
  ULONG v14; // r13d
  _BYTE *v15; // rax
  NTSTATUS v16; // edi
  size_t v17; // rax
  ULONG v18; // ecx
  NTSTATUS v19; // eax
  void *ProcessHeap; // rcx
  PVOID Heap_0; // rax
  NTSTATUS v22; // eax
  HANDLE *v23; // rsi
  unsigned __int16 v24; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG Length; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING String2; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+68h] [rbp-98h]
  HANDLE *v31; // [rsp+70h] [rbp-90h]
  PCWCH String1; // [rsp+78h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+B4h] [rbp-4Ch]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]

  v3 = 0;
  v31 = a1;
  DesiredAccess = a2;
  ResultLength = 0;
  KeyHandle = 0LL;
  ValueName.Buffer = (wchar_t *)L"UseFilter";
  memset(&ObjectAttributes, 0, 44);
  v6 = 0LL;
  Length = 544;
  v7 = (WCHAR *)KeyValueInformation;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v8 = wcslen(L"UseFilter");
  if ( v8 > 0x7FFE )
    return -1073741562;
  v9 = *a1;
  ValueName.Length = 2 * v8;
  ValueName.MaximumLength = 2 * v8 + 2;
  result = NtQueryValueKey(v9, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x220u, &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v3;
    return result;
  }
  if ( v35 != 4 || v36 != 4 || !v37 )
    return 0;
  v11 = *a3;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = (wchar_t *)L"\\??\\";
  String2 = v11;
  v12 = wcslen(L"\\??\\");
  if ( v12 > 0x7FFE )
    return -1073741562;
  ValueName.Length = 2 * v12;
  ValueName.MaximumLength = 2 * v12 + 2;
  if ( RtlPrefixUnicodeString(&ValueName, &String2, 1u) )
  {
    v13 = String2.Length - 8;
    String1 = String2.Buffer + 4;
  }
  else
  {
    String1 = String2.Buffer;
    v13 = String2.Length;
  }
  v24 = v13;
  v14 = 0;
  v15 = KeyValueInformation;
  for ( *(_QWORD *)&String2.Length = KeyValueInformation; ; v15 = *(_BYTE **)&String2.Length )
  {
    v16 = NtEnumerateKey(*v31, v14, KeyBasicInformation, v15, Length, &ResultLength);
    if ( v16 >= 0 )
    {
      ValueName.Length = *(_WORD *)(*(_QWORD *)&String2.Length + 12LL);
      ValueName.MaximumLength = *(_WORD *)(*(_QWORD *)&String2.Length + 12LL);
      ValueName.Buffer = (wchar_t *)(*(_QWORD *)&String2.Length + 16LL);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.RootDirectory = *v31;
      ObjectAttributes.ObjectName = &ValueName;
      v16 = NtOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( v16 >= 0 )
        break;
    }
LABEL_35:
    ++v14;
    if ( v16 < 0 )
      goto LABEL_36;
LABEL_31:
    ;
  }
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = (wchar_t *)L"FilterFullPath";
  v17 = wcslen(L"FilterFullPath");
  if ( v17 > 0x7FFE )
  {
    v16 = -1073741562;
    NtClose(KeyHandle);
    goto LABEL_36;
  }
  v18 = Length;
  ValueName.Length = 2 * v17;
  ValueName.MaximumLength = 2 * v17 + 2;
  while ( 1 )
  {
    v19 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v7, v18, &ResultLength);
    v16 = v19;
    if ( v19 != -2147483643 && v19 != -1073741789 )
    {
      Heap_0 = *(PVOID *)&String2.Length;
      v18 = Length;
      goto LABEL_24;
    }
    if ( v6 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap_0 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
    v6 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_47;
    v18 = ResultLength;
    v7 = (WCHAR *)Heap_0;
    Length = ResultLength;
    *(_QWORD *)&String2.Length = Heap_0;
LABEL_24:
    if ( v16 != -2147483643 )
    {
      *(_QWORD *)&String2.Length = Heap_0;
      Length = v18;
      if ( v16 != -1073741789 )
        goto LABEL_26;
    }
  }
  v6 = 0LL;
LABEL_47:
  v16 = -1073741801;
LABEL_26:
  if ( v16 < 0 )
  {
    NtClose(KeyHandle);
    v22 = 0;
    if ( v16 != -1073741772 )
      v22 = v16;
    v16 = v22;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v7 + 1) != 1
    || *((_DWORD *)v7 + 2) > 0xFFFEu
    || RtlCompareUnicodeStrings(
         String1,
         (unsigned __int64)v24 >> 1,
         v7 + 6,
         (unsigned __int64)(unsigned __int16)(v7[4] - 2) >> 1,
         1u) )
  {
    NtClose(KeyHandle);
    ++v14;
    goto LABEL_31;
  }
LABEL_36:
  if ( v6 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  if ( v16 >= 0 )
  {
    v23 = v31;
    NtClose(*v31);
    *v23 = KeyHandle;
  }
  if ( v16 != -2147483622 )
    return v16;
  return v3;
}
