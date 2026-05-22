/*
 * XREFs of ??0?$unordered_map@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@@std@@QEAA@XZ @ 0x18008816C
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004AC8C (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18008819C (--0-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>(
    a1,
    &v3);
  return a1;
}
