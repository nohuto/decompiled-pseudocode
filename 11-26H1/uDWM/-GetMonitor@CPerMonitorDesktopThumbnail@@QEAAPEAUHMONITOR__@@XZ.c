/*
 * XREFs of ?GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ @ 0x1800ADBF4
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800ADC00 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     <none>
 */

HMONITOR __fastcall CPerMonitorDesktopThumbnail::GetMonitor(CPerMonitorDesktopThumbnail *this)
{
  return (HMONITOR)*((_QWORD *)this + 7);
}
