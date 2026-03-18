/*
 * XREFs of ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454 (-CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ.c)
 *     ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1401900DC (-CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401DCCD4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1401DCE5C (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1401DCF48 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1401DD034 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401DF0E8 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401DF380 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1401DF920 (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1401F7D40 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetYieldPercentage @ 0x1401F86A0 (DxgkGetYieldPercentage.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140320E04 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x14036E4F8 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E71C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1403B3E1C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     DxgkSessionDisconnected @ 0x1403B4C60 (DxgkSessionDisconnected.c)
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x1403B51B0 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403BB818 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E5904 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403EE83C (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403FFEF8 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x14042FF34 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 * Callees:
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK(DXGAUTOADAPTERLISTLOCK *this)
{
  DXGAUTOADAPTERLISTLOCK::Release(this);
}
