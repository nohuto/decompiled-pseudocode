/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180014B50 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800169C0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002AE88 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x18002DBE0 (-GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002DE18 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180054E20 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180061504 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x18006E694 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009970C (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     ?value@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGesturesProcessor@@XZ @ 0x18009972C (-value@-$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGes.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B59EC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E230C (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F6F60 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800F7300 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x18010D92C (-value@-$optional@K@std@@QEGAAAEAKXZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180138840 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x1801452E0 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019EE5C (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1801A4F94 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801ABA7C (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18009B336 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
