/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x1800BD750
 * Callers:
 *     LdrEnumResources @ 0x18013B970 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x18012D9F0 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int *a5,
        _BYTE *a6)
{
  bool v9; // cl
  int v10; // edx
  __int64 v11; // r11
  unsigned __int16 *v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx

  v9 = a1 && a2;
  v10 = *a5;
  v11 = (unsigned int)*a5;
  *a6 = 1;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v10 >= 0 )
      return (unsigned int)((_DWORD)a3 - v10);
    return 1LL;
  }
  if ( v10 >= 0 )
    return -1LL;
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  if ( v9 )
  {
    v16 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v11 + a4 <= v16 + a2 )
    {
      v13 = (unsigned __int16 *)(v11 + a4);
      v17 = v10 & 0x7FFFFFFF;
      v18 = v17 + 2 * *(unsigned __int16 *)(v11 + a4);
      if ( (unsigned int)v18 >= v17 && a4 + v18 <= v16 + a2 )
        goto LABEL_10;
    }
    *a6 = 0;
    return -1LL;
  }
  v13 = (unsigned __int16 *)(v11 + a4);
LABEL_10:
  v14 = wcsncmp(a3, v13 + 1, *v13);
  if ( !v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a3[v15] );
    if ( v15 != *v13 )
      return 1LL;
  }
  return v14;
}
