/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1801BFAD0
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$1 @ 0x1806D78CE (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::map<std::wstring,std::shared_ptr<Win32AppInfo>>::~map<std::wstring,std::shared_ptr<Win32AppInfo>>(
        __int64 a1)
{
  return std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>(a1);
}
