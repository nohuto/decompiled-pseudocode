/*
 * XREFs of LdrRscIsTypeExist @ 0x1800173A0
 * Callers:
 *     LdrIsResItemExist @ 0x180017A70 (LdrIsResItemExist.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, const wchar_t *a2, __int64 a3, _DWORD *a4)
{
  int v7; // ecx
  _DWORD *v8; // rdx
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  const wchar_t *v15; // r12
  int v16; // r13d
  int v17; // r12d
  const wchar_t *v18; // r15
  __int64 v19; // rcx
  int v20; // ecx

  if ( !a1 || !a4 )
    return 3221225485LL;
  if ( (unsigned __int64)a2 >= 0x10000 )
  {
    v16 = a1[22] >> 1;
    v15 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v15 > 0x10000 )
    {
      while ( v16 > 0 )
      {
        if ( !*v15 )
          goto LABEL_20;
        if ( !wcsicmp(a2, v15) )
          break;
        v13 = -1LL;
        do
          ++v13;
        while ( v15[v13] );
        v14 = v13 + 1;
        v15 += v14;
        v16 -= v14;
      }
    }
    if ( !*v15 || v16 <= 0 )
LABEL_20:
      *a4 |= 0x40000u;
    v17 = a1[26] >> 1;
    v18 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v18 > 0x10000 )
    {
      while ( v17 > 0 )
      {
        if ( !*v18 )
          goto LABEL_27;
        if ( !wcsicmp(a2, v18) )
          break;
        v19 = -1LL;
        do
          ++v19;
        while ( v18[v19] );
        v20 = v19 + 1;
        v18 += v20;
        v17 -= v20;
      }
    }
    if ( !*v18 || v17 <= 0 )
LABEL_27:
      *a4 |= 0x20000u;
  }
  else
  {
    v7 = a1[24] >> 2;
    v8 = (unsigned int *)((char *)a1 + a1[23]);
    do
    {
      if ( --v7 < 0 )
        break;
    }
    while ( (_DWORD)a2 - *v8++ );
    if ( v7 < 0 )
      *a4 |= 0x40000u;
    v10 = a1[28] >> 2;
    v11 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      if ( --v10 < 0 )
        break;
    }
    while ( (_DWORD)a2 - *v11++ );
    if ( v10 < 0 )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
