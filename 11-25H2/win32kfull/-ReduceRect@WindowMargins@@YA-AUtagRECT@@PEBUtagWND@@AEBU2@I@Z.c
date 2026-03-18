/*
 * XREFs of ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140250420 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     EditionTransformIvTouchInput @ 0x140292400 (EditionTransformIvTouchInput.c)
 *     EditionTransformPointForIvSpatialInput @ 0x1402924E0 (EditionTransformPointForIvSpatialInput.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A7000 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402A7804 (-IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A81F8 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D4544 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014EEC8 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

struct tagRECT *__fastcall WindowMargins::ReduceRect(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3,
        const struct tagRECT *a4)
{
  __int64 WindowMargins; // rax
  int v7; // ecx

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(retstr, (unsigned int)a4);
  *(_DWORD *)this = *(_DWORD *)a3 + (__int16)WindowMargins;
  v7 = *((_DWORD *)a3 + 2) - SWORD1(WindowMargins);
  *((_DWORD *)this + 1) = *((_DWORD *)a3 + 1) + SWORD2(WindowMargins);
  *((_DWORD *)this + 2) = v7;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 3) - SHIWORD(WindowMargins);
  return (struct tagRECT *)this;
}
