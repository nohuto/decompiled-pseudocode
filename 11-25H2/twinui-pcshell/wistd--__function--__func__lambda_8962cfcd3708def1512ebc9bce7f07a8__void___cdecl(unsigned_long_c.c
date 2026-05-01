/*
 * XREFs of wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800FBE50
 * Callers:
 *     <none>
 * Callees:
 *     ??$LockScreenActive@AEBK@TouchEdgeGestureTelemetry@@SAXAEBK@Z @ 0x1800FBE8C (--$LockScreenActive@AEBK@TouchEdgeGestureTelemetry@@SAXAEBK@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  TouchEdgeGestureTelemetry::LockScreenActive<unsigned long const &>(a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  if ( *a2 != 1 )
    v5 = *(unsigned int *)(v4 + 92);
  return TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(v4, v5);
}
