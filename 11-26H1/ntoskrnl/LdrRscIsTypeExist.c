/*
 * XREFs of LdrRscIsTypeExist @ 0x1403E0840
 * Callers:
 *     LdrIsResItemExist @ 0x1403DF838 (LdrIsResItemExist.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  const wchar_t *v5; // r8
  int v7; // ecx
  _DWORD *v8; // rdx
  int v10; // ecx
  _DWORD *v11; // rdx
  int v13; // r15d
  const wchar_t *v14; // rdi
  __int64 v15; // rcx
  int v16; // ecx
  char v17; // r15
  char v18; // al
  int v19; // r12d
  const wchar_t *v20; // rdi
  __int64 v21; // rcx
  int v22; // ecx

  v5 = (const wchar_t *)a2;
  if ( !a1 || !a4 )
    return 3221225485LL;
  if ( a2 >= 0x10000 )
  {
    v13 = a1[22] >> 1;
    v14 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v14 > 0x10000 )
    {
      while ( v13 > 0 )
      {
        if ( !*v14 )
          goto LABEL_25;
        if ( !wcsicmp(v5, v14) )
        {
          v5 = (const wchar_t *)a2;
          break;
        }
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15] );
        v16 = v15 + 1;
        v14 += v16;
        v13 -= v16;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( *v14 && v13 > 0 )
    {
      v17 = 1;
      v18 = 1;
    }
    else
    {
LABEL_25:
      v18 = 0;
      v17 = 1;
    }
    if ( !v18 )
      *a4 |= 0x40000u;
    v19 = a1[26] >> 1;
    v20 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v20 > 0x10000 )
    {
      while ( v19 > 0 )
      {
        if ( !*v20 )
          goto LABEL_37;
        if ( !wcsicmp(v5, v20) )
          break;
        v21 = -1LL;
        do
          ++v21;
        while ( v20[v21] );
        v22 = v21 + 1;
        v20 += v22;
        v19 -= v22;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v20 || v19 <= 0 )
LABEL_37:
      v17 = 0;
    if ( !v17 )
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
    while ( (_DWORD)v5 - *v8++ );
    if ( v7 < 0 )
      *a4 |= 0x40000u;
    v10 = a1[28] >> 2;
    v11 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      if ( --v10 < 0 )
        break;
    }
    while ( (_DWORD)v5 - *v11++ );
    if ( v10 < 0 )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
