/*
 * XREFs of AslPathClean @ 0x14088F3AC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  wchar_t *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  wchar_t v11; // ax
  wchar_t v12; // ax
  wchar_t v13; // ax
  wchar_t v14; // ax
  wchar_t v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax
  unsigned __int64 v18; // rax
  wchar_t v19; // ax

  v3 = -1LL;
  v5 = 0;
  do
    ++v3;
  while ( Src[v3] );
  if ( a3 >= v3 + 1 )
  {
    v7 = wcschr(Src, 0x3Au);
    if ( v7 )
      goto LABEL_10;
    v8 = 4LL;
    if ( !wcsncmp(Src, L"\\??\\", 4uLL) )
      goto LABEL_12;
    if ( !wcsncmp(Src, L"\\\\", 2uLL) )
    {
      v8 = 2LL;
      goto LABEL_12;
    }
    v7 = wcschr(Src, 0x5Cu);
    if ( v7 )
LABEL_10:
      v8 = ((unsigned __int64)((char *)v7 - (char *)Src) >> 1) + 1;
    else
      v8 = 1LL;
LABEL_12:
    memmove(a2, Src, 2 * v8);
    v9 = v8;
    v10 = v8;
    if ( v8 >= v3 )
    {
LABEL_55:
      *((_WORD *)a2 + v9) = 0;
      return v5;
    }
    while ( 1 )
    {
      v11 = Src[v10];
      if ( v11 == 92 || v11 == 47 )
      {
        if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
          *((_WORD *)a2 + v9++) = 92;
        goto LABEL_54;
      }
      if ( v11 != 46 )
        break;
      if ( v10 + 1 == v3 )
        goto LABEL_55;
      v12 = Src[v10 + 1];
      if ( v12 == 92 || v12 == 47 )
      {
        ++v10;
        goto LABEL_54;
      }
      if ( v12 == 46 )
      {
        if ( v10 + 2 == v3 || (v13 = Src[v10 + 2], v13 == 92) || v13 == 47 )
        {
          while ( v9 >= v8 )
          {
            v16 = *((_WORD *)a2 + v9);
            *((_WORD *)a2 + v9) = 0;
            if ( v16 == 92 )
            {
              do
              {
                v17 = *((_WORD *)a2 + v9);
                *((_WORD *)a2 + v9) = 0;
                if ( v17 == 92 )
                  break;
                --v9;
              }
              while ( v9 >= v8 );
              break;
            }
            --v9;
          }
          v18 = v9 + 1;
          ++v10;
          if ( v9 >= v8 )
            v18 = v9;
          v9 = v18;
          goto LABEL_54;
        }
      }
      v14 = Src[v10 + 2];
      if ( v14 != 92 && v14 != 47 )
      {
        while ( v10 < v3 )
        {
          v19 = Src[v10];
          if ( v19 == 92 || v19 == 47 )
            goto LABEL_31;
          *((_WORD *)a2 + v9++) = v19;
          ++v10;
        }
LABEL_35:
        --v10;
      }
LABEL_54:
      if ( ++v10 >= v3 )
        goto LABEL_55;
    }
    while ( v10 < v3 )
    {
      v15 = Src[v10];
      if ( v15 == 92 || v15 == 47 )
      {
LABEL_31:
        if ( v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
          --v9;
        goto LABEL_35;
      }
      *((_WORD *)a2 + v9++) = v15;
      ++v10;
    }
    goto LABEL_35;
  }
  return (unsigned int)-1073741789;
}
