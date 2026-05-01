/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804180A8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804181A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewEventDispatcherCr.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellComponent@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E901C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellCompone.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  _QWORD *v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // r10
  __int64 result; // rax
  const struct _GUID *v6; // r9
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r11
  const struct _GUID *v11; // rcx
  void **v12; // r8
  const struct _GUID *v13; // r9
  __int64 v14; // r10
  void *v15; // r11
  __int64 v16; // r11

  if ( InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
    goto LABEL_2;
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellComponent,IServiceProvider>::CanCastTo(
             v4 + 40,
             v3,
             v2);
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v6, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
    {
LABEL_2:
      *v2 = v4;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v7, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2) )
    {
      *v9 = v10;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v8, &GUID_4637e79c_de03_4aef_8a87_e796659e5e8d) )
    {
      *v12 = v15;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &GUID_8a6f7053_3035_4eb7_8020_551e80a67998) )
      {
        result = 2147500034LL;
LABEL_14:
        if ( (_DWORD)result == -2147467262 )
          return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v14 + 40), v13, v12);
        return result;
      }
      *v12 = (void *)(v16 + 8);
    }
    result = 0LL;
    goto LABEL_14;
  }
  return result;
}
