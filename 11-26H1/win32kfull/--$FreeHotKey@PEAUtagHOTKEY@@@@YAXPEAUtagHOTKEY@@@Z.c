/*
 * XREFs of ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720
 * Callers:
 *     DestroyThreadsHotKeys @ 0x14018D150 (DestroyThreadsHotKeys.c)
 *     DestroyWindowsHotKeys @ 0x14018D328 (DestroyWindowsHotKeys.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468 (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FreeHotKey<tagHOTKEY *>(signed __int16 *a1)
{
  if ( *(_QWORD *)a1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 944LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 168LL);
    --*(_DWORD *)(*(_QWORD *)a1 + 944LL);
  }
  else if ( !_bittest16(a1 + 17, 8u) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 175LL);
  }
  Win32FreePool(a1);
}
