/*
 * XREFs of wistd::__function::__func__CComposition::RegisterMonitorPowerNotification_::_2_::_lambda_1__void___cdecl(void)_::operator() @ 0x18022A360
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x18022B414 (-UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z.c)
 */

__int64 __fastcall wistd::__function::__func__CComposition::RegisterMonitorPowerNotification_::_2_::_lambda_1__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 result; // rax

  if ( g_pComposition )
    return CComposition::UpdateConnectedStandbyState(a1, 0xFFFFFFFFLL);
  return result;
}
