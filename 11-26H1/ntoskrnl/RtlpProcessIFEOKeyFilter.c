/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x140AB62AC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140AB60E8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  int v3; // ebx
  ULONG Length; // edi
  void *v6; // rsi
  WCHAR *v8; // r14
  NTSTATUS result; // eax
  int v10; // ecx
  bool v11; // zf
  _BYTE *v12; // rax
  ULONG v13; // r13d
  NTSTATUS inited; // edi
  ULONG v15; // ecx
  NTSTATUS v16; // eax
  __int64 Pool2; // rax
  NTSTATUS v18; // eax
  HANDLE *v19; // rsi
  unsigned __int16 v20; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v22; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING String2; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v26; // [rsp+68h] [rbp-98h]
  HANDLE *v27; // [rsp+70h] [rbp-90h]
  PCWCH String1; // [rsp+78h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B4h] [rbp-4Ch]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]

  v27 = a1;
  v3 = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  Length = 544;
  DestinationString = 0LL;
  v6 = 0LL;
  v22 = 544;
  memset(&ObjectAttributes, 0, 44);
  v8 = (WCHAR *)KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *a1,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v3;
    return result;
  }
  if ( v31 != 4 || v32 != 4 || !v33 )
    return 0;
  v10 = 1600;
  v11 = KeGetCurrentThread()->PreviousMode == 1;
  String2 = *a3;
  if ( !v11 )
    v10 = 576;
  v26 = v10;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      v20 = String2.Length - 8;
      String1 = String2.Buffer + 4;
    }
    else
    {
      String1 = String2.Buffer;
      v20 = String2.Length;
    }
    v12 = KeyValueInformation;
    v13 = 0;
    *(_QWORD *)&String2.Length = KeyValueInformation;
LABEL_15:
    inited = ZwEnumerateKey(*v27, v13, KeyBasicInformation, v12, Length, &ResultLength);
    if ( inited < 0 )
      goto LABEL_29;
    DestinationString.Length = *(_WORD *)(*(_QWORD *)&String2.Length + 12LL);
    DestinationString.MaximumLength = *(_WORD *)(*(_QWORD *)&String2.Length + 12LL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)&String2.Length + 16LL);
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = *v27;
    ObjectAttributes.Attributes = v26;
    ObjectAttributes.ObjectName = &DestinationString;
    inited = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_29;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
    {
      ZwClose(KeyHandle);
      goto LABEL_30;
    }
    v15 = v22;
    while ( 1 )
    {
      v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v8, v15, &ResultLength);
      inited = v16;
      if ( v16 == -2147483643 || v16 == -1073741789 )
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        Pool2 = ExAllocatePool2(0x41uLL);
        v6 = (void *)Pool2;
        if ( !Pool2 )
        {
          inited = -1073741801;
LABEL_25:
          if ( inited >= 0 )
          {
            if ( *((_DWORD *)v8 + 1) != 1
              || *((_DWORD *)v8 + 2) > 0xFFFEu
              || RtlCompareUnicodeStrings(
                   String1,
                   (unsigned __int64)v20 >> 1,
                   v8 + 6,
                   (unsigned __int64)(unsigned __int16)(v8[4] - 2) >> 1,
                   1u) )
            {
              ZwClose(KeyHandle);
              ++v13;
LABEL_37:
              v12 = *(_BYTE **)&String2.Length;
              Length = v22;
              goto LABEL_15;
            }
          }
          else
          {
            ZwClose(KeyHandle);
            v18 = 0;
            if ( inited != -1073741772 )
              v18 = inited;
            inited = v18;
LABEL_29:
            ++v13;
            if ( inited >= 0 )
              goto LABEL_37;
          }
LABEL_30:
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( inited >= 0 )
          {
            v19 = v27;
            ZwClose(*v27);
            *v19 = KeyHandle;
          }
          if ( inited != -2147483622 )
            return inited;
          return v3;
        }
        v15 = ResultLength;
        v8 = (WCHAR *)Pool2;
        v22 = ResultLength;
        *(_QWORD *)&String2.Length = Pool2;
      }
      else
      {
        Pool2 = *(_QWORD *)&String2.Length;
        v15 = v22;
      }
      if ( inited != -2147483643 )
      {
        *(_QWORD *)&String2.Length = Pool2;
        v22 = v15;
        if ( inited != -1073741789 )
          goto LABEL_25;
      }
    }
  }
  return result;
}
