/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U7@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18017D93C
 * Callers:
 *     ??1CRotationManagerSync@@UEAA@XZ @ 0x18020F16C (--1CRotationManagerSync@@UEAA@XZ.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802F05B4 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F07D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??1CClassicWindowManager@@MEAA@XZ @ 0x1802F14D8 (--1CClassicWindowManager@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F17D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F2750 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_1802F2750.c)
 *     ??1CRealmActivationHistory@@EEAA@XZ @ 0x1802FDA74 (--1CRealmActivationHistory@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802FDBB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_1802FDBB0.c)
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18017D964 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>(
        __int64 a1)
{
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 32));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 24));
}
