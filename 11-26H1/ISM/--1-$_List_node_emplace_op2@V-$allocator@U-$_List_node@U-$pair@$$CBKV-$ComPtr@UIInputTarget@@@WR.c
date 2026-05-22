/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006308C
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@@Z @ 0x180018BD4 (--$emplace@AEBU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@-$_Hash@V-$_Umap_trai.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::emplace_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget____const_&__::_1_::dtor$0 @ 0x1801D4826 (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__st_ea_1801D4826.c)
 *     _ContextualProcessorBuffer::ProcessContextualProcessorDecision_::_1_::dtor$8 @ 0x1801D4A06 (_ContextualProcessorBuffer--ProcessContextualProcessorDecision_--_1_--dtor$8.c)
 *     _std::unordered_map_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget_______::operator[]_::_1_::dtor$0 @ 0x1801D4B26 (_std--unordered_map_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__std--hash_unsigned_long__.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$6 @ 0x1801D4B80 (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v2 + 24));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return std::_Deallocate<16>(v3, 32LL);
  return result;
}
