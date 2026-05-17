/*
 * XREFs of _RtlpMuiRegInitLIPLanguage @ 0x18014E0C8
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D2C4 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     _RtlMuiRegAddLIPParent @ 0x18011346C (_RtlMuiRegAddLIPParent.c)
 *     ZwEnumerateValueKey @ 0x18015F1A0 (ZwEnumerateValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // r12d
  int v10; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  WCHAR SourceString[88]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[4]; // [rsp+100h] [rbp+0h] BYREF
  int v18; // [rsp+104h] [rbp+4h]
  unsigned int v19; // [rsp+110h] [rbp+10h]
  WCHAR v20[246]; // [rsp+114h] [rbp+14h] BYREF

  LODWORD(v3) = 0;
  v15 = 0;
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
  if ( (int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v12, SourceString, &v14) >= 0 && v12 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v12 = 7;
    v10 = LdrpQueryValueKey(a2, (__int64)&DestinationString, &v12, 0LL, 0LL);
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
    v7 = ZwEnumerateValueKey(a2, v9, 1LL, v17, 512, &v15);
    if ( v7 < 0 )
      break;
    if ( (v18 == 7 || v18 == 1) && (unsigned __int64)v19 + 24 <= 0x200 )
    {
      v20[(unsigned __int64)v19 >> 1] = 0;
      RtlInitUnicodeString(&DestinationString, v20);
      if ( (!(_DWORD)v3
         || (unsigned int)RtlCompareUnicodeStrings(
                            DestinationString.Buffer,
                            (unsigned __int64)DestinationString.Length >> 1,
                            SourceString,
                            (unsigned int)v3,
                            1))
        && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, v8, DestinationString.Buffer) >= 0 )
      {
        ++v8;
      }
    }
    ++v9;
  }
  return 0LL;
}
