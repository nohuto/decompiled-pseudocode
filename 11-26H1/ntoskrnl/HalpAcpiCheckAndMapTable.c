/*
 * XREFs of HalpAcpiCheckAndMapTable @ 0x1403453F0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableFromBios @ 0x140345224 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057BAAC (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14057BCBC (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpFlushTLB @ 0x140524CC4 (HalpFlushTLB.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall HalpAcpiCheckAndMapTable(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *Str1,
        char *a6,
        char a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // r8
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  void *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  char v26; // dl
  char v27; // al
  char v28; // al
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  void *v32; // rcx

  v8 = 0LL;
  if ( !a2 )
    return v8;
  LODWORD(v13) = 36;
  v14 = a1 ? HalpMap(a2, ((unsigned __int64)(a2 & 0xFFF) + 4131) >> 12, 1, 0, 4, 0LL) : MmMapIoSpaceEx(a2, 36LL, 516LL);
  v17 = v14;
  if ( !v14 )
    return v8;
  if ( *(_DWORD *)(v14 + 4) < a3
    || a4 && *(_DWORD *)v14 != a4
    || Str1 && strncmp(Str1, (const char *)(v14 + 10), 6uLL)
    || a6 && strncmp(a6, (const char *)(v17 + 16), 8uLL) )
  {
    goto LABEL_8;
  }
  v13 = *(unsigned int *)(v17 + 4);
  if ( a1 )
  {
    v29 = ((v17 & 0xFFF) + 4131) >> 12;
    v30 = v17 + (v29 << 12) - 1;
    if ( v17 >= HalpOriginalHeapStart && v30 >= v17 && v30 <= HalpOriginalHeapEnd )
    {
      v31 = v17 & 0xFFFFFFFFFFFFF000uLL;
      v32 = (void *)(8 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
      if ( (_DWORD)v29 )
        memset_0(v32, 0, 8 * v29);
      HalpFlushTLB(v32, v15);
      if ( HalpHeapStart > v31 )
        HalpHeapStart = v31;
    }
    v24 = HalpMap(a2, (v13 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12, 1, 0, 4, 0LL);
  }
  else
  {
    LOBYTE(v16) = 1;
    MiUnmapContiguousMemory(v17, 36LL, v16);
    v24 = MmMapIoSpaceEx(a2, (unsigned int)v13, 516LL);
  }
  v17 = v24;
  if ( v24 )
  {
    if ( !a7 )
      goto LABEL_25;
    v25 = *(_DWORD *)(v24 + 4);
    v26 = 0;
    v16 = (char *)v24;
    if ( !v25 )
      goto LABEL_25;
    do
    {
      v27 = *v16++;
      v28 = v26 + v27;
      v26 = v28;
      --v25;
    }
    while ( v25 );
    if ( !v28 )
    {
LABEL_25:
      v8 = v17;
      *a8 = v13;
      return v8;
    }
LABEL_8:
    v18 = (unsigned int)v13;
    if ( a1 )
    {
      v20 = (unsigned int)(((unsigned int)v13 + (v17 & 0xFFF) + 4095) >> 12);
      v21 = v17 + ((unsigned __int64)(unsigned int)v20 << 12) - 1;
      if ( v17 >= HalpOriginalHeapStart && v21 >= v17 && v21 <= HalpOriginalHeapEnd )
      {
        v22 = v17 & 0xFFFFFFFFFFFFF000uLL;
        v23 = (void *)(8 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
        if ( (_DWORD)v20 )
          memset_0(v23, 0, 8 * v20);
        HalpFlushTLB(v23, v18);
        if ( HalpHeapStart > v22 )
          HalpHeapStart = v22;
      }
    }
    else
    {
      LOBYTE(v16) = 1;
      MiUnmapContiguousMemory(v17, (unsigned int)v13, v16);
    }
  }
  return v8;
}
