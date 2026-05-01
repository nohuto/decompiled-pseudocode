/*
 * XREFs of AslPathCleanUstr @ 0x18009ECA8
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
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
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // bx
  __int64 v13; // rcx
  __int16 v14; // dx
  __int16 v15; // ax
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // ax
  unsigned __int16 v20; // ax
  __int64 v21; // rax

  v2 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t **)(a1 + 4), v4 = 0, v5 = (const wchar_t *)*((_QWORD *)a1 + 1), !*v5) )
  {
    v4 = -1073741582;
    AslLogCallPrintf(1LL, "AslPathCleanUstr", 730LL, "AslpPathGetFormatInfo failed [%x]", -1073741582);
    return v4;
  }
  v6 = v3;
  if ( (unsigned __int16)v2 >= 8u )
  {
    if ( !_wcsnicmp(v5, L"\\??\\UNC\\", 8uLL) )
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
    if ( (*v3)[v10 / 2] == 92 || (*v3)[v10 / 2] == 47 )
      --v7;
    ++v9;
  }
  while ( v7 > 0 );
  v11 = v9;
  v12 = v9;
  while ( v11 < (unsigned __int16)v2 )
  {
    if ( v11 < v9 )
    {
      AslLogCallPrintf(
        1LL,
        "AslPathCleanUstr",
        742LL,
        "AslPathCleanUstr failed with source pointer behind destination pointer.");
      return (unsigned int)-1073741595;
    }
    v13 = *((_QWORD *)a1 + 1);
    if ( *(_WORD *)(v13 + 2LL * v11) == 92 || *(_WORD *)(v13 + 2LL * v11) == 47 )
    {
      if ( !v9 || *(_WORD *)(v13 + 2LL * v9 - 2) != 92 )
      {
        v21 = v9++;
        *(_WORD *)(v13 + 2 * v21) = 92;
      }
    }
    else if ( *(_WORD *)(v13 + 2LL * v11) == 46 )
    {
      if ( v11 + 1 == v2 )
        break;
      v15 = *(_WORD *)(v13 + 2LL * v11 + 2);
      if ( v15 == 92 || v15 == 47 )
      {
        ++v11;
      }
      else if ( v15 == 46
             && (v11 + 2 == v2 || *(_WORD *)(v13 + 2LL * v11 + 4) == 92 || *(_WORD *)(v13 + 2LL * v11 + 4) == 47) )
      {
        while ( v9 >= v12 )
        {
          v16 = *((_QWORD *)a1 + 1);
          v17 = *(_WORD *)(v16 + 2LL * v9);
          *(_WORD *)(v16 + 2LL * v9) = 0;
          if ( v17 == 92 )
          {
            do
            {
              v18 = *((_QWORD *)a1 + 1);
              v19 = *(_WORD *)(v18 + 2LL * v9);
              *(_WORD *)(v18 + 2LL * v9) = 0;
              if ( v19 == 92 )
                break;
              --v9;
            }
            while ( v9 >= v12 );
            break;
          }
          --v9;
        }
        v20 = v9 + 1;
        ++v11;
        if ( v9 >= v12 )
          v20 = v9;
        v9 = v20;
      }
    }
    else
    {
      do
      {
        v14 = *(_WORD *)(v13 + 2LL * v11);
        if ( v14 == 92 || v14 == 47 )
          break;
        if ( v11 != v9 )
        {
          *(_WORD *)(v13 + 2LL * v9) = v14;
          v13 = *((_QWORD *)a1 + 1);
        }
        ++v9;
        ++v11;
      }
      while ( v11 < (unsigned __int16)v2 );
      --v11;
    }
    ++v11;
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9) = 0;
  *a1 = 2 * v9;
  return v4;
}
