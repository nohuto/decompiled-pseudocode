/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8
 * Callers:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??1CRecalcState@@UEAA@XZ @ 0x140023D64 (--1CRecalcState@@UEAA@XZ.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x140028254 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x140028434 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14002860C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     EditionDriverUninitialize @ 0x1401F90E0 (EditionDriverUninitialize.c)
 *     ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x1401F925C (-SessionCleanup@CTopologyManager@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F93B0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140206524 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x14021E9D8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z @ 0x14026AC40 (-_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z.c)
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402C392C (--1CRecalcProp@@AEAA@XZ.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402C4134 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C58A8 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CAB40 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?Delete@CInterceptWindowProp@@UEAAXXZ @ 0x1402CAE60 (-Delete@CInterceptWindowProp@@UEAAXXZ.c)
 *     ?SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CCCB8 (-SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindo.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    Win32FreePool(this);
}
