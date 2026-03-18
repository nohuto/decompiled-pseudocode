/*
 * XREFs of ??$emplace_back@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x1802906C4
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x18028FA34 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x180290890 (--0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z.c)
 */

char *__fastcall std::vector<CCursorState::MonitorData>::emplace_back<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(a1, v3, a2);
  CCursorState::MonitorData::MonitorData(v3, a2);
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = v5 + 128;
  return (char *)v5;
}
