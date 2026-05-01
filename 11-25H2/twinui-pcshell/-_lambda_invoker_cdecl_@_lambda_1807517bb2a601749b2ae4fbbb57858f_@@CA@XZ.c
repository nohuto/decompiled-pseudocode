/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ @ 0x180428DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802DC4E0 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerInteropTraceLogging *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( __std_init_once_begin_initialize(
         &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
         1u,
         &v0,
         (LPVOID *)&v1) )
  {
    if ( !v0 )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'(v1, 0);
  }
}
