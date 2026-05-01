/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@UICompositionCapabilitiesChangedHandler@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802E0F8C
 * Callers:
 *     ??0AcrylicPolicyManager@@QEAA@XZ @ 0x1802E10B0 (--0AcrylicPolicyManager@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800E3634 (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(a1 + 1));
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 19));
  a1[24] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveShellComponent'};
  a1[7] = &AcrylicPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  a1[14] = &AcrylicPolicyManager::`vftable'{for `IWeakReferenceSource'};
  a1[15] = &AcrylicPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>'};
  a1[16] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveWindowMessageNotification'};
  a1[17] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>'};
  a1[18] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,ICompositionCapabilitiesChangedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `ICompositionCapabilitiesChangedHandler'};
  a1[19] = &AcrylicPolicyManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
