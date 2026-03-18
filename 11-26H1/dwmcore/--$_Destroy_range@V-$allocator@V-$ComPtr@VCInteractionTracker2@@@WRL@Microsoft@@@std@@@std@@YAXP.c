/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744 (--$_Insert_counted_range@PEAPEAVCManipulation@@@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsof.c)
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x18020453C (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 *     ??$_Uninitialized_copy_n@PEAPEAVCManipulation@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@PEAPEAVCManipulation@@_KPEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245574 (--$_Uninitialized_copy_n@PEAPEAVCManipulation@@V-$allocator@V-$ComPtr@VCManipulation@@@WRL@Micro.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245658 (--$_Uninitialized_move@PEAV-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCMan.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180246258 (--1_Reallocation_guard@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@_K1@Z @ 0x18024EFFC (-_Change_array@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManip.c)
 *     ?clear@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18024F0A0 (-clear@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManipulation@.c)
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x180277E78 (--$_Uninitialized_move@PEAV-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V-$allocator@V-$ComPt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
