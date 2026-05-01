/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1802C6878
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557284 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180132A04 (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
        _QWORD **a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(v1);
  return result;
}
