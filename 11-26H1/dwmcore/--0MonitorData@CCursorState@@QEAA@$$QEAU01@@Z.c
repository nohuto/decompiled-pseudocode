/*
 * XREFs of ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x180290890
 * Callers:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x18028FA34 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18029052C (--$_Uninitialized_move@PEAUMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@st.c)
 *     ??$emplace_back@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x1802906C4 (--$emplace_back@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$allocator@UMo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorState::MonitorData::MonitorData(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 28) = *(_OWORD *)(a2 + 28);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(a1 + 60) = *(_OWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_BYTE *)(a1 + 124) = *(_BYTE *)(a2 + 124);
  *(_BYTE *)(a1 + 125) = *(_BYTE *)(a2 + 125);
  return a1;
}
