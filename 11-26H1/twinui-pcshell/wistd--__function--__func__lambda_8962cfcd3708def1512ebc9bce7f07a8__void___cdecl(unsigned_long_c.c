/*
 * XREFs of wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800B6160
 * Callers:
 *     <none>
 * Callees:
 *     ??$LockScreenActive@AEBK@TouchEdgeGestureTelemetry@@SAXAEBK@Z @ 0x1800B60C0 (--$LockScreenActive@AEBK@TouchEdgeGestureTelemetry@@SAXAEBK@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        int *a2)
{
  __int64 v4; // rcx
  int v5; // edx

  TouchEdgeGestureTelemetry::LockScreenActive<unsigned long const &>(a2);
  v4 = *(_QWORD *)(a1 + 8);
  LOBYTE(v5) = 0;
  if ( *a2 != 1 )
    v5 = *(_DWORD *)(v4 + 92);
  TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(v4, v5);
}
