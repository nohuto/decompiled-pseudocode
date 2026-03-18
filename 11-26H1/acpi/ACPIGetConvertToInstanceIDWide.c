/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x14003A130
 * Callers:
 *     ACPIGetConvertToInstanceID @ 0x14003A0C4 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfW @ 0x14003E918 (RtlStringCchPrintfW.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // r14
  char *v13; // rbx
  const char *v14; // r9
  size_t v15; // rdx
  __int64 v17; // rax
  unsigned int v18; // esi
  wchar_t *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 || !_bittest64((const signed __int64 *)(a1 + 8), 0x30u) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      LODWORD(v10) = 9;
      Pool2 = (wchar_t *)ExAllocatePool2(
                           (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                           18LL,
                           1399874369LL);
      v13 = (char *)Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfW(Pool2, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v17) );
      v10 = (unsigned int)(v17 + 1);
      v18 = v17 + 1;
      v12 = 2 * v10;
      v13 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v10,
                      1399874369LL);
      if ( v13 )
      {
        v14 = *(const char **)(a3 + 32);
        v15 = v18;
        goto LABEL_7;
      }
    }
    return 3221225626LL;
  }
  v8 = *(_QWORD *)(a1 + 616);
  v9 = -1LL;
  do
    ++v9;
  while ( *(_BYTE *)(v8 + v9) );
  v10 = (unsigned int)(v9 + 1);
  v11 = v9 + 1;
  v12 = 2 * v10;
  v13 = (char *)ExAllocatePool2(
                  (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                  2 * v10,
                  1399874369LL);
  if ( !v13 )
    return 3221225626LL;
  v14 = *(const char **)(a1 + 616);
  v15 = v11;
LABEL_7:
  RtlStringCchPrintfA(v13, v15, "%s", v14);
  ACPIAnsiStringToWideHelper(v13, v12);
LABEL_20:
  *a5 = v13;
  if ( a6 )
    *a6 = 2 * v10;
  return 0LL;
}
