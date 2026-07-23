/*
 * XREFs of _RtlpMuiRegInitLIPLanguage @ 0x18014DF78
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D174 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     _RtlMuiRegAddLIPParent @ 0x180112F1C (_RtlMuiRegAddLIPParent.c)
 *     ZwEnumerateValueKey @ 0x18015F0A0 (ZwEnumerateValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, void *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // esi
  unsigned int v8; // edi
  ULONG v9; // r12d
  NTSTATUS v10; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v14; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-B4h] BYREF
  WCHAR SourceString[88]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+100h] [rbp+0h] BYREF
  int v18; // [rsp+104h] [rbp+4h]
  unsigned int v19; // [rsp+110h] [rbp+10h]
  WCHAR v20[246]; // [rsp+114h] [rbp+14h] BYREF

  LODWORD(v3) = 0;
  ResultLength = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(SourceString, 0, 0xAAuLL);
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, L"DefaultFallback");
  v12 = 1;
  v14 = 170;
  if ( (int)LdrpQueryValueKey(a2, &DestinationString, &v12, SourceString, &v14) >= 0 && v12 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v12 = 7;
    v10 = LdrpQueryValueKey(a2, &DestinationString, &v12, 0LL, 0LL);
    v7 = v10;
    if ( (!v10 || v10 == -2147483643)
      && (v12 == 7 || v12 == 1)
      && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, 0, SourceString) >= 0 )
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
    if ( (v18 == 7 || v18 == 1) && (unsigned __int64)v19 + 24 <= 0x200 )
    {
      v20[(unsigned __int64)v19 >> 1] = 0;
      RtlInitUnicodeString(&DestinationString, v20);
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
