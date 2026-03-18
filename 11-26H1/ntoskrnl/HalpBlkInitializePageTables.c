/*
 * XREFs of HalpBlkInitializePageTables @ 0x140CB2F6C
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140CB2FF8 (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMap @ 0x1403439AC (HalpMap.c)
 *     HalpBlkAllocatePageTablePage @ 0x140CB2D68 (HalpBlkAllocatePageTablePage.c)
 */

__int64 HalpBlkInitializePageTables()
{
  unsigned int v0; // esi
  __int64 PageTablePage; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rax

  v0 = 0;
  PageTablePage = HalpBlkAllocatePageTablePage(1);
  if ( PageTablePage
    && (v2 = HalpBlkAllocatePageTablePage(1)) != 0
    && (v3 = HalpMap(PageTablePage, 1LL, 1u, 1, 4u, 0LL)) != 0 )
  {
    HalpBlkRootPageTablePa = PageTablePage;
    HalpBlkTiledMemoryMapPa = v2;
    HalpBlkPageTableVaWindow = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
