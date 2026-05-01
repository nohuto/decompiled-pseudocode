/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CA@XZ @ 0x1804635F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802D5100 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         1u,
         &v0,
         (LPVOID *)&v1) )
  {
    if ( !v0 )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'(v1, 0);
  }
}
