/*
 * XREFs of ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x1800686B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180028D90 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A974 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_N.c)
 *     ??0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@PEAVSwapStartTileService@Actions@CreativeFramework@@AEAV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800679BC (--0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@PEAVSwapStartTileService@Actions@CreativeFram.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::Activate(
        ToastNotification::ActivityToastNotificationCallback *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const struct NOTIFICATION_USER_INPUT_DATA *a4)
{
  _QWORD *v4; // rbx
  struct wil::details::IFunctorHost *v5; // r8
  _QWORD v7[2]; // [rsp+20h] [rbp-21h] BYREF
  __int64 v8; // [rsp+30h] [rbp-11h] BYREF
  struct DiagnosticsInfo v9; // [rsp+40h] [rbp-1h] BYREF
  const char *v10; // [rsp+48h] [rbp+7h]
  __int64 v11; // [rsp+50h] [rbp+Fh]
  __int16 v12; // [rsp+58h] [rbp+17h]
  _BYTE v13[8]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+74h] [rbp+33h]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+57h]
  const unsigned __int16 *v17; // [rsp+B0h] [rbp+6Fh] BYREF

  v17 = a3;
  v9 = retaddr;
  v10 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp";
  v11 = 0LL;
  v12 = 112;
  v4 = _lambda_6bc2a757313ab37e766f9d0f904bfdba_::_lambda_6bc2a757313ab37e766f9d0f904bfdba_(
         &v8,
         (__int64)this - 48,
         (__int64)&v17);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_MobilityExperience>::GetImpl'::`2'::impl,
    1u,
    1u);
  v7[0] = &wil::details::functor_wrapper_void<_lambda_f0f613184e0e47442428064dff914436_ &>::`vftable';
  v7[1] = v4;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 11824828, &v9);
  wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v13, v5);
  if ( v14 )
    *(_DWORD *)(v14 + 16) = v15;
  return 0LL;
}
