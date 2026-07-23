/*
 * XREFs of HalpBlkAllocateAndShadowMemory @ 0x140CB8CAC
 * Callers:
 *     HalpBlkAllocateShadowCodePages @ 0x140CB8ED0 (HalpBlkAllocateShadowCodePages.c)
 *     HalpBlkAllocateShadowData @ 0x140CB8F1C (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpBlkAddVirtualMapping @ 0x140CB8B68 (HalpBlkAddVirtualMapping.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

char *__fastcall HalpBlkAllocateAndShadowMemory(char *Src, unsigned int a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v6; // rbp
  char *v8; // rdi
  __int64 v9; // rbx
  char *v10; // rax
  size_t v11; // r8

  v6 = a2;
  v8 = 0LL;
  v9 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, 0, a2, 0, 0LL);
  if ( v9 )
  {
    if ( a5 )
      *a5 = v9;
    v10 = (char *)HalpMap(v9, (unsigned int)v6, 1u, 0, 4u, 0LL);
    v8 = v10;
    if ( v10 )
    {
      v11 = v6 << 12;
      if ( Src )
      {
        memmove(v10, Src, v11);
      }
      else
      {
        memset_0(v10, 0, v11);
        Src = v8;
      }
      while ( (_DWORD)v6 )
      {
        if ( (int)HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, v9, (unsigned __int64)Src, 1, a4) < 0 )
          return 0LL;
        v9 += 4096LL;
        Src += 4096;
        LODWORD(v6) = v6 - 1;
      }
    }
  }
  return v8;
}
