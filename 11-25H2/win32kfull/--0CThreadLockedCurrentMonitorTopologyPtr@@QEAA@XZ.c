/*
 * XREFs of ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140227B24
 * Callers:
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

CThreadLockedCurrentMonitorTopologyPtr *__fastcall CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
        CThreadLockedCurrentMonitorTopologyPtr *this,
        __int64 a2)
{
  struct CMonitorTopology *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax

  Current = CTopologyManager::GetCurrent((__int64)this, a2);
  *(_QWORD *)this = Current;
  if ( Current )
  {
    v6 = PtiCurrent(v5, v4);
    *((_QWORD *)this + 1) = *((_QWORD *)v6 + 48);
    *((_QWORD *)v6 + 48) = (char *)this + 8;
    *((_QWORD *)this + 3) = _lambda_27f747716261ed0f75ba1156a6124405_::_lambda_invoker_cdecl_;
    *((_QWORD *)this + 2) = this;
  }
  return this;
}
