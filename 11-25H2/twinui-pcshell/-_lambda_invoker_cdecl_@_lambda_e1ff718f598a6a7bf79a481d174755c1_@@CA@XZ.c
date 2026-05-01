/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CA@XZ @ 0x1802E2150
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802DC4E0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_e1ff718f598a6a7bf79a481d174755c1_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`AppCloseTelemetry::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
