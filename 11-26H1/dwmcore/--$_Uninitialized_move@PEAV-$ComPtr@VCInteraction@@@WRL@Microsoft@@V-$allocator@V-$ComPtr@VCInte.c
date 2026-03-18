/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x180245604
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CInteraction> *,std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(
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
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(a3, a3);
  return a3;
}
