/*
 * XREFs of ??1?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAA@XZ @ 0x1805AE530
 * Callers:
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x1805AE5A4 (--1HotkeyHandler@@UEAA@XZ.c)
 * Callees:
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AE654 (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>::~_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>(
        SnapAccessibilityHelpers::MonitorIDFinder *a1)
{
  if ( *((_BYTE *)a1 + 40) )
    SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder(a1);
}
