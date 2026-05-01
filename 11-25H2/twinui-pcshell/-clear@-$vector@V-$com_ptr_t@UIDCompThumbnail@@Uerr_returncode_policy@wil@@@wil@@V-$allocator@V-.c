/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1804155B0
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x180410670 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x180416030 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x180498F50 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800E8FC8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
