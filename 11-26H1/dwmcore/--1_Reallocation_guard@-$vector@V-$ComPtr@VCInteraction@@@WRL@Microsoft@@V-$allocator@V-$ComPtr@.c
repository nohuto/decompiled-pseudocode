/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18024621C
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<CInteraction>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(
      *(__int64 **)(a1 + 24),
      *(__int64 **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  }
}
