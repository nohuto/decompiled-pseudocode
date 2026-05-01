/*
 * XREFs of _lambda_7c3c4e67715d49f836fa4955fab08a4a_::operator() @ 0x1804F8154
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x1805044C0 (std--_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____un_ea_1805044C0.c)
 * Callees:
 *     ??$EvaluatingPositionChangePolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKPEBGAEBJAEBJAEBJAEBJAEBH@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAK$$QEAPEBGAEBJ444AEBH@Z @ 0x1804F3918 (--$EvaluatingPositionChangePolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKPEBGAEBJAEBJAEBJAEBJAE.c)
 */

const struct _tlgProvider_t *lambda_7c3c4e67715d49f836fa4955fab08a4a_::operator()(_DWORD *a1, ...)
{
  const wchar_t *v1; // rax
  const wchar_t *v3; // [rsp+60h] [rbp+8h] BYREF
  __int64 v4; // [rsp+68h] [rbp+10h] BYREF
  va_list va; // [rsp+68h] [rbp+10h]
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  va_list va1; // [rsp+70h] [rbp+18h]
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF
  va_list va2; // [rsp+78h] [rbp+20h]
  va_list va3; // [rsp+80h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v8 = va_arg(va3, _QWORD);
  v1 = 0LL;
  if ( *a1 )
  {
    switch ( *a1 )
    {
      case 1:
        v1 = L"TWS_MAXIMIZED";
        break;
      case 2:
        v1 = L"TWS_MINIMIZED";
        break;
      case 3:
        v1 = L"TWS_ARRANGED";
        break;
    }
  }
  else
  {
    v1 = L"TWS_RESTORED";
  }
  v3 = v1;
  return GamingPosturePositionerTelemetryProvider::EvaluatingPositionChangePolicyForView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,unsigned short const *,long const &,long const &,long const &,long const &,int const &>(
           (__int64 *)va,
           (__int64 *)va1,
           (__int64 *)va2,
           (int *)va3,
           (__int64 *)&v3,
           (__int64)(a1 + 1),
           (__int64)(a1 + 2),
           (__int64)(a1 + 3),
           a1 + 4);
}
