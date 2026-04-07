/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CA@XZ @ 0x1800BBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009D3C0 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int _lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  __int64 v1; // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  result = InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 1u, &v2, (LPVOID *)&v3);
  if ( result )
  {
    if ( !v2 )
      return (unsigned int)wil::TraceLoggingProvider::`vector deleting destructor'(v3, 0LL, v1);
  }
  return result;
}
