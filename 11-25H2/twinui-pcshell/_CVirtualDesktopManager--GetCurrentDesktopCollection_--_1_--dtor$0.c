/*
 * XREFs of _CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor$0 @ 0x1806AB9B6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802C0564 (--1-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 */

void __fastcall CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 72));
  }
}
