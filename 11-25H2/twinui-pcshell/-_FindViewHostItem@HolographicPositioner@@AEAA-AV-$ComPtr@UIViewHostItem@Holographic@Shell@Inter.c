/*
 * XREFs of ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803FC820
 * Callers:
 *     ?BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z @ 0x1803F7D30 (-BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z.c)
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803F8840 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803F89C0 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1803F9ED0 (-IsViewFullScreen@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803FAE70 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FBE04 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FC184 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803FC908 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803FD174 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1803FD30C (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1803FD4B8 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FD6CC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FDAB0 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FDBEC (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1803FE11C (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FE374 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall HolographicPositioner::_FindViewHostItem(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  else
    *a2 = 0LL;
  return a2;
}
