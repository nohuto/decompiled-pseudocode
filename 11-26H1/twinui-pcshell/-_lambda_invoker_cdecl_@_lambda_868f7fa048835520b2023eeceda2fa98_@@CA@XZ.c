/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CA@XZ @ 0x18031E940
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802D5100 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(
             &`FullScreenPositionerLogging::Instance'::`2'::wrapper,
             1u,
             &v1,
             (LPVOID *)&v2);
  if ( result )
  {
    if ( !v1 )
      return (unsigned int)ViewManagerInteropTraceLogging::`scalar deleting destructor'(v2, 0);
  }
  return result;
}
