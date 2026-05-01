/*
 * XREFs of ??1ExeDataCache@@QEAA@XZ @ 0x1802D0ED0
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$3 @ 0x1806AFB94 (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ExeDataCache::~ExeDataCache(void **this)
{
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>(this + 1);
}
