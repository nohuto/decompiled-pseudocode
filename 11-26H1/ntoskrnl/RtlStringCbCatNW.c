/*
 * XREFs of RtlStringCbCatNW @ 0x1407199AC
 * Callers:
 *     AslPathWildcardFindNext @ 0x1408902E4 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // r10
  NTSTRSAFE_PWSTR v6; // rax
  __int64 v7; // r8
  NTSTATUS result; // eax
  size_t v9; // r9
  wchar_t *v10; // rcx
  __int64 v11; // rdx
  char *v12; // r11
  wchar_t v13; // ax
  wchar_t *v14; // rax

  v5 = 260LL;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = (260 - v5) & -(__int64)(v5 != 0);
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
  {
    v9 = cbToAppend >> 1;
    if ( v9 <= 0x7FFFFFFE )
    {
      v10 = &pszDest[v7];
      v11 = 260 - v7;
      if ( 260 != v7 )
      {
        v12 = (char *)((char *)pszSrc - (char *)v10);
        do
        {
          if ( !v9 )
            break;
          v13 = *(wchar_t *)((char *)v10 + (_QWORD)v12);
          if ( !v13 )
            break;
          *v10 = v13;
          --v9;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      v14 = v10 - 1;
      if ( v11 )
        v14 = v10;
      *v14 = 0;
      return v11 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
