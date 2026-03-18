/*
 * XREFs of GetActiveTrackPwnd @ 0x140281D18
 * Callers:
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     xxxSystemTimerProc @ 0x140246950 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     zzzActiveCursorTracking @ 0x14028203C (zzzActiveCursorTracking.c)
 * Callees:
 *     IsModelessMenuNotificationWindow @ 0x14003F08C (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1401CB488 (DWP_GetEnabledPopup.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140259B58 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall GetActiveTrackPwnd(const struct tagWND *a1, __int64 a2)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1, a2) )
    return 0LL;
  LOBYTE(v4) = *(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0;
  if ( (_BYTE)v4 == 64 )
  {
    do
    {
      EnabledPopup = (struct tagWND *)*((_QWORD *)EnabledPopup + 13);
      LOBYTE(v3) = *(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0;
    }
    while ( (_BYTE)v3 == 64 );
  }
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)EnabledPopup + 2) + 472LL);
  if ( v5 == *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888)
    && (EnabledPopup == *(struct tagWND **)(v5 + 128)
     || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)EnabledPopup + 3) + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
