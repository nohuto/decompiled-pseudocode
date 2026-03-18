/*
 * XREFs of ?clear@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F0A0
 * Callers:
 *     ?SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCManipulation@@$0?0@gsl@@_N@Z @ 0x1802179F0 (-SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV-$span@PEAVCManipulation@@$0-0@gsl@@_N@.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<CManipulation>>::clear(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
