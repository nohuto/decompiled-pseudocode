/*
 * XREFs of ?StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023F994
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023D3F0 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchExperienceManager_PrelaunchDeferralTimerStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801FA480 (-UndockedSearchExperienceManager_PrelaunchDeferralTimerStarted@SearchAppExperienceManagerTelemet.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA?AW4Variant_55855747@@W4VariantReportingKind@3@_N@Z @ 0x1803BAB68 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA-AW4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA_NXZ @ 0x1803BAE54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartPrelaunchDeferralTimer(struct _TP_TIMER **pv)
{
  char Variant; // al
  struct _FILETIME v3; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v5; // r9
  struct _TP_TIMER *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_PrelaunchDeferralTimerStarted((__int64)pv);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55855747>::GetImpl'::`2'::impl) )
    goto LABEL_8;
  Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_55855747>::GetImpl'::`2'::impl);
  switch ( Variant )
  {
    case 1:
      pftDueTime = (struct _FILETIME)-1200000000LL;
      goto LABEL_10;
    case 2:
      pftDueTime = (struct _FILETIME)-1800000000LL;
      goto LABEL_10;
    case 3:
      v3 = (struct _FILETIME)-2400000000LL;
      break;
    default:
LABEL_8:
      v3 = (struct _FILETIME)-3000000000LL;
      break;
  }
  pftDueTime = v3;
LABEL_10:
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_cb8c93dbc801781329b66c287e9aafb7_::_lambda_invoker_cdecl_, pv, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 113,
    ThreadpoolTimer);
  v6 = pv[113];
  if ( !v6 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x12E5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v5);
  SetThreadpoolTimer(v6, &pftDueTime, 0, 0);
}
