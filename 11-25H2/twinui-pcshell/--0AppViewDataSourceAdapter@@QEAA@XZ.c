/*
 * XREFs of ??0AppViewDataSourceAdapter@@QEAA@XZ @ 0x18016E4E0
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18016E3B8 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18016E890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppVi.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter(AppViewDataSourceAdapter *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>();
  *((_DWORD *)this + 48) = 1;
  *(_QWORD *)this = &AppViewDataSourceAdapter::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapter::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification>'};
  *((_QWORD *)this + 16) = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &AppViewDataSourceAdapter::`vftable'{for `IAppViewDataSourceAdapter'};
  *((_QWORD *)this + 18) = &AppViewDataSourceAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_BYTE *)this + 196) = 1;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  return this;
}
