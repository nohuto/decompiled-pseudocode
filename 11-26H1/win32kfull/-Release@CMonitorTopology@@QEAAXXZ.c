/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x14015C0C8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x14015C41C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ??1CRecalcState@@UEAA@XZ @ 0x14015F5F0 (--1CRecalcState@@UEAA@XZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14015F634 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402102EC (--1CRecalcProp@@AEAA@XZ.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 *     ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x14022FA6C (-SessionCleanup@CTopologyManager@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x14022FBC0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z @ 0x140290280 (-_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402DD620 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DE4F4 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E1C74 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?Delete@CInterceptWindowProp@@UEAAXXZ @ 0x1402E1FA0 (-Delete@CInterceptWindowProp@@UEAAXXZ.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E54FC (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    Win32FreePool(this);
}
