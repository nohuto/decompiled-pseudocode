/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_147e36a80022279d49a89264b6535513_@@CA@XZ @ 0x1803EA6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int _lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = __std_init_once_begin_initialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
  }
  return result;
}
