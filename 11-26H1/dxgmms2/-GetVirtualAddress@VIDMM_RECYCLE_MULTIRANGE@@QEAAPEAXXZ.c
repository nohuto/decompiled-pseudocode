/*
 * XREFs of ?GetVirtualAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1401106D8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE_FLAGS@@@Z @ 0x1400ACA7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEKW4VIDMM_HEAP_ALLOCATE.c)
 *     ?GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140110640 (-GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetVirtualAddress(VIDMM_RECYCLE_MULTIRANGE *this)
{
  int v1; // eax

  v1 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  if ( v1 == 3 || v1 == 4 )
    return (void *)(*((_QWORD *)this + 16) + *((_QWORD *)this + 17));
  else
    return (void *)*((_QWORD *)this + 6);
}
