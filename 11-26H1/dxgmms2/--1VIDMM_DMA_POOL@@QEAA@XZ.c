/*
 * XREFs of ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400ECBCC
 * Callers:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x140003320 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     UpdateFairResourceUsage @ 0x1400EDCD0 (UpdateFairResourceUsage.c)
 */

void __fastcall VIDMM_DMA_POOL::~VIDMM_DMA_POOL(VIDMM_DMA_POOL *this)
{
  VIDMM_DMA_POOL *v2; // rdi
  unsigned int *v3; // rdx
  VIDMM_DMA_POOL **v4; // rdx
  VIDMM_DMA_POOL **v5; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1939;
  }
  if ( (*((_DWORD *)this + 9) & 2) != 0 )
  {
    ExAcquireResourceExclusiveLite(Resource, 1u);
    v4 = (VIDMM_DMA_POOL **)*((_QWORD *)this + 13);
    if ( v4[1] != (VIDMM_DMA_POOL *)((char *)this + 104)
      || (v5 = (VIDMM_DMA_POOL **)*((_QWORD *)this + 14), *v5 != (VIDMM_DMA_POOL *)((char *)this + 104)) )
    {
      __fastfail(3u);
    }
    *v5 = (VIDMM_DMA_POOL *)v4;
    v4[1] = (VIDMM_DMA_POOL *)v5;
    _InterlockedDecrement(&dword_14008AA80);
    UpdateFairResourceUsage();
    ExReleaseResourceLite(Resource);
  }
  v2 = (VIDMM_DMA_POOL *)*((_QWORD *)this + 11);
  while ( v2 != (VIDMM_DMA_POOL *)((char *)this + 88) )
  {
    v3 = (unsigned int *)v2;
    v2 = *(VIDMM_DMA_POOL **)v2;
    RemoveDmaBufferFromPool(this, v3);
  }
}
