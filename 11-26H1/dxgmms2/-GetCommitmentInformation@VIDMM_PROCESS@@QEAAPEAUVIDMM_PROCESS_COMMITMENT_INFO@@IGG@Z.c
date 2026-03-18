/*
 * XREFs of ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x140100430
 * Callers:
 *     ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1400A8DAC (-QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 * Callees:
 *     <none>
 */

struct VIDMM_PROCESS_COMMITMENT_INFO *__fastcall VIDMM_PROCESS::GetCommitmentInformation(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  struct VIDMM_PROCESS_COMMITMENT_INFO *result; // rax

  result = *(struct VIDMM_PROCESS_COMMITMENT_INFO **)(*((_QWORD *)this + 4) + 8LL * a2);
  if ( result )
    return (struct VIDMM_PROCESS_COMMITMENT_INFO *)(*(_QWORD *)(304LL * a3 + *((_QWORD *)result + 1)) + 184LL * a4);
  return result;
}
