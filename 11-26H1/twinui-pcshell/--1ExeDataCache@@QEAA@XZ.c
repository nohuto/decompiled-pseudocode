/*
 * XREFs of ??1ExeDataCache@@QEAA@XZ @ 0x180284FE4
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$3 @ 0x1806D78FA (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall ExeDataCache::~ExeDataCache(ExeDataCache *this)
{
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>((char *)this + 8);
}
