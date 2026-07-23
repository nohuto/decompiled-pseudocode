/*
 * XREFs of HalpIommuAllocateAndZeroPageTable @ 0x1404756D4
 * Callers:
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1405A3384 (HalpIommuInitializeDmarPageTable.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140D0EC50 (HalpAllocPhysicalMemoryEx.c)
 */

void *__fastcall HalpIommuAllocateAndZeroPageTable(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  LARGE_INTEGER v6; // rax
  size_t v7; // rsi
  void *v8; // rbx

  v3 = 1LL << *(_DWORD *)(a1 + 4LL * a2 + 36);
  v4 = *(unsigned int *)(a1 + 28);
  v5 = ((1 << v4) + 8) * v3;
  if ( a3 )
  {
    v6.QuadPart = HalpAllocPhysicalMemoryEx(a3, 0, (v5 + 4095) >> 12, 0, 0LL);
    if ( v6.QuadPart )
    {
      v7 = v5;
      v8 = HalMapIoSpace(v6, v5, MmCached);
LABEL_4:
      memset_0(v8, 0, v7);
      HalpIommuFlushPhysicalPtesFromCacheSize((__int64)v8, v5);
      return v8;
    }
  }
  else
  {
    v7 = v5;
    v8 = (void *)HalpMmAllocCtxAlloc(v4, v5);
    if ( v8 )
      goto LABEL_4;
  }
  return 0LL;
}
