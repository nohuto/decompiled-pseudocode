/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@WindowFrameLoggingTelemetry@@KAPEAV3@XZ@SA@XZ @ 0x1800BB790
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180090C40 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

void __fastcall `WindowFrameLoggingTelemetry::Instance'::`2'::_lambda_1_::_lambda_invoker_cdecl_()
{
  __int64 v0; // r8
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2) )
  {
    if ( !v1 )
      wil::TraceLoggingProvider::`vector deleting destructor'(v2, 0LL, v0);
  }
}
