/*
 * XREFs of AslPathClean @ 0x180676B34
 * Callers:
 *     PiiFilterExecute @ 0x180676A30 (PiiFilterExecute.c)
 * Callees:
 *     wcsncmp_0 @ 0x1802CE1F2 (wcsncmp_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v4; // edi
  wchar_t *v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  wchar_t v10; // ax
  unsigned __int64 v11; // rax
  wchar_t v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  wchar_t v16; // ax

  v2 = -1LL;
  v4 = 0;
  do
    ++v2;
  while ( Src[v2] );
  if ( v2 + 1 <= 0x104 )
  {
    v6 = wcschr(Src, 0x3Au);
    if ( v6 )
      goto LABEL_10;
    v7 = 4LL;
    if ( !wcsncmp_0(Src, L"\\??\\", 4uLL) )
      goto LABEL_12;
    if ( !wcsncmp_0(Src, L"\\\\", 2uLL) )
    {
      v7 = 2LL;
      goto LABEL_12;
    }
    v6 = wcschr(Src, 0x5Cu);
    if ( v6 )
LABEL_10:
      v7 = ((unsigned __int64)((char *)v6 - (char *)Src) >> 1) + 1;
    else
      v7 = 1LL;
LABEL_12:
    memmove_0(a2, Src, 2 * v7);
    v8 = v7;
    v9 = v7;
    if ( v7 >= v2 )
    {
LABEL_55:
      *((_WORD *)a2 + v8) = 0;
      return v4;
    }
    while ( 1 )
    {
      if ( Src[v9] == 92 || Src[v9] == 47 )
      {
        if ( !v8 || *((_WORD *)a2 + v8 - 1) != 92 )
          *((_WORD *)a2 + v8++) = 92;
        goto LABEL_54;
      }
      if ( Src[v9] != 46 )
        break;
      if ( v9 + 1 == v2 )
        goto LABEL_55;
      v10 = Src[v9 + 1];
      if ( v10 == 92 || v10 == 47 )
      {
        ++v9;
        goto LABEL_54;
      }
      if ( v10 == 46 )
      {
        v11 = v9 + 2;
        if ( v9 + 2 == v2 || Src[v11] == 92 || Src[v11] == 47 )
        {
          while ( v8 >= v7 )
          {
            v13 = *((_WORD *)a2 + v8);
            *((_WORD *)a2 + v8) = 0;
            if ( v13 == 92 )
            {
              do
              {
                v14 = *((_WORD *)a2 + v8);
                *((_WORD *)a2 + v8) = 0;
                if ( v14 == 92 )
                  break;
                --v8;
              }
              while ( v8 >= v7 );
              break;
            }
            --v8;
          }
          v15 = v8 + 1;
          ++v9;
          if ( v8 >= v7 )
            v15 = v8;
          v8 = v15;
          goto LABEL_54;
        }
      }
      if ( Src[v9 + 2] != 92 && Src[v9 + 2] != 47 )
      {
        while ( v9 < v2 )
        {
          v16 = Src[v9];
          if ( v16 == 92 || v16 == 47 )
            goto LABEL_31;
          *((_WORD *)a2 + v8++) = v16;
          ++v9;
        }
LABEL_35:
        --v9;
      }
LABEL_54:
      if ( ++v9 >= v2 )
        goto LABEL_55;
    }
    while ( v9 < v2 )
    {
      v12 = Src[v9];
      if ( v12 == 92 || v12 == 47 )
      {
LABEL_31:
        if ( v8 >= 2 && *((_WORD *)a2 + v8 - 1) == 46 && *((_WORD *)a2 + v8 - 2) != 46 )
          --v8;
        goto LABEL_35;
      }
      *((_WORD *)a2 + v8++) = v12;
      ++v9;
    }
    goto LABEL_35;
  }
  return (unsigned int)-1073741789;
}
