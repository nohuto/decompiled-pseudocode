/*
 * XREFs of std::_Func_impl_no_alloc__lambda_450e21c83cecf74cf647a38861b3f151__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x1805042E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppliedPolicyForView@AEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBJAEBJAEBJAEBJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEBJ444@Z @ 0x1804F3128 (--$AppliedPolicyForView@AEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBJAEBJAEBJAEBJ@GamingPos.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_450e21c83cecf74cf647a38861b3f151__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  __int64 v5; // r10
  int v6; // ecx
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v5 = a1 + 8;
  v6 = *a5;
  v8 = *a4;
  v9 = *a3;
  v10 = *a2;
  LODWORD(a5) = v6;
  return GamingPosturePositionerTelemetryProvider::AppliedPolicyForView<unsigned short const (&)[24],HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long const &,long const &,long const &,long const &>(
           v5 + 8,
           &v10,
           &v9,
           &v8,
           (__int64)&a5,
           v5,
           v5 + 4,
           (unsigned int *)(v5 + 8));
}
