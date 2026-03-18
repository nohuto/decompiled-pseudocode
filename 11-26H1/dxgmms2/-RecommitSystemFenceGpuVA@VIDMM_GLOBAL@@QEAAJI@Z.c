/*
 * XREFs of ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x1400A5F00
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400A5E60 (-RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400A5F58 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitSystemFenceGpuVA(VIDMM_GLOBAL *this, unsigned int a2)
{
  struct VIDMM_DEVICE *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5065);
  v3 = a2;
  result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
             *(VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + v3 + 741) + 64LL),
             this,
             v2,
             *((struct VIDMM_PROCESS **)this + 5064),
             v3);
  if ( (int)result >= 0 )
    return VIDMM_DEVICE::RecommitPagingQueueSystemGpuVAs(v2, v3);
  return result;
}
