/*
 * XREFs of ?clear@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F070
 * Callers:
 *     ?SetOrAppendInteractions@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCInteraction@@$0?0@gsl@@_N@Z @ 0x180217C30 (-SetOrAppendInteractions@CInteractionTracker2@@AEAAXAEBV-$span@PEAVCInteraction@@$0-0@gsl@@_N@Z.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<CInteraction>>::clear(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
