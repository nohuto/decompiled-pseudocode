/*
 * XREFs of VidMmDestroyAllocation @ 0x14003A630
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1400D51A8 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmDestroyAllocation(
        struct VIDMM_DEVICE *a1,
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  if ( a1 )
    this = *(VIDMM_GLOBAL **)a1;
  VIDMM_GLOBAL::DestroyAllocation(this, a1, a3);
}
