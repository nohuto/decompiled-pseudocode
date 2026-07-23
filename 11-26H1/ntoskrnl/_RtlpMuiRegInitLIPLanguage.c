/*
 * XREFs of _RtlpMuiRegInitLIPLanguage @ 0x140B2FE70
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x140B2FCBC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _RtlMuiRegAddLIPParent @ 0x1408AFB18 (_RtlMuiRegAddLIPParent.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     LdrpQueryValueKey @ 0x140B3E948 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, void *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // esi
  unsigned int v8; // edi
  ULONG v9; // r12d
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-B4h] BYREF
  WCHAR SourceString[88]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+100h] [rbp+0h] BYREF
  int v17; // [rsp+104h] [rbp+4h]
  unsigned int v18; // [rsp+110h] [rbp+10h]
  WCHAR v19[246]; // [rsp+114h] [rbp+14h] BYREF

  LODWORD(v3) = 0;
  ResultLength = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  DestinationString = 0LL;
  memset_0(SourceString, 0, 0xAAuLL);
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, L"DefaultFallback");
  v13 = 170;
  if ( (int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v13) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = LdrpQueryValueKey(a2, &DestinationString, 0LL);
    v7 = v10;
    if ( (!v10 || v10 == -2147483643) && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, 0, SourceString) >= 0 )
    {
      v8 = 1;
      v3 = -1LL;
      do
        ++v3;
      while ( SourceString[v3] );
    }
  }
  while ( v7 != -2147483622 )
  {
    if ( v8 >= 4 )
      break;
    v7 = ZwEnumerateValueKey(a2, v9, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength);
    if ( v7 < 0 )
      break;
    if ( (v17 == 7 || v17 == 1) && (unsigned __int64)v18 + 24 <= 0x200 )
    {
      v19[(unsigned __int64)v18 >> 1] = 0;
      RtlInitUnicodeString(&DestinationString, v19);
      if ( (!(_DWORD)v3
         || RtlCompareUnicodeStrings(
              DestinationString.Buffer,
              (unsigned __int64)DestinationString.Length >> 1,
              SourceString,
              (unsigned int)v3,
              1u))
        && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, v8, DestinationString.Buffer) >= 0 )
      {
        ++v8;
      }
    }
    ++v9;
  }
  return 0LL;
}
