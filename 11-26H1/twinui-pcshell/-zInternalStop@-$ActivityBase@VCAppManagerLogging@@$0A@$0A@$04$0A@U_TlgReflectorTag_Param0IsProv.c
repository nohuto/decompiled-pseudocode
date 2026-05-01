/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016AD8
 * Callers:
 *     ?StopActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1800168A0 (-StopActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTeleme.c)
 *     ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x180017370 (-StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180017A40 (-StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180017C80 (-StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180017EC0 (-StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180018100 (-StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x180018350 (-StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18001EF20 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001F164 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18001F4F4 (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18001FBE8 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18001FF10 (-StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180020210 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180022C8C (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800673F0 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1802063A0 (-StopActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x18020CCE0 (-StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Initialization@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18020CF20 (-StopActivity@Initialization@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1802177B0 (-StopActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x180217CE0 (-StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x180229E90 (-StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x18022FA50 (-StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Cloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1802ACF60 (-StopActivity@Cloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1802AFA40 (-StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ @ 0x1802E6000 (-StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ @ 0x1802E6240 (-StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F44D0 (-StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4940 (-StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4B80 (-StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F4DC0 (-StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F5000 (-StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802F5240 (-StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1803004F0 (-StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180300730 (-StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180682490 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1806826C0 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180682B30 (-StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180682D60 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180682F90 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  **(_DWORD **)(a1 + 272) = 2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
