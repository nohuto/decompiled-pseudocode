/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 *     ??$_Uninitialized_copy_n@PEAPEAVCInteraction@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@PEAPEAVCInteraction@@_KPEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x180245514 (--$_Uninitialized_copy_n@PEAPEAVCInteraction@@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microso.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x180245604 (--$_Uninitialized_move@PEAV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCInte.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18024621C (--1_Reallocation_guard@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@_K1@Z @ 0x18024EF88 (-_Change_array@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCIntera.c)
 *     ?clear@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F070 (-clear@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCInteraction@@@.c)
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
