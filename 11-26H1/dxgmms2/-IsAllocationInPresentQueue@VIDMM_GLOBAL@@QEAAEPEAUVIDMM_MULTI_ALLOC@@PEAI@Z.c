/*
 * XREFs of ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140119364
 * Callers:
 *     VidMmIsAllocationInPresentQueue @ 0x140047110 (VidMmIsAllocationInPresentQueue.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r10
  struct VIDMM_MULTI_ALLOC *v4; // r11
  bool v5; // r9

  v3 = a3;
  v4 = a2;
  v5 = *((int *)a2 + 26) > 0
    || VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*((VIDMM_GLOBAL_ALLOC_NONPAGED **)a2 + 12));
  if ( v3 )
    *v3 = *(_DWORD *)(*((_QWORD *)v4 + 12) + 16LL);
  return v5;
}
