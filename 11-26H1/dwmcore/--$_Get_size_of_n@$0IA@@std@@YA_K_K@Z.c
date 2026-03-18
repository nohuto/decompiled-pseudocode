/*
 * XREFs of ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801A4FF8
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D6DA4 (--$_Reallocate@$0A@@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLA.c)
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x18019B164 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UDWM_PRESENT_MULTIPLANE_OVE.c)
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x18028FA34 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<128>(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 7;
}
