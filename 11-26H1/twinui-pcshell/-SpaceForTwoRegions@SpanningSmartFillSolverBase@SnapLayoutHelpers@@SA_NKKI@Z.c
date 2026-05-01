/*
 * XREFs of ?SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z @ 0x1805AD5A0
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AAFA8 (-BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV-$vector@UCRect.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805ACB9C (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(__int64 a1, int a2, int a3)
{
  return (unsigned int)MulDiv(a2, 96, a3) >= 0x4D0;
}
