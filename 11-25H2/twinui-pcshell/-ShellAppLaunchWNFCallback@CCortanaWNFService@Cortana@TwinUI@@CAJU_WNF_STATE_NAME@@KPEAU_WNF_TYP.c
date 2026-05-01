/*
 * XREFs of ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803CE7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800727FC (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApp.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback(
        struct _WNF_STATE_NAME a1,
        char a2,
        struct _WNF_TYPE_ID *a3,
        void *a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    a2);
  return 0LL;
}
