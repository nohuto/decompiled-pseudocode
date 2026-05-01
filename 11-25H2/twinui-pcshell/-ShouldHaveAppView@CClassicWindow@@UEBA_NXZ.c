/*
 * XREFs of ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180172080
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall CClassicWindow::ShouldHaveAppView(CClassicWindow *this, __int64 a2)
{
  int v2; // edi
  char v3; // bl

  v2 = *((_DWORD *)this + 18);
  v3 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    a2);
  if ( ((v2 & 0x13) == 0 || (v2 & 8) != 0) && (v2 & 5) == 0 )
    return 0;
  return v3;
}
