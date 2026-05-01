/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018A14
 * Callers:
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18001889C (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z @ 0x1802A147C (-StartActivity@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAXW4SnapRegion@@_NK@Z.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1803277BC (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803278E0 (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18049D320 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18049EE08 (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1804D9AC0 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1804D9C88 (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1804F9954 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1804FE4C4 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x180509428 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x18050C254 (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1801EE8D8 (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_P.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  PSRWLOCK *p_SRWLock; // rax
  char v4; // di
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v2 )
  {
    v2 += 33;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = (PSRWLOCK *)&v6;
    v4 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 )
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v6);
  _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(*(_QWORD *)(a1 + 272));
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
