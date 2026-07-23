/*
 * XREFs of AdtpBuildUserAccountControlString @ 0x140896A40
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildUserAccountControlString(
        ULONG Value,
        ULONG a2,
        UNICODE_STRING *a3,
        _BYTE *a4,
        PUNICODE_STRING Destination,
        _BYTE *a6,
        PUNICODE_STRING DestinationString,
        _BYTE *a8)
{
  unsigned int v8; // ebx
  int v12; // edi
  __int64 Pool2; // rax
  wchar_t *v14; // rax
  ULONG v15; // r12d
  ULONG v16; // r15d
  int v17; // edx
  int v18; // eax
  wchar_t *v19; // rax
  unsigned int v20; // esi
  int v21; // edi
  UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  ULONG Valuea; // [rsp+30h] [rbp-40h]
  _BYTE *v25; // [rsp+38h] [rbp-38h]
  _BYTE *v26; // [rsp+40h] [rbp-30h]
  char v27; // [rsp+48h] [rbp-28h] BYREF

  v8 = 0;
  *a4 = 0;
  v12 = 0;
  v26 = a8;
  *a6 = 0;
  *a8 = 0;
  *(_DWORD *)&a3->Length = 1441792;
  Valuea = a2;
  v25 = a6;
  String.Buffer = (wchar_t *)&v27;
  *(_QWORD *)&String.Length = 1310720LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  a3->Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *a4 = 1;
  *(_DWORD *)&Destination->Length = 1441792;
  v14 = (wchar_t *)ExAllocatePool2(0x100uLL);
  Destination->Buffer = v14;
  if ( !v14 )
    return (unsigned int)-1073741801;
  *v25 = 1;
  RtlAppendUnicodeToString(a3, L"0x");
  RtlIntegerToUnicodeString(Value, 0x10u, &String);
  RtlAppendUnicodeStringToString(a3, &String);
  RtlAppendUnicodeToString(Destination, L"0x");
  v15 = Valuea;
  RtlIntegerToUnicodeString(Valuea, 0x10u, &String);
  RtlAppendUnicodeStringToString(Destination, &String);
  v16 = v15 ^ Value;
  if ( !v16 )
  {
    RtlInitUnicodeString(DestinationString, L"-");
    return v8;
  }
  v17 = 1;
  do
  {
    v18 = v12 + 1;
    if ( (v17 & v16) == 0 )
      v18 = v12;
    v12 = v18;
    v17 *= 2;
  }
  while ( v17 );
  DestinationString->Length = 0;
  DestinationString->MaximumLength = 32 * v18 + 2;
  v19 = (wchar_t *)ExAllocatePool2(0x100uLL);
  DestinationString->Buffer = v19;
  if ( v19 )
  {
    v20 = 0;
    v21 = 1;
    *v26 = 1;
    do
    {
      if ( !v21 )
        break;
      if ( (v21 & v16) != 0 && RtlIntegerToUnicodeString(v20 + ((v15 & v21) != 0 ? 2080 : 2048), 0xAu, &String) >= 0 )
      {
        RtlAppendUnicodeToString(DestinationString, L"\r\n\t\t%%");
        RtlAppendUnicodeStringToString(DestinationString, &String);
      }
      ++v20;
      v21 *= 2;
    }
    while ( v20 < 0x20 );
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
