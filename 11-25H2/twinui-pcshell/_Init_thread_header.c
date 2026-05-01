/*
 * XREFs of _Init_thread_header @ 0x1802D5900
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800156EC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18004B774 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180072428 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180098170 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x1800B8510 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1800F49C4 (--R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ.c)
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800F871C (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 *     ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x1800F8F50 (--0-$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 *     ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x1800FC0F0 (-IsGamingOverlayExperienceManagerEnabled@@YA_NXZ.c)
 *     ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x180118A90 (-AreVirtualDesktopsEnabled@@YA_NXZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x18015915C (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z @ 0x1801704AC (-_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18017FE38 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801ACF30 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?GetInvokeDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@XZ @ 0x1801DE9CC (-GetInvokeDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@XZ.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801FD8F4 (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180203958 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x18020CD48 (-IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180236B84 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x1802964E4 (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ?IsRunningOnServerSku@@YA_NXZ @ 0x1802B5464 (-IsRunningOnServerSku@@YA_NXZ.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F7B30 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z @ 0x1803DBE58 (-GetComponentInfo@@YAAEBUImmersiveComponentInfo@@AEBU_GUID@@@Z.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1803F17A0 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x180412CAC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     _lambda_1a4613c3767b380bb1c3edf448000594_::operator() @ 0x180446494 (_lambda_1a4613c3767b380bb1c3edf448000594_--operator().c)
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x18044EC60 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x180553594 (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?TryGetCustomDuration@CShellSnapComponent@@AEAA?AV?$optional@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@std@@PEBG@Z @ 0x18057F89C (-TryGetCustomDuration@CShellSnapComponent@@AEAA-AV-$optional@V-$duration@_JU-$ratio@$00$0DOI@@st.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805849F8 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180590FD0 (-StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F796C (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F8138 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     _Init_thread_wait_v2 @ 0x1802D59B0 (_Init_thread_wait_v2.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&stru_1808990A8);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait_v2();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&stru_1808990A8);
}
