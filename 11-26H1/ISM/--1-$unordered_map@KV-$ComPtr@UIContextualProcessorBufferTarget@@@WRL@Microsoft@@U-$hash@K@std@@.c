/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800F0E24
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$10 @ 0x1801DA45A (_Win32kInterop--Win32kInterop_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>(a1);
}
