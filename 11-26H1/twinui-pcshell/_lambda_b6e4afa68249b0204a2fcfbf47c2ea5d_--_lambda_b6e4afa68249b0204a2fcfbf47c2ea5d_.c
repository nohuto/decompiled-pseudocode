/*
 * XREFs of _lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_ @ 0x180438970
 * Callers:
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004BC50 (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18043CD00 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_::_lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_QWORD *)(a1 + 16) = *a4;
  result = a1;
  *(_DWORD *)(a1 + 24) = *a5;
  return result;
}
