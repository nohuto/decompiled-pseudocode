/*
 * XREFs of RtlStringCchCatNW @ 0x14063F6D8
 * Callers:
 *     SepRmFetchGlobalSacl @ 0x14081C804 (SepRmFetchGlobalSacl.c)
 *     SdbpSafeAllocAndConcatW @ 0x140887F80 (SdbpSafeAllocAndConcatW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToAppend)
{
  size_t v6; // r10
  NTSTRSAFE_PWSTR v7; // rax
  size_t v8; // rdx
  NTSTATUS result; // eax
  wchar_t *v10; // r8
  size_t v11; // rcx
  size_t v12; // rdx
  char *v13; // rdi
  wchar_t v14; // ax
  wchar_t *v15; // rax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v6 = cchDest;
  v7 = pszDest;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = (cchDest - v6) & -(__int64)(v6 != 0);
  result = v6 == 0 ? 0xC000000D : 0;
  if ( !v6 )
    return result;
  if ( cchToAppend > 0x7FFFFFFE )
    return -1073741811;
  v10 = &pszDest[v8];
  v11 = cchDest - v8;
  if ( cchDest != v8 )
  {
    v12 = cchToAppend;
    v13 = (char *)((char *)pszSrc - (char *)v10);
    do
    {
      if ( !v12 )
        break;
      v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v15 = v10 - 1;
  if ( v11 )
    v15 = v10;
  *v15 = 0;
  return v11 == 0 ? 0x80000005 : 0;
}
