/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802B72B0
 * Callers:
 *     _CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor$0 @ 0x1806D5006 (_CVirtualDesktopManager--GetCurrentDesktopCollection_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor$0 @ 0x1806D508B (_CVirtualDesktopManager--UpdateViewVisibility_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor$4 @ 0x1806F42AD (_CVirtualDesktopManager--SwitchDesktopInternalPrivate_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  return std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(a1);
}
