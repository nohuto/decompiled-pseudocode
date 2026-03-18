/*
 * XREFs of ??$_Uninitialized_copy_n@PEAPEAVCManipulation@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@PEAPEAVCManipulation@@_KPEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245574
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744 (--$_Insert_counted_range@PEAPEAVCManipulation@@@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsof.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 */

__int64 *__fastcall std::_Uninitialized_copy_n<CManipulation * *>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    do
    {
      *v3 = *(__int64 *)((char *)v3 + v5);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v3++);
      --v4;
    }
    while ( v4 );
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(v3, v3);
  return v3;
}
