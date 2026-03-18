/*
 * XREFs of VidMmGetAllocationInstance @ 0x1400418B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBackingAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z @ 0x14011B040 (-GetBackingAddress@VIDMM_PARAVIRTUALIZATION_HEAP@@UEBA_KPEBUVIDMM_HEAP_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VidMmGetAllocationInstance(
        VIDMM_PARAVIRTUALIZATION_HEAP *a1,
        const struct VIDMM_HEAP_ALLOC *a2)
{
  return VIDMM_PARAVIRTUALIZATION_HEAP::GetBackingAddress(a1, a2);
}
