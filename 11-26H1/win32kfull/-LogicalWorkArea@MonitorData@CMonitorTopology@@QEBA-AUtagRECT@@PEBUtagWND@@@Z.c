/*
 * XREFs of ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402DE638 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402E78AC (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalWorkArea(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  __m128i v4; // xmm0
  struct tagRECT *result; // rax
  __m128i v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = *CalculateLogicalMonitorRect(
          &v6,
          (__m128i *)((char *)this + 24),
          *((_WORD *)this + 20),
          (*(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8) & 0x1FF,
          *((_WORD *)this + 32));
  result = retstr;
  *retstr = (struct tagRECT)v4;
  return result;
}
