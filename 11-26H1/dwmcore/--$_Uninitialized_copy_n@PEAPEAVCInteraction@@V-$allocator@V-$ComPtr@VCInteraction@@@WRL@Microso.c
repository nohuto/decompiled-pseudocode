/*
 * XREFs of ??$_Uninitialized_copy_n@PEAPEAVCInteraction@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@PEAPEAVCInteraction@@_KPEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x180245514
 * Callers:
 *     ??$_Insert_counted_range@PEAPEAVCInteraction@@@?$vector@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCInteraction@@_K@Z @ 0x1801E7550 (--$_Insert_counted_range@PEAPEAVCInteraction@@@-$vector@V-$ComPtr@VCInteraction@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@0@@Z @ 0x1802452A8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

__int64 *__fastcall std::_Uninitialized_copy_n<CInteraction * *>(__int64 a1, __int64 a2, __int64 *a3)
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
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteraction>>>(v3, v3);
  return v3;
}
