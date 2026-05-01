/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180572810
 * Callers:
 *     ??1UwpAppPackageInfo@@QEAA@XZ @ 0x1805728D8 (--1UwpAppPackageInfo@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@1@@Z @ 0x1805725A8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::~_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x38);
}
