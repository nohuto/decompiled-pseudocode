/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ @ 0x1800E5D60
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18008F037 (InitOnceBeginInitialize_0.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180090C40 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  __int64 v1; // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  result = InitOnceBeginInitialize_0(
             &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
             1u,
             &v2,
             (LPVOID *)&v3);
  if ( result )
  {
    if ( !v2 )
      return (unsigned int)wil::TraceLoggingProvider::`vector deleting destructor'(v3, 0LL, v1);
  }
  return result;
}
