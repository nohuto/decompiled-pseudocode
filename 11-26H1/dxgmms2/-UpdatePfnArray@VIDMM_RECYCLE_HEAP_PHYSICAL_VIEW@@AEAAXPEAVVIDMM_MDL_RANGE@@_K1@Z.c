/*
 * XREFs of ?UpdatePfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@AEAAXPEAVVIDMM_MDL_RANGE@@_K1@Z @ 0x1400F7114
 * Callers:
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_K3@Z @ 0x1400F6B6C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEBAXPEA_K_K1@Z @ 0x1400F7164 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEBAXPEA_K_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UpdatePfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct VIDMM_MDL_RANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r10

  v4 = *((_QWORD *)this + 4);
  v5 = (a3 - *(_QWORD *)(*(_QWORD *)this + 40LL)) >> 12;
  if ( a2 )
    VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(this, (unsigned __int64 *)(v4 + 8 * v5), a3, a4);
  else
    memset((void *)(v4 + 8 * v5), 0, 8 * ((a4 - a3) >> 12));
}
