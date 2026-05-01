/*
 * XREFs of ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180095A74
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  const char *v4; // r9
  HMONITOR v5; // rdi
  KeyboardHosting::MonitorInformation *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT Point; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 != 6
    || !KeyboardHosting::IsRectNull((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 176), a2) )
  {
    return 0LL;
  }
  Point = 0LL;
  if ( GetCursorPos(&Point) )
  {
    v5 = MonitorFromPoint(Point, 2u);
    *((_QWORD *)this + 29) = v5;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232));
    v6 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 392);
    if ( *((HMONITOR *)this + 49) != v5 )
    {
      *(_QWORD *)v6 = v5;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v6);
    }
    return 0LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x270,
           (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
           v4);
}
