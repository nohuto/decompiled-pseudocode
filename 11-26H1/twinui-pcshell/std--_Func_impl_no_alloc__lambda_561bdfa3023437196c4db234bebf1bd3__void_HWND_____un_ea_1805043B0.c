/*
 * XREFs of std::_Func_impl_no_alloc__lambda_561bdfa3023437196c4db234bebf1bd3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x1805043B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$EvaluatingShowWindowPolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEBI@Z @ 0x1804F3A38 (--$EvaluatingShowWindowPolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBI@GamingPosturePosition.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_561bdfa3023437196c4db234bebf1bd3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  int v5; // r10d
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v5 = *a5;
  v7 = *a4;
  v8 = *a3;
  v9 = *a2;
  LODWORD(a5) = v5;
  return GamingPosturePositionerTelemetryProvider::EvaluatingShowWindowPolicyForView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,unsigned int const &>(
           &v9,
           &v8,
           &v7,
           (unsigned int *)&a5);
}
