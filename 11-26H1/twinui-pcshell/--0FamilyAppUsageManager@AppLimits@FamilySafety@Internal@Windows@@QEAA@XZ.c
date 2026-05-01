/*
 * XREFs of ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x1800D4020
 * Callers:
 *     ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D391C (--$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800D40BC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1800D40BC.c)
 *     ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800D4174 (--0-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@In.c)
 */

Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::FamilyAppUsageManager(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification'};
  *((_QWORD *)this + 17) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>((char *)this + 184);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  return this;
}
