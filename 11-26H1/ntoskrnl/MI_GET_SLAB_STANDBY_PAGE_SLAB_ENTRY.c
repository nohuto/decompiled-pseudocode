/*
 * XREFs of MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402AB9D4
 * Callers:
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1)
{
  return (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x1FFFFF) << 19) & 0xFFFFFFFFFFLL | (((8LL * (*(_DWORD *)(a1 + 36) & 0xFFE00000)) | (((*(_QWORD *)a1 >> 20) | *(_QWORD *)(a1 + 40) & 0xF80000000000000uLL) >> 20)) << 40);
}
