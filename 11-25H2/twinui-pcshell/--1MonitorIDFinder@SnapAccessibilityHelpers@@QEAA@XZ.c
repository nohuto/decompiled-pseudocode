/*
 * XREFs of ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x18058A508
 * Callers:
 *     ??1?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAA@XZ @ 0x18058A3F0 (--1-$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAA@XZ.c)
 *     ?reset@?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAAXXZ @ 0x18058D444 (-reset@-$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAAXXZ.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x18059ACC0 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 *     _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806D2565 (_SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCo_ea_1806D2565.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x18058A1BC (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder(void **this)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,unsigned int>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
    this + 3,
    (__int64)(this + 3));
  if ( *this )
  {
    std::_Deallocate<16,0>(
      *this,
      (const struct std::nothrow_t *)(((_BYTE *)this[2] - (_BYTE *)*this) & 0xFFFFFFFFFFFFFFC0uLL));
    *this = 0LL;
    this[1] = 0LL;
    this[2] = 0LL;
  }
}
