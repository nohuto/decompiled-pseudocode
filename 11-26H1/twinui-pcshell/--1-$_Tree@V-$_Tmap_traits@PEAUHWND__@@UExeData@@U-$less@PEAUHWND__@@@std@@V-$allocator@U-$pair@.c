/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1802852D4
 * Callers:
 *     ??1Win32AppStateManager@@UEAA@XZ @ 0x1801BFA6C (--1Win32AppStateManager@@UEAA@XZ.c)
 *     ??1ExeDataCache@@QEAA@XZ @ 0x180284FE4 (--1ExeDataCache@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x180228D00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>(
        _QWORD *a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,ExeData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(__int64 **)(*a1 + 8LL));
  return std::_Deallocate<16>(*a1, 112LL);
}
