/*
 * XREFs of _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408AA550
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x140B2E0D0 (RtlpLangNameInMultiSzString.c)
 *     RtlLCIDToCultureName @ 0x140B5CEE0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpMuiRegValidateAndGetInstallFallbackBase(__int64 a1, _DWORD *a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1073741823;
  v7 = 0LL;
  if ( !a1 || !a4 || !a2 )
    return 3221225485LL;
  if ( a2[1] == 7 )
  {
    if ( a2[3] && (v5 = (wchar_t *)((char *)a2 + (unsigned int)a2[2])) != 0LL && *v5 )
    {
      if ( !a3 )
        return 0;
      *((_QWORD *)&v7 + 1) = a4;
      WORD1(v7) = 170;
      if ( (unsigned __int8)RtlLCIDToCultureName(a3, &v7) )
      {
        if ( (unsigned __int8)RtlpLangNameInMultiSzString(v5, *((wchar_t **)&v7 + 1)) )
          return 0;
      }
    }
    else
    {
      return a3 != 0 ? 0xC0000001 : 0;
    }
  }
  return v4;
}
