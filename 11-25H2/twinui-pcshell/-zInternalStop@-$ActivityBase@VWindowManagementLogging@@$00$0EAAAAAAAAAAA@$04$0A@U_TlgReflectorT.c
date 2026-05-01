/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18012E414
 * Callers:
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18012DE70 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18012E0F0 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x180327D50 (-StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x180327F80 (-StopActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ @ 0x18049D3C0 (-StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowAltTab@MultitaskingViewTelemetry@@MEAAXXZ @ 0x18049D5F0 (-StopActivity@ShowAltTab@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@MEAAXXZ @ 0x18049EEB0 (-StopActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ @ 0x1804D9D40 (-StopActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TMChangeHandler@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804DA3F0 (-StopActivity@TMChangeHandler@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AppToAppSwitch@TabletModeTelemetry@@MEAAXXZ @ 0x1804FA710 (-StopActivity@AppToAppSwitch@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowArrangementView_Show@TabletModeTelemetry@@MEAAXXZ @ 0x1804FEAA0 (-StopActivity@WindowArrangementView_Show@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805095E4 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?StopActivity@TMAppArrange@TabletModeTelemetry@@MEAAXXZ @ 0x180509840 (-StopActivity@TMAppArrange@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x18050C3A0 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 *     ?StopActivity@TMAppResize@TabletModeTelemetry@@MEAAXXZ @ 0x18050C600 (-StopActivity@TMAppResize@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnSnappingCancelled@CSnapComponentTelemetry@@MEAAXXZ @ 0x18057F570 (-StopActivity@OnSnappingCancelled@CSnapComponentTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18012E458 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  **(_DWORD **)(a1 + 272) = 2;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
