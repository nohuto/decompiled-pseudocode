/*
 * XREFs of ?reset@?$_Optional_destruct_base@UMonitorIDFinder@SnapAccessibilityHelpers@@$0A@@std@@QEAAXXZ @ 0x1805B166C
 * Callers:
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805B0564 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x1805B153C (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 * Callees:
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AE654 (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<SnapAccessibilityHelpers::MonitorIDFinder,0>::reset(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    SnapAccessibilityHelpers::MonitorIDFinder::~MonitorIDFinder((void **)a1);
    *(_BYTE *)(a1 + 40) = 0;
  }
}
