/*
 * XREFs of ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400A5E60
 * Callers:
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x1400A5F00 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400A5F58 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 */

__int64 __fastcall VIDMM_DEVICE::RecommitPagingQueueSystemGpuVAs(VIDMM_DEVICE *this, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = 32LL * a2;
  result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
             *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)(*((_QWORD *)this + 9) + v4 + 8) + 64LL),
             *(struct VIDMM_GLOBAL **)this,
             this,
             *((struct VIDMM_PROCESS **)this + 1),
             a2);
  if ( (int)result >= 0 )
  {
    result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
               *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)(*((_QWORD *)this + 10) + v4 + 8) + 64LL),
               *(struct VIDMM_GLOBAL **)this,
               this,
               *((struct VIDMM_PROCESS **)this + 1),
               a2);
    if ( (int)result >= 0 )
    {
      v6 = *((_QWORD *)this + 11);
      if ( v6 )
        return VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
                 *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)(v6 + v4 + 8) + 64LL),
                 *(struct VIDMM_GLOBAL **)this,
                 this,
                 *((struct VIDMM_PROCESS **)this + 1),
                 a2);
    }
  }
  return result;
}
