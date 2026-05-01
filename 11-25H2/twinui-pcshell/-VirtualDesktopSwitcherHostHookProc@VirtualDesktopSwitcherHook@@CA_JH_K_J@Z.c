/*
 * XREFs of ?VirtualDesktopSwitcherHostHookProc@VirtualDesktopSwitcherHook@@CA_JH_K_J@Z @ 0x1806888A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180684054 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ??$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180684084 (--$try_query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIWeakReference@@Uerr_failfa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
LRESULT __fastcall VirtualDesktopSwitcherHook::VirtualDesktopSwitcherHostHookProc(
        int code,
        WPARAM wParam,
        _DWORD *lParam)
{
  void *v6; // rbx
  __int64 v7; // rax
  struct IWeakReference *v9; // [rsp+20h] [rbp-10h] BYREF
  void *v10; // [rsp+28h] [rbp-8h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+38h] BYREF

  if ( !code && ((wParam - 256) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
  {
    wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
      (__int64 *)&v9,
      (__int64 *)VirtualDesktopSwitcherHook::s_vdsHookData);
    wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(&v9, &v10);
    v6 = v10;
    if ( !v10 )
    {
LABEL_15:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
      return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
    }
    wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherViewHostInternal>(
      &v9,
      (void **)&v11);
    if ( *lParam != 27 )
    {
      v7 = *v11;
      if ( *lParam == 40 )
      {
        if ( (!(*(unsigned __int8 (**)(void))(v7 + 40))()
           || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v11 + 48))(v11))
          && ((*(unsigned __int8 (__fastcall **)(__int64 *))(*v11 + 48))(v11)
           || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v11 + 32))(v11)) )
        {
          goto LABEL_14;
        }
      }
      else if ( !(*(unsigned __int8 (**)(void))(v7 + 32))()
             || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v11 + 48))(v11) )
      {
        goto LABEL_14;
      }
    }
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, 0LL);
LABEL_14:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    goto LABEL_15;
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
