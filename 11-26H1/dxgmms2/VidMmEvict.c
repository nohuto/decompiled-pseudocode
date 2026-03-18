/*
 * XREFs of VidMmEvict @ 0x14003C840
 * Callers:
 *     <none>
 * Callees:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 */

void __fastcall VidMmEvict(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  VIDMM_GLOBAL::Evict(a1, a2, a3, a4, a5, a6);
}
