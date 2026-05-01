/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180204538
 * Callers:
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$8 @ 0x1806EFA0A (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$8.c)
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$9 @ 0x1806EFA20 (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FC54 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
