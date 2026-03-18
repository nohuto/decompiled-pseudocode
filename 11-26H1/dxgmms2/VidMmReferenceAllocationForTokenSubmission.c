/*
 * XREFs of VidMmReferenceAllocationForTokenSubmission @ 0x14003BA90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x1401162A8 (-ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLO.c)
 */

__int64 __fastcall VidMmReferenceAllocationForTokenSubmission(
        struct VIDMM_DEVICE *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned int *a5)
{
  return VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(a1, a1, a2, a3, a5);
}
