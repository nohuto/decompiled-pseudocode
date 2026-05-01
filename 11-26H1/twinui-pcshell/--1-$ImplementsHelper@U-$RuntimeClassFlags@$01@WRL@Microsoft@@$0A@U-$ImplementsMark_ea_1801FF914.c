/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U7@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801FF914
 * Callers:
 *     ??1CRotationManagerSync@@UEAA@XZ @ 0x1801FF8CC (--1CRotationManagerSync@@UEAA@XZ.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802EB158 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802EB370 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??1CClassicWindowManager@@MEAA@XZ @ 0x1802EC108 (--1CClassicWindowManager@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802EC420 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802ED740 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_1802ED740.c)
 *     ??1CRealmActivationHistory@@EEAA@XZ @ 0x1802F8D14 (--1CRealmActivationHistory@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F8E50 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_1802F8E50.c)
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180092310 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>(
        __int64 a1)
{
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 32));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
}
