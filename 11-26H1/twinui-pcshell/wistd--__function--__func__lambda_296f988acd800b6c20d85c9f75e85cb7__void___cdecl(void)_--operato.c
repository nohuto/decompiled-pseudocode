/*
 * XREFs of wistd::__function::__func__lambda_296f988acd800b6c20d85c9f75e85cb7__void___cdecl(void)_::operator() @ 0x180460FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E3728 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ @ 0x18045D9C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ.c)
 *     ??$SearchDisabledByPolicy@AEA_NAEAU?$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU?$atomic@_N@std@@@Z @ 0x18045FF00 (--$SearchDisabledByPolicy@AEA_NAEAU-$atomic@_N@std@@@StartWindowTelemetry@@SAXAEA_NAEAU-$atomic@.c)
 */

char __fastcall wistd::__function::__func__lambda_296f988acd800b6c20d85c9f75e85cb7__void___cdecl_void__::operator()(
        DisableSearchPolicy *a1)
{
  __int64 v2; // rax

  *(_BYTE *)(*((_QWORD *)a1 + 1) + 1064LL) = DisableSearchPolicy::IsSearchDisabled(a1);
  LOBYTE(v2) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_57784674>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57784674>::GetImpl'::`2'::impl);
  if ( (_BYTE)v2 )
  {
    v2 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v2 + 1058) )
    {
      LOBYTE(v2) = *(_BYTE *)(v2 + 1064);
      if ( (_BYTE)v2 )
        LOBYTE(v2) = StartWindowTelemetry::SearchDisabledByPolicy<bool &,std::atomic<bool> &>(
                       (char *)(*((_QWORD *)a1 + 1) + 1058LL),
                       (char *)(*((_QWORD *)a1 + 1) + 1064LL));
    }
  }
  return v2;
}
