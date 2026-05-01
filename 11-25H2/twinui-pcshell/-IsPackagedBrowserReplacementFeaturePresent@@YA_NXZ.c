/*
 * XREFs of ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x18066D508
 * Callers:
 *     ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x18066D21C (-IsBrowserReplacementFeaturePresent@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18066F428 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedBrowserReplacement@@@details@wil@.c)
 */

char __fastcall IsPackagedBrowserReplacementFeaturePresent(__int64 a1, __int64 a2)
{
  BrowserReplacementVariant::Private *v2; // rcx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PackagedBrowserReplacement>::GetImpl'::`2'::impl,
    a2,
    0LL);
  return BrowserReplacementVariant::Private::IsPackagedBrowserReplacementActivated(v2);
}
