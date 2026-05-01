/*
 * XREFs of ??$WidgetsOSState@AEAKAEA_NAEAK_NAEA_NPEBGPEBGAEAPEBG_N_NI@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N1$$QEAPEBG3AEAPEBG22$$QEAI@Z @ 0x1805C47BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18018CD24 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100I@Z @ 0x1805DA1B0 (-WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100I@Z.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState<unsigned long &,bool &,unsigned long &,bool,bool &,unsigned short const *,unsigned short const *,unsigned short const * &,bool,bool,unsigned int>(
        unsigned int *a1,
        bool *a2,
        _DWORD *a3,
        bool *a4,
        bool *a5,
        const unsigned __int16 **a6,
        const unsigned __int16 **a7,
        const unsigned __int16 **a8,
        bool *a9,
        bool *a10,
        unsigned int *a11)
{
  __int64 v15; // rcx
  _DWORD *v16; // r10
  unsigned __int16 *v17; // rcx

  v16 = (_DWORD *)wil::details::static_lazy<DashboardManagerTelemetry>::get(
                    (__int64)a1,
                    (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)[1];
  if ( v16 )
  {
    if ( *v16 )
    {
      wil::details::static_lazy<DashboardManagerTelemetry>::get(
        v15,
        (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
      v17 = (unsigned __int16 *)*a6;
      LOBYTE(v17) = *a5;
      DashboardManagerTelemetry::WidgetsOSState_(
        (DashboardManagerTelemetry *)v17,
        *a1,
        *a2,
        *a3 != 0,
        *a4,
        *a5,
        *a6,
        *a7,
        *a8,
        *a9,
        *a10,
        *a11);
    }
  }
}
