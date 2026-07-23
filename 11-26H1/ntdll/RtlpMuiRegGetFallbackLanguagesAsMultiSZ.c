/*
 * XREFs of RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180100900
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180055900 (RtlGetUILanguageInfo.c)
 * Callees:
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x18014D4B8 (RtlpMuiRegGetFallbackLanguageInfoByIndex.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
        char a1,
        __int64 a2,
        _WORD *a3,
        unsigned int *a4,
        wchar_t *a5)
{
  int v7; // r12d
  unsigned int v9; // ebp
  unsigned int v11; // edi
  wchar_t *v12; // rbx
  unsigned int v13; // ecx
  int i; // esi
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+50h] [rbp-38h]
  char v20; // [rsp+A0h] [rbp+18h] BYREF

  v16 = 0;
  v7 = (int)a3;
  v18 = 0LL;
  v9 = 0;
  v19 = 0;
  v17 = 0LL;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  v11 = *a4;
  v12 = a5;
  if ( (*a3 & 0x406) == 0 )
    goto LABEL_7;
  for ( i = 0; i < 4; ++i )
  {
    if ( (int)RtlpMuiRegGetFallbackLanguageInfoByIndex(
                a2,
                v7,
                (unsigned __int16)i,
                (_DWORD)a4,
                (__int64)&v20,
                (__int64)&v17) >= 0 )
    {
      v15 = (a1 & 4) != 0
          ? RtlpMuiRegTryToAppendLangId(a2, (__int64)&v17, &v16, v12, v11)
          : RtlpMuiRegTryToAppendLanguageName(a2, (__int64)&v17, &v16, v12, v11);
      v9 = v15;
      if ( v15 < 0 )
        return v9;
    }
  }
  v13 = v16;
  if ( !v16 )
  {
LABEL_7:
    if ( v12 && v11 )
      *v12 = 0;
    v13 = 1;
  }
  if ( v12 )
  {
    if ( v13 < v11 )
    {
      v12[v13] = 0;
    }
    else
    {
      if ( v11 )
        *v12 = 0;
      if ( v11 > 1 )
        v12[1] = 0;
    }
  }
  *a4 = v13 + 1;
  return v9;
}
