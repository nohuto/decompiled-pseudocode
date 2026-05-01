/*
 * XREFs of ?GetTombstonedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801C4950
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@UIVirtualDesktopManagerInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18018EE14 (--$-4UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@UIVirtualDesktop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall UwpWindowEventDispatcher::GetTombstonedView(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+10h]

  v14 = a2;
  *a2 = 0LL;
  v5 = *(__int64 **)(a1 + 384);
  v6 = *(__int64 **)(a1 + 392);
  while ( v5 != v6 )
  {
    v13 = 0LL;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v5 + 296LL))(*v5) != a3 )
      goto LABEL_4;
    v8 = *v5;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 232LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v13);
    v10 = v9(v8, &v13);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB97,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
LABEL_4:
      v7 = v13;
      goto LABEL_5;
    }
    v7 = v13;
    if ( !v13 )
    {
      wil::com_ptr_t<IVirtualDesktopManagerInternal,wil::err_exception_policy>::operator=<IVirtualDesktopManagerInternal,wil::err_returncode_policy,void>(
        a2,
        v5);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      return a2;
    }
LABEL_5:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    ++v5;
  }
  return a2;
}
