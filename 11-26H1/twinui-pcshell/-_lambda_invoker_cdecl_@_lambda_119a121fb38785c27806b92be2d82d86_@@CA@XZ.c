/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ @ 0x1802DB410
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802D5100 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`IamTraceLogging::Instance'::`2'::wrapper, 1u, &v1, (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
