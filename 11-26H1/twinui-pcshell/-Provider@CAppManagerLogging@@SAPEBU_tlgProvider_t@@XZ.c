/*
 * XREFs of ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043B24
 * Callers:
 *     ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x180017370 (-StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180017A40 (-StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180017C80 (-StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180017EC0 (-StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180018100 (-StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x180018350 (-StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180021B1C (--$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z.c)
 *     ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x1800422D4 (-StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800424E4 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004340C (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800434A0 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18005C428 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18005D558 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18005DA64 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005DB08 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x18005E9B8 (--$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4G.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005EC58 (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F650 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18005F7B0 (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F898 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@Initialization@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800A875C (-StartActivity@Initialization@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@PEBG@Z @ 0x1800B2344 (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1800B2548 (--1-$_TlgActivityBase@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B3470 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param.c)
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x1800B4480 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AppFrameHostStartup@CAppManagerTelemetry@@MEAAXXZ @ 0x18016A830 (-StopActivity@AppFrameHostStartup@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x1801B5A88 (--$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1801CDDE8 (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1801FBD50 (--1-$_TlgActivityBase@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0_ea_1801FBD50.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180203838 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x18020CCE0 (-StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Initialization@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18020CF20 (-StopActivity@Initialization@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180214A58 (--1-$_TlgActivityBase@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0_ea_180214A58.c)
 *     ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x180217CE0 (-StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180229E90 (-StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x18022FA50 (-StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028C54C (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18028EB6C (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x18028EC7C (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x18028EE28 (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802A5AF8 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802A7D90 (-NotifyFailure@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1802AFA40 (-StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x1802B362C (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x1802BD6C8 (-StartActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x1802C0B90 (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x1802DD920 (--1Completer@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1802E2900 (-HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802E2FE0 (-NotifyFailure@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x1802E3BB0 (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E5AF0 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E5BA0 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E5C3C (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802E5CD8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x1802E5DD0 (-StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ @ 0x1802E6000 (-StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ @ 0x1802E6240 (-StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802E7E20 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ??$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802EBC50 (--$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW.c)
 *     ??$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802EBF44 (--$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAE.c)
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x1802EDBA0 (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 *     ?StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F3E4C (-StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x1802F3EE8 (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 *     ?StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F3FCC (-StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F4068 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F4104 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F41A0 (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F423C (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F44D0 (-StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4710 (-StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4940 (-StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4B80 (-StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4DC0 (-StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F5000 (-StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F5240 (-StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1802F9044 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     ?FrameManagerCrashed@CAppManagerTelemetry@@SAXXZ @ 0x1802F98A8 (-FrameManagerCrashed@CAppManagerTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802F9E10 (-NotifyFailure@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802FA160 (-NotifyFailure@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x1802FA920 (-StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1803003A4 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180300448 (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1803004F0 (-StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180300730 (-StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x180301A38 (--$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x180302BA0 (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x180302C00 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 *     ?StopActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@MEAAXXZ @ 0x180305D30 (-StopActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

const struct _tlgProvider_t *CAppManagerLogging::Provider(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    qword_1808DA380 = 0LL;
    v3 = &qword_1808DA378;
    qword_1808DA378 = &ShellScreenClippingLogging::`vftable';
    byte_1808DA388 = 0;
    dword_1808DA38C = 0;
    qword_1808DA390 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DA378, qword_1808DA390, v1);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808DA378);
  }
  return (const struct _tlgProvider_t *)v3[1];
}
