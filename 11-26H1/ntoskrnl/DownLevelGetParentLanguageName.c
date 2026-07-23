/*
 * XREFs of DownLevelGetParentLanguageName @ 0x1406DCEE0
 * Callers:
 *     LdrpGetParentLangId @ 0x1404ED6B0 (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404FEF80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  char *v4; // r8
  __int64 v5; // rax
  unsigned int v6; // r11d

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_14000DFE0, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = (char *)(&off_140002450)[2 * dword_14000245C[4 * word_14003AF20[(v3 - (_BYTE *)&off_14000DFE0) >> 3]]];
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&v4[2 * v5] );
  if ( (int)StringCchCopyNW(a2, 85LL, v4, v5 + 1) >= 0 )
    return v6;
  else
    return 0LL;
}
