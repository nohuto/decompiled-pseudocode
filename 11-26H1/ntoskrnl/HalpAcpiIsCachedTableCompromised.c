/*
 * XREFs of HalpAcpiIsCachedTableCompromised @ 0x140344D90
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x140345224 (HalpAcpiGetTableFromBios.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpFlushTLB @ 0x140524CC4 (HalpFlushTLB.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall HalpAcpiIsCachedTableCompromised(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  const char *v5; // r10
  int v7; // eax
  bool v8; // di
  unsigned int *TableFromBios; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  void *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h] BYREF

  v19 = 0LL;
  v5 = "SLIC";
  v18 = 0;
  v7 = 0;
  while ( a2 != *(_DWORD *)v5 )
  {
    ++v7;
    v5 += 4;
    if ( v7 )
    {
      if ( v7 == 1 )
        return 0;
      break;
    }
  }
  TableFromBios = (unsigned int *)HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&v18, (__int64)&v19);
  v11 = (unsigned __int64)TableFromBios;
  if ( !TableFromBios )
    return 1;
  v8 = memcmp(TableFromBios, Buf2, TableFromBios[1]) != 0;
  v13 = v18;
  if ( a1 )
  {
    v14 = (unsigned int)((v18 + (v11 & 0xFFF) + 4095) >> 12);
    v15 = v11 + ((unsigned __int64)(unsigned int)v14 << 12) - 1;
    if ( v11 >= HalpOriginalHeapStart && v15 >= v11 && v15 <= HalpOriginalHeapEnd )
    {
      v16 = v11 & 0xFFFFFFFFFFFFF000uLL;
      v17 = (void *)(8 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
      if ( (_DWORD)v14 )
        memset_0(v17, 0, 8 * v14);
      HalpFlushTLB(v17, v13);
      if ( HalpHeapStart > v16 )
        HalpHeapStart = v16;
    }
  }
  else
  {
    LOBYTE(v12) = 1;
    MiUnmapContiguousMemory(v11, v18, v12);
  }
  return v8;
}
