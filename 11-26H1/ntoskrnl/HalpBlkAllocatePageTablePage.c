/*
 * XREFs of HalpBlkAllocatePageTablePage @ 0x140CB8DA8
 * Callers:
 *     HalpBlkAddVirtualMapping @ 0x140CB8B68 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkInitializePageTables @ 0x140CB8FAC (HalpBlkInitializePageTables.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpBlkAllocatePageTablePage(char a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = 0;
  if ( a1 )
    v1 = -1;
  LODWORD(v6) = v1;
  v2 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, (unsigned __int64)&v6 & -(__int64)(a1 != 0), 1, 0, 0LL);
  v3 = v2;
  if ( v2 )
  {
    v4 = (void *)HalpMap(v2, 1LL, 1u, 1, 4u, 0LL);
    if ( v4 )
      memset_0(v4, 0, 0x1000uLL);
    else
      return 0LL;
  }
  return v3;
}
