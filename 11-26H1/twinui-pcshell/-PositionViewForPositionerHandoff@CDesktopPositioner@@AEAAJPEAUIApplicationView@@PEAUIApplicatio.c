/*
 * XREFs of ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x180510900
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180254A40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator() @ 0x18050F28C (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___ @ 0x18050E69C (wil--ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_ @ 0x18050E988 (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--_lambda_ebca2bf7fa70890e87a68e152d07e31f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::PositionViewForPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-49h] BYREF
  __int64 v11; // [rsp+58h] [rbp-41h] BYREF
  __int64 v12; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v13[6]; // [rsp+68h] [rbp-31h] BYREF
  __int128 v14; // [rsp+98h] [rbp-1h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+Fh]
  __m128i si128; // [rsp+B0h] [rbp+17h]
  int v17; // [rsp+C0h] [rbp+27h]

  v11 = a5;
  v9 = a6;
  v14 = 0LL;
  v17 = 0;
  v15 = 0LL;
  v12 = a2;
  v10 = a3;
  v8 = a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 144LL))(a3, &v14);
  lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_(
    v13,
    a1,
    (__int64)&v12,
    (__int64)&v11,
    (__int64)&v8,
    (__int64)&v10,
    (__int64)&v9);
  wil::ResultFromException__lambda_8b454e1137a63a08af271cf145abd5bf___();
  return 0LL;
}
