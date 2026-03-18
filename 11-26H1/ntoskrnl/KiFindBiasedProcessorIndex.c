/*
 * XREFs of KiFindBiasedProcessorIndex @ 0x140201890
 * Callers:
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140201520 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14021EB80 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x1402351F0 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140235418 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x140417D10 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindBiasedProcessorIndex(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // r11d
  int i; // edx
  unsigned __int64 v5; // rax

  v3 = 0;
  for ( i = a2 % (unsigned int)__popcnt(a3) + 1; i; --i )
  {
    _BitScanForward64(&v5, a3);
    v3 += v5 + 1;
    a3 >>= (unsigned __int8)v5 + 1;
  }
  return *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
         + (unsigned int)(v3 + (a1 << 6) - 1));
}
