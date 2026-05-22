/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18014D994
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$9 @ 0x1801DB63C (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$9.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$7 @ 0x1801DB8C6 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$7.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$3 @ 0x1801DBA29 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>(a1);
}
