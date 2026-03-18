/*
 * XREFs of DxgkEngNotifyDisplayChange @ 0x1400ACA40
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     UserNotifyDisplayChange @ 0x1400AC800 (UserNotifyDisplayChange.c)
 */

__int64 __fastcall DxgkEngNotifyDisplayChange(__int64 a1)
{
  __int64 v1; // rax

  if ( (_BYTE)a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL);
    if ( v1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 1573520));
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness(a1);
  }
  return UserNotifyDisplayChange();
}
