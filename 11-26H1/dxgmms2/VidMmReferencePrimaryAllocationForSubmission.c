/*
 * XREFs of VidMmReferencePrimaryAllocationForSubmission @ 0x14003A570
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x14011555C (-ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_AL.c)
 */

__int64 __fastcall VidMmReferencePrimaryAllocationForSubmission(
        struct VIDMM_DEVICE *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3,
        unsigned int *a4)
{
  return VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(a1, a1, a2, a3, a4);
}
