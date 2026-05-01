/*
 * XREFs of ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1804FF428
 * Callers:
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818___ @ 0x1804F67D0 (std--_Global_new_std--_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND___.c)
 *     _lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_ @ 0x1804F74B8 (_lambda_e4fdde13f8dc81d77ad1ee21baa5b818_--__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
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
  v7 = std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818___((__int64)v8);
  GamingPosturePositioner::LogViewDiagnosticInfo(this, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != (_QWORD *)v6;
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 32LL))(v7, v4);
  }
  return lambda_e4fdde13f8dc81d77ad1ee21baa5b818_::__lambda_e4fdde13f8dc81d77ad1ee21baa5b818_((__int64)v8, v3);
}
