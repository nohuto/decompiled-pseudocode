/*
 * XREFs of ?Increment@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x14003D35C
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 *     ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x14011555C (-ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_AL.c)
 *     ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x1401162A8 (-ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterlockedCounterWithHistoryRelease::Increment(
        InterlockedCounterWithHistoryRelease *this,
        unsigned int *a2)
{
  unsigned __int32 v2; // edi
  unsigned __int64 v3; // rbx

  v2 = _InterlockedIncrement((volatile signed __int32 *)this);
  if ( a2 )
    ++*a2;
  v3 = (unsigned __int64)*((unsigned int *)this + 130) << 6;
  *((_DWORD *)this + 130) = ((unsigned __int8)*((_DWORD *)this + 130) + 1) & 7;
  *(_DWORD *)((char *)this + v3 + 64) = v2;
  *(_QWORD *)((char *)this + v3 + 8) = 0LL;
  *(_WORD *)((char *)this + v3 + 68) = RtlCaptureStackBackTrace(1u, 6u, (PVOID *)((char *)this + v3 + 16), 0LL);
  return v2;
}
