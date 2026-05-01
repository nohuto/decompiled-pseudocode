/*
 * XREFs of ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180088A9C
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x1800888E0 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVApplicationViewTelemetry@ApplicationViewManagement@@P6AXXZ@Z @ 0x180088BC8 (-get@-$static_lazy@VApplicationViewTelemetry@ApplicationViewManagement@@@details@wil@@QEAAPEAVAp.c)
 *     ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180089D14 (-AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        unsigned int *a1,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // r9
  ApplicationViewManagement::ApplicationViewTelemetry *v8; // rcx

  v7 = *(_DWORD **)(wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
                      a1,
                      _lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v7 )
  {
    if ( *v7 )
    {
      wil::details::static_lazy<ApplicationViewManagement::ApplicationViewTelemetry>::get(
        v6,
        _lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
      ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(v8, *a1, *a2, *a3);
    }
  }
}
