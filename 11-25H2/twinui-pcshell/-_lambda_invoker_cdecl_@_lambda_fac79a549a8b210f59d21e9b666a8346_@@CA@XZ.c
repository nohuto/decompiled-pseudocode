/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ @ 0x1803EA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802DC460 (--_GTouchGestureLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  TouchGestureLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(
             &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
             1u,
             &v1,
             (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)TouchGestureLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
