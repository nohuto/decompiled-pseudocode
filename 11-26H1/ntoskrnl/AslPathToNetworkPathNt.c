/*
 * XREFs of AslPathToNetworkPathNt @ 0x1408896D4
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x14053CA60 (wcscat_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     AslpDetermineDosPathNameType @ 0x14088A894 (AslpDetermineDosPathNameType.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  rsize_t v7; // r14
  wchar_t *v8; // rax
  wchar_t *v9; // rsi

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned int)AslpDetermineDosPathNameType(a2) == 1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v7 = v6 + 9;
    v8 = (wchar_t *)AslAlloc(v5, 2 * (v6 + 9));
    v9 = v8;
    if ( v8 )
    {
      wcscpy_s(v8, v7, L"\\??\\UNC\\");
      wcscat_s(v9, v7, (const wchar_t *)(a2 + 4));
      *a1 = v9;
    }
    else
    {
      v2 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslPathToNetworkPathNt", 348, (unsigned int)"Out of memory");
    }
  }
  else
  {
    v2 = -1073741811;
  }
  AslFree(v5, 0LL);
  return v2;
}
