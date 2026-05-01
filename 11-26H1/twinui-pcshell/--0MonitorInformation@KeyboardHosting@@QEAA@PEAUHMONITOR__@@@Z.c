/*
 * XREFs of ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x18024E054
 * Callers:
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18024E5EC (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024E9C0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180485280 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 * Callees:
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 */

KeyboardHosting::MonitorInformation *__fastcall KeyboardHosting::MonitorInformation::MonitorInformation(
        KeyboardHosting::MonitorInformation *this,
        HMONITOR a2)
{
  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_DWORD *)this + 10) = 100;
  *(_OWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 24) = 100;
  *((_QWORD *)this + 11) = 0LL;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *(_OWORD *)((char *)this + 116) = 0LL;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)this, a2);
  return this;
}
