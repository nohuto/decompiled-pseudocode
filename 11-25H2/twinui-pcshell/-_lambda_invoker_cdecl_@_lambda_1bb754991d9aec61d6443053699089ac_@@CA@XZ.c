/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CA@XZ @ 0x180472D80
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802DC4E0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`TouchKeyboardTelemetry::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
