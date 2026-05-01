/*
 * XREFs of ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x18057D080
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180071730 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800BD588 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18012DE70 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ @ 0x18057D0D0 (-OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnWindowArrangementReset(
        SnapLayoutProvider **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( this[55] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CSnapComponentTelemetry::OnSnappingCancelled *)(this + 130));
    CSnapComponentTelemetry::OnWindowArrangementReset();
    SnapLayoutProvider::Reset(this[55]);
  }
  return 0LL;
}
