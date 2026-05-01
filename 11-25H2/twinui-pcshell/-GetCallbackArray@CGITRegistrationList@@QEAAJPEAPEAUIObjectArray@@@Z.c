/*
 * XREFs of ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68
 * Callers:
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18013573C (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801FAC24 (-NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x18022B420 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x18032396C (-FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z.c)
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1803284D0 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x18043CA90 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x18043CBA0 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x18043CCD0 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x18043D020 (-ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1804AC524 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1804D54E0 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1804F3138 (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180599070 (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 * Callees:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x18008BFBC (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 *     __Platform_ReleaseSRWLockShared @ 0x1802D34E0 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x1802D3528 (__Platform_AcquireSRWLockShared.c)
 */

__int64 __fastcall CGITRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx

  *a2 = 0LL;
  v2 = this + 1;
  v3 = this;
  _Platform_AcquireSRWLockShared(this + 1);
  LODWORD(v3) = Microsoft::WRL::Details::MakeAndInitialize<CGITCallbackArray,IObjectArray,CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>> &>(
                  a2,
                  &v3[2]);
  _Platform_ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
