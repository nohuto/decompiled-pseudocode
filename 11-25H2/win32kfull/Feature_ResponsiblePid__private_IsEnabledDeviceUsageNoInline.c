/*
 * XREFs of Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x14015C858 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     GetConsoleDesktop @ 0x14019C77C (GetConsoleDesktop.c)
 *     xxxConsoleControl @ 0x1401B62A0 (xxxConsoleControl.c)
 *     xxxWaitForInputIdle @ 0x1401FAC5C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1402484F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140248A50 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 *     xxxActivateDebugger @ 0x14025E0C0 (xxxActivateDebugger.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140297650 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     NtUserGetWindowProcessHandle @ 0x1402995F0 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x14027A1C0 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 */

__int64 Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ResponsiblePid__private_featureState & 0x10) != 0 )
    return Feature_ResponsiblePid__private_featureState & 1;
  else
    return Feature_ResponsiblePid__private_IsEnabledFallback(
             (unsigned int)Feature_ResponsiblePid__private_featureState,
             3LL);
}
