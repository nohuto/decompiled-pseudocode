/*
 * XREFs of ??0VirtualDesktopSwitcherHook@@QEAA@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@Z @ 0x1806ABBC0
 * Callers:
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AEF5C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_shared@VVirtualDesktopSwitcherHookData@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@std@@YA?AV?$shared_ptr@VVirtualDesktopSwitcherHookData@@@0@AEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@AEAPEAUHHOOK__@@@Z @ 0x1806AB3E8 (--$make_shared@VVirtualDesktopSwitcherHookData@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_failfast_p.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHook(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        const char *a4)
{
  __int64 **v6; // rax
  __int64 v7; // rcx
  std::_Ref_count_base *v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HHOOK v14; // [rsp+50h] [rbp+18h] BYREF

  if ( VirtualDesktopSwitcherHook::s_vdsHookData )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3A6,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
      a4);
  v14 = SetWindowsHookExW(13, VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHostHookProc, &_ImageBase, 0);
  v6 = std::make_shared<VirtualDesktopSwitcherHookData,wil::com_ptr_t<IWeakReference,wil::err_failfast_policy> &,HHOOK__ * &>(
         &v11,
         a2,
         (__int64 *)&v14);
  v7 = (__int64)*v6;
  v8 = (std::_Ref_count_base *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  VirtualDesktopSwitcherHook::s_vdsHookData = v7;
  v9 = qword_1808DA9F8;
  qword_1808DA9F8 = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}
