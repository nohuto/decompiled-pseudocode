/*
 * XREFs of MiInitializePageHeatList @ 0x1404655D0
 * Callers:
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiChangePageHeatImmediate @ 0x14052B92C (MiChangePageHeatImmediate.c)
 *     MiGetTransitionPageHeatList @ 0x140709A44 (MiGetTransitionPageHeatList.c)
 *     MiZeroPageMakeHot @ 0x140713BF0 (MiZeroPageMakeHot.c)
 *     MiMakeRestOfImageHot @ 0x1408816B4 (MiMakeRestOfImageHot.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
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
    result = qword_140E2D950;
    *(_QWORD *)(a1 + 8) = qword_140E2D950;
  }
  return result;
}
