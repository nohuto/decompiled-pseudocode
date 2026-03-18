/*
 * XREFs of ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C5B14
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

void __fastcall AdvancedWindowPos::CWindowAction::SetPreviousMonitorData(
        AdvancedWindowPos::CWindowAction *this,
        const struct CMonitorTopology::MonitorData *a2,
        struct tagWND *a3)
{
  __m128i v6; // xmm6
  __int128 v7; // xmm0
  int v8; // ecx
  int v9; // eax
  struct tagRECT v10; // [rsp+30h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 1) & 0x400) != 0 )
  {
    v6 = *CalculateLogicalMonitorRect(
            (__m128i *)&v10,
            (__m128i *)((char *)a2 + 8),
            *((_WORD *)a2 + 20),
            (*(_DWORD *)(*((_QWORD *)a3 + 5) + 288LL) >> 8) & 0x1FF,
            *((_WORD *)a2 + 32));
    v7 = (__int128)*CMonitorTopology::MonitorData::LogicalWorkArea(a2, &v10, a3);
  }
  else
  {
    v6 = *(__m128i *)((char *)a2 + 8);
    v7 = *(_OWORD *)((char *)a2 + 24);
  }
  v8 = *((_DWORD *)this + 1) | 0x4080;
  *(_OWORD *)((char *)this + 60) = v7;
  *((_DWORD *)this + 1) = v8;
  *(__m128i *)((char *)this + 76) = v6;
  v9 = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 1) = v8 | 0x8000;
  *((_DWORD *)this + 23) = v9;
}
