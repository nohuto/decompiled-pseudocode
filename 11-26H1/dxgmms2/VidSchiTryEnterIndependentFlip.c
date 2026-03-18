/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x140005A2C
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x140005A84 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 */

void __fastcall VidSchiTryEnterIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // r11d

  if ( VidSchiCheckPlaneIndependentFlipCondition(a2, a3, a4) )
    VidSchiFlushPendingTokenList(a1, a2, a3, v7);
}
