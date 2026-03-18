/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245658
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744 (--$_Insert_counted_range@PEAPEAVCManipulation@@@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsof.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CManipulation> *,std::allocator<Microsoft::WRL::ComPtr<CManipulation>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(a3, a3);
  return a3;
}
