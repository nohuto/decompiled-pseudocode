/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003EC78
 * Callers:
 *     ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18003ED38 (-StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800403B0 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180041674 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x180041AD4 (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800425B0 (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180086C60 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180138744 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1801387D8 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x1801D92E8 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802AD9F8 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x1802C93DC (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1802EBB60 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x1802EBBEC (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8D6C (-StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8EC8 (-StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8F54 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8FE0 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F906C (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F90F8 (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180304A74 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180304B08 (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ?Instance@CAppManagerLogging@@KAPEAV1@XZ @ 0x18003EBB0 (-Instance@CAppManagerLogging@@KAPEAV1@XZ.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

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
  v4 = *(_QWORD *)(a1 + 272);
  if ( **((_DWORD **)CAppManagerLogging::Instance() + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
