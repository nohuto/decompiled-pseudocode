/*
 * XREFs of ?AllocateLocal@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z @ 0x140110610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140110640 (-GetDefaultMapping@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateLocal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        void **a4,
        void **a5)
{
  *a4 = 0LL;
  if ( a5 )
    *a5 = VIDMM_RECYCLE_HEAP_MGR::GetDefaultMapping(this, a2);
  return 0LL;
}
