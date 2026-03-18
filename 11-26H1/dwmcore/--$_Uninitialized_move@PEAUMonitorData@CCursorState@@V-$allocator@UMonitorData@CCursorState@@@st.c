/*
 * XREFs of ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18029052C
 * Callers:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x18028FA34 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18028F884 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x180290890 (--0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move<CCursorState::MonitorData *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      CCursorState::MonitorData::MonitorData(a3, v5);
      a3 += v6;
      v5 = v6 + v7;
    }
    while ( v5 != v8 );
  }
  std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(a3, a3);
  return a3;
}
