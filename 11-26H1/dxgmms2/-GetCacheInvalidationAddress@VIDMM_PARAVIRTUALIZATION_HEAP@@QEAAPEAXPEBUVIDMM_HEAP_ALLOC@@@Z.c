/*
 * XREFs of ?GetCacheInvalidationAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@QEAAPEAXPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x1400B5260
 * Callers:
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x14009F738 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_M.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall VIDMM_PARAVIRTUALIZATION_HEAP::GetCacheInvalidationAddress(
        VIDMM_PARAVIRTUALIZATION_HEAP *this,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  struct _MDL *v3; // rcx

  if ( (*((_DWORD *)a2 + 8) & 3) == 0 )
    return 0LL;
  v3 = *(struct _MDL **)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 10LL) & 5) != 0 )
    return v3->MappedSystemVa;
  else
    return MmMapLockedPagesSpecifyCache(v3, 0, MmCached, 0LL, 0, 0x40000010u);
}
