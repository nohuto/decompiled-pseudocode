/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818___ @ 0x1804F67D0
 * Callers:
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1804FF428 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF428.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818____::_2_::_Guard_type::__Guard_type @ 0x1804F78F0 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND__.c)
 */

_QWORD *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818___(
        __int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = operator new(0x48uLL);
  v4 = v2;
  *v2 = &off_18074FFF8;
  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    (__int64)(v2 + 1),
    a1);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_e4fdde13f8dc81d77ad1ee21baa5b818__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT___lambda_e4fdde13f8dc81d77ad1ee21baa5b818____::_2_::_Guard_type::__Guard_type(&v4);
  return v2;
}
