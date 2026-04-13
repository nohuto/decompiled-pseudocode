/*
 * XREFs of ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180028D90 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A974 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180091E90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this)
{
  _lambda_62158d46a05af21ae3d227fe228597be_ *v1; // rbx
  struct wil::details::IFunctorHost *v2; // r8
  _QWORD v3[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v4; // [rsp+30h] [rbp-50h] BYREF
  const char *v5; // [rsp+38h] [rbp-48h]
  const char *v6; // [rsp+40h] [rbp-40h]
  __int16 v7; // [rsp+48h] [rbp-38h]
  _BYTE v8[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  char v12; // [rsp+98h] [rbp+18h] BYREF

  v1 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
         (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v12,
         this);
  v4 = retaddr;
  v5 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v6 = "Invoke";
  v7 = 126;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    1u);
  v3[0] = &wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::`vftable';
  v3[1] = v1;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v8, 11790758, &v4);
  wil::details::RunFunctor((wil::details *)v3, (struct wil::details::IFunctor *)v8, v2);
  if ( v9 )
    *(_DWORD *)(v9 + 16) = v10;
}
