/*
 * XREFs of LdrpGetParentLangId @ 0x1404ED6B0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x140A9F048 (LdrResFallbackLangList.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404FEF80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 *     DownLevelGetParentLanguageName @ 0x1406DCEE0 (DownLevelGetParentLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1406DCFA4 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int16 a1, _WORD *a2)
{
  __int16 v2; // bx
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // r8
  __int64 v7; // rax
  int v8; // r11d
  _WORD Key[8]; // [rsp+30h] [rbp-188h] BYREF
  unsigned __int16 v10[88]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v11[176]; // [rsp+F0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  Key[0] = a1;
  v5 = (const unsigned __int16 **)bsearch(
                                    Key,
                                    &off_140002450,
                                    0x1B4uLL,
                                    0x10uLL,
                                    (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v5 )
    return 3221225485LL;
  v6 = *v5;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  if ( (int)StringCchCopyNW(v10, 0x55uLL, v6, v7 + 1) < 0 || !v8 )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v10, v11) >= 2 )
    v2 = DownLevelLanguageNameToLangID(v11);
  *a2 = v2;
  return 0LL;
}
