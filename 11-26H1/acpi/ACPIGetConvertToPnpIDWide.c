/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x14003AC14
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003A378 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToPnpID @ 0x14003ABA8 (ACPIGetConvertToPnpID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x14003AE80 (ACPIAmliDoubleToNameWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, unsigned int *a6)
{
  int v8; // eax
  const char *v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // r14
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  const char *v18; // r9
  __int64 Pool2; // rax
  __int64 v20; // r8

  if ( (a4 & 0x4000000) != 0 || !_bittest64((const signed __int64 *)(a1 + 8), 0x2Fu) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v13 = 18;
      Pool2 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 18LL, 1399874369LL);
      v15 = (char *)Pool2;
      if ( Pool2 )
      {
        LOBYTE(v20) = 1;
        ACPIAmliDoubleToNameWide(Pool2, *(unsigned int *)(a3 + 16), v20);
        goto LABEL_21;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v8 = *(_DWORD *)(a3 + 24);
      v9 = *(const char **)(a3 + 32);
      if ( !v8 )
        return 3221225485LL;
      if ( *v9 == 42 )
      {
        ++v9;
        if ( v8 == 1 )
          return 3221225485LL;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
      v12 = v11 + 2;
      v13 = 2 * (v11 + 2);
      v14 = v13;
      v15 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v13,
                      1399874369LL);
      if ( v15 )
      {
        v18 = v9;
        goto LABEL_20;
      }
    }
    return 3221225626LL;
  }
  v16 = *(_QWORD *)(a1 + 608);
  v17 = -1LL;
  do
    ++v17;
  while ( *(_BYTE *)(v16 + v17) );
  v12 = v17 - 3;
  v13 = 2 * (v17 - 3);
  v14 = v13;
  v15 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
  if ( !v15 )
    return 3221225626LL;
  v18 = (const char *)(*(_QWORD *)(a1 + 608) + 5LL);
LABEL_20:
  RtlStringCchPrintfA(v15, v12, "*%s", v18);
  ACPIAnsiStringToWideHelper(v15, v14);
LABEL_21:
  *a5 = v15;
  if ( a6 )
    *a6 = v13;
  return 0LL;
}
