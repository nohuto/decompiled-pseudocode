/*
 * XREFs of ??1?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E2114
 * Callers:
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$3 @ 0x1801DA0FD (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$3.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$4 @ 0x1801DA3E0 (_Win32kInterop--Win32kInterop_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::~unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>(a1);
}
