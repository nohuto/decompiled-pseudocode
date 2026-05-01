/*
 * XREFs of ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x180138304
 * Callers:
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1801379D8 (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180137BF0 (-OnApplicationViewChanged@NPSMDesktopShellComponent@@UEAAJPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x180138000 (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 */

bool __fastcall NPSMDesktopShellTelemetry::IsEnabled(__int64 a1)
{
  _DWORD *v1; // rcx
  bool result; // al

  v1 = (_DWORD *)wil::details::static_lazy<NPSMDesktopShellTelemetry>::get(
                   a1,
                   (void (__cdecl *)())_lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_)[1];
  result = 0;
  if ( v1 )
    return *v1 != 0;
  return result;
}
