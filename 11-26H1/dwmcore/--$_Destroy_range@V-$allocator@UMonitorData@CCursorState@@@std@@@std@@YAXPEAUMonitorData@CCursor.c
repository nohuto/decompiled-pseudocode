/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18028F884
 * Callers:
 *     ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18029052C (--$_Uninitialized_move@PEAUMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@st.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x18029096C (--1CCursorState@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA@XZ @ 0x180290AFC (--1_Reallocation_guard@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorStat.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802912E8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAXQEAUMonitorData@CCursorState@@_K1@Z @ 0x1802925C4 (-_Change_array@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 104);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 128LL;
    }
    while ( v3 != a2 );
  }
}
