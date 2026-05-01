/*
 * XREFs of ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398
 * Callers:
 *     _lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator() @ 0x1804F82D0 (_lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator().c)
 *     ?AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804F8B20 (-AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z.c)
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F9C80 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804FBD40 (-GetChromeConfigurationForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIA.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804FDD60 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804FE870 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1804FF428 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF428.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 *     ?ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ @ 0x180502664 (-ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?ResizeView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180503030 (-ResizeView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805031CC (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_6bc9c2369fecffe5ae1067ab0f067b5f__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long___lambda_6bc9c2369fecffe5ae1067ab0f067b5f___ @ 0x1804F6770 (std--_Global_new_std--_Func_impl_no_alloc__lambda_6bc9c2369fecffe5ae1067ab0f067b5f__void_HWND___.c)
 *     _lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_ @ 0x1804F74B8 (_lambda_e4fdde13f8dc81d77ad1ee21baa5b818_--__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1K@Z@std@@@Z @ 0x1804FF208 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$function@$$A6AXPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::LogViewDiagnosticInfo(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2)
{
  __int64 v3; // rdx
  _BYTE *v4; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    (__int64)v8,
    a2);
  v7 = std::_Global_new_std::_Func_impl_no_alloc__lambda_6bc9c2369fecffe5ae1067ab0f067b5f__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long___lambda_6bc9c2369fecffe5ae1067ab0f067b5f___((__int64)v8);
  GamingPosturePositioner::LogViewDiagnosticInfo(this, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != (_QWORD *)v6;
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 32LL))(v7, v4);
  }
  return lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_((__int64)v8, v3);
}
