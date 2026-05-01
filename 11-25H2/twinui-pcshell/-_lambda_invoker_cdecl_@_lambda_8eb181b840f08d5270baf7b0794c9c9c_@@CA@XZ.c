/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_8eb181b840f08d5270baf7b0794c9c9c_@@CA@XZ @ 0x18033ACF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_8eb181b840f08d5270baf7b0794c9c9c_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-20h] BYREF

  Context = 0LL;
  fPending = 0;
  result = __std_init_once_begin_initialize(&`GamingOverlayTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
