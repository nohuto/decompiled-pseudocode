/*
 * XREFs of ?VidMmIsDmaBufferPrepatched@@YA_NPEBUVIDMM_DMA_BUFFER@@@Z @ 0x1400ECB0C
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmIsDmaBufferPrepatched(const struct VIDMM_DMA_BUFFER *a1)
{
  __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*((_DWORD *)a1 + 7) & 4) == 0 )
    return 0;
  v2 = *(_QWORD *)(**((_QWORD **)a1 + 16) + 48LL);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return *((_QWORD *)a1 + 18) == v2;
}
