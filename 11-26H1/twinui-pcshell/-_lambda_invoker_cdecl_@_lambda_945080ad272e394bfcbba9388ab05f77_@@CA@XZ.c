/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_945080ad272e394bfcbba9388ab05f77_@@CA@XZ @ 0x18058E460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int _lambda_945080ad272e394bfcbba9388ab05f77_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`AIXTelemetryLogging::Instance'::`2'::wrapper, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}
