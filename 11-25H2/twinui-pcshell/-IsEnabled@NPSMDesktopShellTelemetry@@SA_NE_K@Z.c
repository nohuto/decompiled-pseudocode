/*
 * XREFs of ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x180091FFC
 * Callers:
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800919B0 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180091DFC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x18009202C (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 */

bool __fastcall NPSMDesktopShellTelemetry::IsEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  bool result; // al

  v1 = *(_DWORD **)(wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                      a1,
                      _lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_)
                  + 8);
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
