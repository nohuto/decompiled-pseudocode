/*
 * XREFs of ?ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ @ 0x180502664
 * Callers:
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
 *     ?SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z @ 0x180503718 (-SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::ReleaseSecondaryView(GamingPosturePositioner *this)
{
  __int64 (__fastcall ****v1)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 (__fastcall ***v2)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  struct IApplicationView *v3; // rdx
  _QWORD *v4; // rdx
  HWND WindowForView; // rax
  const char *v6; // r9
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))((char *)this + 256);
  v2 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 32);
  if ( v2 )
  {
    v7[0] = off_180750148;
    v8 = v7;
    GamingPosturePositioner::LogViewDiagnosticInfo(v2, (__int64)v7);
    if ( v8 )
    {
      v4 = v7;
      LOBYTE(v4) = v8 != v7;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
    }
    try
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(*v1, v3);
      if ( WindowForView )
        GamingPosturePositioner::SetViewCloaking((struct IApplicationView *)*v1, WindowForView, 1);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v1);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x533,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v6);
    }
  }
}
