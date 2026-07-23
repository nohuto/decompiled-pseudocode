/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x1404A5340
 * Callers:
 *     LdrEnumResources @ 0x140807400 (LdrEnumResources.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v8; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx

  *a6 = 1;
  v8 = *a5;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v8 >= 0 )
      return (unsigned int)((_DWORD)a3 - v8);
    return 1LL;
  }
  if ( (int)v8 >= 0 )
    return -1LL;
  LODWORD(v8) = v8 & 0x7FFFFFFF;
  v10 = wcsncmp(a3, (const wchar_t *)(v8 + a4 + 2), *(unsigned __int16 *)(v8 + a4));
  if ( !v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a3[v11] );
    if ( v11 != *(unsigned __int16 *)(v8 + a4) )
      return 1LL;
  }
  return v10;
}
