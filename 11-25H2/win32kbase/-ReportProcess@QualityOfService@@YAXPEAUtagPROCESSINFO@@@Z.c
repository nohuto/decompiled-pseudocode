/*
 * XREFs of ?ReportProcess@QualityOfService@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8850
 * Callers:
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140166FA8 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 * Callees:
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A875C (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall QualityOfService::ReportProcess(QualityOfService *this, struct tagPROCESSINFO *a2)
{
  CQoSReport::ReportProcess(*(CQoSReport **)(*((_QWORD *)this + 148) + 41304LL), this);
}
