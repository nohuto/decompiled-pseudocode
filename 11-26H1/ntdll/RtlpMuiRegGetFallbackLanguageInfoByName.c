/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010A5FC (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x180141E20 (RtlpAutoCompleteLanguageFallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010A5FC (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByName(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        char a4,
        __int64 a5)
{
  __int64 v9; // rbx
  __int16 v10; // r9
  __int16 v11; // r10
  __int16 i; // dx
  __int16 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  DWORD Lcid; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int16 v20; // [rsp+70h] [rbp+8h] BYREF

  Lcid = 0;
  v20 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( (int)RtlpMuiRegGetOrAddString(a1, a3, 0, &v20) >= 0 )
  {
    v10 = v20;
    v11 = 0;
    for ( i = 0; i < 8; i += 2 )
    {
      v13 = (*(_WORD *)(a2 + 8) >> i) & 3;
      v14 = *(__int16 *)(a2 + 2LL * v11 + 12);
      if ( v13 == 2 )
      {
        v15 = 28 * v14;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_WORD *)(v15 + v16 + 6) == v20 )
        {
          *(_OWORD *)v9 = *(_OWORD *)(v15 + v16);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v15 + v16 + 16);
          *(_DWORD *)(v9 + 24) = *(_DWORD *)(v15 + v16 + 24);
          return 0LL;
        }
      }
      else if ( (_WORD)v14 != v20 && v13 != 3 )
      {
        result = 0LL;
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 24) = 0;
        *(_WORD *)(v9 + 6) = v10;
        return result;
      }
      ++v11;
    }
  }
  if ( a4
    && (RtlInitUnicodeString(&DestinationString, a3), RtlCultureNameToLCID(&DestinationString, &Lcid))
    && Lcid != 4096 )
  {
    return RtlpMuiRegGetFallbackLanguageInfoByLangId(a1, a2, Lcid, 0, v9);
  }
  else
  {
    return 3221225524LL;
  }
}
