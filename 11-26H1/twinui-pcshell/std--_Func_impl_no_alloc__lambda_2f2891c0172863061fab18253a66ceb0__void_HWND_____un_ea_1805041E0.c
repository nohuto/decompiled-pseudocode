/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f2891c0172863061fab18253a66ceb0__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x1805041E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppliedPolicyForView@AEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F2E04 (--$AppliedPolicyForView@AEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPos.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_2f2891c0172863061fab18253a66ceb0__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int **a4,
        unsigned int *a5,
        __int128 *a6)
{
  __int64 v6; // rcx
  __int128 v8; // [rsp+50h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v8 = *a6;
  v6 = *a5;
  a5 = *a4;
  v9 = *a3;
  v10 = *a2;
  LODWORD(a6) = v6;
  return GamingPosturePositionerTelemetryProvider::AppliedPolicyForView<unsigned short const (&)[18],HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
           v6,
           &v10,
           &v9,
           (__int64 *)&a5,
           (__int64)&a6,
           (__int64)&v8,
           (__int64)&v8 + 4,
           (unsigned int *)&v8 + 2);
}
