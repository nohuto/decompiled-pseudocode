/*
 * XREFs of ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180028D90 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A974 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180091E90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService(_OWORD *a1, __int64 a2, __int64 a3)
{
  struct wil::details::IFunctorHost *v4; // r8
  __int128 v6; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-11h] BYREF
  struct DiagnosticsInfo v8; // [rsp+50h] [rbp+7h] BYREF
  const char *v9; // [rsp+58h] [rbp+Fh]
  const char *v10; // [rsp+60h] [rbp+17h]
  __int16 v11; // [rsp+68h] [rbp+1Fh]
  _BYTE v12[8]; // [rsp+70h] [rbp+27h] BYREF
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+3Bh]
  struct DiagnosticsInfo retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v16; // [rsp+B0h] [rbp+67h] BYREF

  v16 = a3;
  v8 = retaddr;
  v9 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v10 = "MakePinWebsiteToTaskbarService";
  v11 = 140;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    3u);
  v6 = 0LL;
  v7[0] = &off_1800CB778;
  v7[1] = &v16;
  v7[2] = &v6;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v12, 11790758, &v8);
  wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v12, v4);
  if ( v13 )
    *(_DWORD *)(v13 + 16) = v14;
  *a1 = v6;
  return a1;
}
