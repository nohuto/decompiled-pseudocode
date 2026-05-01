/*
 * XREFs of ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x1805A0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006BC68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180077F40 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800E3714 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ @ 0x1805A0B80 (-OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnWindowArrangementReset(SnapLayoutProvider **this, __int64 a2, __int64 a3)
{
  if ( this[55] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      a3);
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CSnapComponentTelemetry::OnSnappingCancelled *)(this + 130), 1u);
    CSnapComponentTelemetry::OnWindowArrangementReset();
    SnapLayoutProvider::Reset(this[55]);
  }
  return 0LL;
}
