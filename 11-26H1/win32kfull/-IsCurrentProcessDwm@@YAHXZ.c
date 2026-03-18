/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 *     _GetUserObjectInformation @ 0x14005A700 (_GetUserObjectInformation.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     _OpenDesktop @ 0x14018ACD8 (_OpenDesktop.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1401A0CE0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     NtUserGetDesktopID @ 0x1401A1D70 (NtUserGetDesktopID.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1401A1E70 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserDwmKernelStartup @ 0x140257770 (NtUserDwmKernelStartup.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     _BuildNameList @ 0x140259840 (_BuildNameList.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x140259DE0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     CallerCanSeeImmersiveWindows @ 0x14025CC4C (CallerCanSeeImmersiveWindows.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x14025F020 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserSetCoveredWindowStates @ 0x14027A070 (NtUserSetCoveredWindowStates.c)
 *     NtUserSignalRedirectionStartComplete @ 0x140294DB0 (NtUserSignalRedirectionStartComplete.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x14029CF80 (EditionIsUsermodeRIMAccessAllowed.c)
 *     NtUserDwmKernelShutdown @ 0x1402B1860 (NtUserDwmKernelShutdown.c)
 *     NtUserDwmWindowNotificationsEnabled @ 0x1402B1900 (NtUserDwmWindowNotificationsEnabled.c)
 *     NtUserSetWindowRgnEx @ 0x1402BE780 (NtUserSetWindowRgnEx.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  return IsProcessDwm(CurrentProcess);
}
