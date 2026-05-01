/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800F4574
 * Callers:
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800F42F8 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800F452C (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800FE150 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@-$ve.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180489180 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180491898 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@-$v.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _std::vector_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__const_&__::_1_::catch$2 @ 0x1806ACA6E (_std--vector_wil--com_ptr_t_IVirtualDesktop_wil--err_returncode_policy__std--allocator_wil--com_.c)
 *     _std::vector_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IApplicationView_wil::err_returncode_policy__const_&__::_1_::catch$1 @ 0x1806C897C (_std--vector_wil--com_ptr_t_IApplicationView_wil--err_returncode_policy__std--allocator_wil--com.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
