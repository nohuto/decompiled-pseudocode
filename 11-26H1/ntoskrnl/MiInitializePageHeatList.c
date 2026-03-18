/*
 * XREFs of MiInitializePageHeatList @ 0x14046BE50
 * Callers:
 *     MiGetLargePagesForChain @ 0x140284A5C (MiGetLargePagesForChain.c)
 *     MiCoalesceFreeSmallPages @ 0x14028D060 (MiCoalesceFreeSmallPages.c)
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 *     MiMakeTransitionHeatBatch @ 0x14050A470 (MiMakeTransitionHeatBatch.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiChangePageHeatImmediate @ 0x140529498 (MiChangePageHeatImmediate.c)
 *     MiGetTransitionPageHeatList @ 0x140704D74 (MiGetTransitionPageHeatList.c)
 *     MiZeroPageMakeHot @ 0x14070EEF0 (MiZeroPageMakeHot.c)
 *     MiMakeRestOfImageHot @ 0x14087B2B4 (MiMakeRestOfImageHot.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MmPrefetchPagesEx @ 0x140A51A98 (MmPrefetchPagesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageHeatList(__int64 a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  result = (unsigned int)(4 * a4);
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)a1 = a2 & 1 | (2 * (result | a3 & 3));
  if ( a3 )
  {
    result = qword_140E2D7D0;
    *(_QWORD *)(a1 + 8) = qword_140E2D7D0;
  }
  return result;
}
