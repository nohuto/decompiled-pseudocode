/*
 * XREFs of ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0
 * Callers:
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14000BCAC (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140014EB8 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DCBC (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DE5C (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14003A0E8 (-VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14003E5D0 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x140049C10 (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x14004B17C (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     VidSchCollectDbgInfo @ 0x14011DE00 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int *result; // rax
  unsigned int v3; // ecx
  char v4; // r8
  bool v5; // zf
  int v6; // edx

  v1 = a1[8];
  result = a1;
  v3 = a1[7];
  v4 = -1;
  if ( v3 >= v1 )
  {
    result[5] &= ~(1 << v1);
    v5 = !_BitScanForward(&v1, result[5]);
    if ( !v5 )
      v4 = v1;
    result[8] = v4;
  }
  else
  {
    result[4] &= ~(1 << v3);
    v5 = !_BitScanForward((unsigned int *)&v6, result[4]);
    if ( !v5 )
      v4 = v6;
    result[7] = v4;
  }
  ++result[6];
  return result;
}
