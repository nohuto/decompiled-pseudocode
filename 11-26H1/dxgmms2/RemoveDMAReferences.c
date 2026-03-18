/*
 * XREFs of RemoveDMAReferences @ 0x14003AF5C
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoveDMAReferences(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 692);
  if ( (int)result < a2 )
  {
    v3 = *(int *)(a1 + 692);
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 270LL, 41LL, a1, v3, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 692), -a2);
  return result;
}
