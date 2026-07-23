/*
 * XREFs of AslPathCleanUstr @ 0x14088F614
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCleanUstr(unsigned __int16 *a1)
{
  int v2; // r12d
  const wchar_t **v3; // rdi
  unsigned int v4; // esi
  const wchar_t *v5; // rcx
  const wchar_t **v6; // r14
  int v7; // ebx
  const wchar_t **v8; // rax
  unsigned __int16 v9; // r8
  unsigned __int64 v10; // rcx
  wchar_t v11; // dx
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // bx
  __int64 v14; // rcx
  __int16 v15; // dx
  __int16 v16; // dx
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  unsigned __int16 v23; // ax
  __int64 v24; // rax

  v2 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t **)(a1 + 4), v4 = 0, v5 = (const wchar_t *)*((_QWORD *)a1 + 1), !*v5) )
  {
    v4 = -1073741582;
    AslLogCallPrintf(1, (unsigned int)"AslPathCleanUstr", 730, (unsigned int)"AslpPathGetFormatInfo failed [%x]");
    return v4;
  }
  v6 = v3;
  if ( (unsigned __int16)v2 >= 8u )
  {
    if ( !wcsnicmp(v5, L"\\??\\UNC\\", 8uLL) )
    {
      v7 = 5;
      goto LABEL_17;
    }
    v6 = (const wchar_t **)(a1 + 4);
  }
  v7 = 4;
  v8 = v6;
  if ( (unsigned __int16)v2 >= 4u )
  {
    if ( !wcsncmp(*v3, L"\\??\\", 4uLL) )
    {
      v7 = 3;
LABEL_10:
      v3 = v6;
      goto LABEL_17;
    }
    if ( !wcsncmp(*v3, L"\\\\?\\", 4uLL) || !wcsncmp(*v6, L"\\\\.\\", 4uLL) )
      goto LABEL_10;
    v8 = (const wchar_t **)(a1 + 4);
  }
  v3 = v8;
  if ( (unsigned __int16)v2 <= 2u || wcsncmp(*v6, L"\\\\", 2uLL) )
    v7 = 1;
LABEL_17:
  v9 = 0;
  do
  {
    v10 = 2LL * v9;
    if ( v10 >= *a1 )
      break;
    v11 = (*v3)[v10 / 2];
    if ( v11 == 92 || v11 == 47 )
      --v7;
    ++v9;
  }
  while ( v7 > 0 );
  v12 = v9;
  v13 = v9;
  while ( v12 < (unsigned __int16)v2 )
  {
    if ( v12 < v9 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslPathCleanUstr",
        742,
        (unsigned int)"AslPathCleanUstr failed with source pointer behind destination pointer.");
      return (unsigned int)-1073741595;
    }
    v14 = *((_QWORD *)a1 + 1);
    v15 = *(_WORD *)(v14 + 2LL * v12);
    if ( v15 == 92 || v15 == 47 )
    {
      if ( !v9 || *(_WORD *)(v14 + 2LL * v9 - 2) != 92 )
      {
        v24 = v9++;
        *(_WORD *)(v14 + 2 * v24) = 92;
      }
    }
    else if ( v15 == 46 )
    {
      if ( v12 + 1 == v2 )
        break;
      v17 = *(_WORD *)(v14 + 2LL * v12 + 2);
      if ( v17 == 92 || v17 == 47 )
      {
        ++v12;
      }
      else if ( v17 == 46 )
      {
        if ( v12 + 2 == v2 || (v18 = *(_WORD *)(v14 + 2LL * v12 + 4), v18 == 92) || v18 == 47 )
        {
          while ( v9 >= v13 )
          {
            v19 = *((_QWORD *)a1 + 1);
            v20 = *(_WORD *)(v19 + 2LL * v9);
            *(_WORD *)(v19 + 2LL * v9) = 0;
            if ( v20 == 92 )
            {
              do
              {
                v21 = *((_QWORD *)a1 + 1);
                v22 = *(_WORD *)(v21 + 2LL * v9);
                *(_WORD *)(v21 + 2LL * v9) = 0;
                if ( v22 == 92 )
                  break;
                --v9;
              }
              while ( v9 >= v13 );
              break;
            }
            --v9;
          }
          v23 = v9 + 1;
          ++v12;
          if ( v9 >= v13 )
            v23 = v9;
          v9 = v23;
        }
      }
    }
    else
    {
      do
      {
        v16 = *(_WORD *)(v14 + 2LL * v12);
        if ( v16 == 92 || v16 == 47 )
          break;
        if ( v12 != v9 )
        {
          *(_WORD *)(v14 + 2LL * v9) = v16;
          v14 = *((_QWORD *)a1 + 1);
        }
        ++v9;
        ++v12;
      }
      while ( v12 < (unsigned __int16)v2 );
      --v12;
    }
    ++v12;
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9) = 0;
  *a1 = 2 * v9;
  return v4;
}
