/*
 * XREFs of ??0MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x18059A420
 * Callers:
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x18058C414 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x18059ACC0 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x180599B1C (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBII@std@@PEAX@std@@@std@@@-$_Tree_node@U-$.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x18059A478 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
SnapAccessibilityHelpers::MonitorIDFinder *__fastcall SnapAccessibilityHelpers::MonitorIDFinder::MonitorIDFinder(
        SnapAccessibilityHelpers::MonitorIDFinder *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>();
  SnapAccessibilityHelpers::MonitorIDFinder::BuildMonitorIndex(this);
  return this;
}
