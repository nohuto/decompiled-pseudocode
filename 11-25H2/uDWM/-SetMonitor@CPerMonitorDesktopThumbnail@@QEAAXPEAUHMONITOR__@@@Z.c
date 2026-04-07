/*
 * XREFs of ?SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z @ 0x1800AE81C
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800AE514 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     <none>
 */

void __fastcall CPerMonitorDesktopThumbnail::SetMonitor(CPerMonitorDesktopThumbnail *this, HMONITOR a2)
{
  *((_QWORD *)this + 7) = a2;
}
