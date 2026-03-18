/*
 * XREFs of ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74
 * Callers:
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x14015FD84 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 */

CThreadLockedCurrentMonitorTopologyPtr *__fastcall CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
        CThreadLockedCurrentMonitorTopologyPtr *this,
        __int64 a2)
{
  struct CMonitorTopology *Current; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax

  Current = CTopologyManager::GetCurrent((__int64)this, a2);
  *(_QWORD *)this = Current;
  if ( Current )
  {
    v5 = PtiCurrent(v4);
    *((_QWORD *)this + 1) = *((_QWORD *)v5 + 47);
    *((_QWORD *)v5 + 47) = (char *)this + 8;
    *((_QWORD *)this + 3) = _lambda_27f747716261ed0f75ba1156a6124405_::_lambda_invoker_cdecl_;
    *((_QWORD *)this + 2) = this;
  }
  return this;
}
