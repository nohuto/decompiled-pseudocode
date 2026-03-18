/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x14009D200 (NtUserHwndQueryRedirectionInfo.c)
 *     _GetUserObjectInformation @ 0x140113B98 (_GetUserObjectInformation.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     NtUserDwmKernelStartup @ 0x14019CE10 (NtUserDwmKernelStartup.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x14019CEA0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     _BuildNameList @ 0x14019D058 (_BuildNameList.c)
 *     NtUserGetDesktopID @ 0x14019D2C0 (NtUserGetDesktopID.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x14019D3D0 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401CA6D0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     _OpenDesktop @ 0x1401D6EE8 (_OpenDesktop.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x140222650 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     CallerCanSeeImmersiveWindows @ 0x140245484 (CallerCanSeeImmersiveWindows.c)
 *     NtUserDwmValidateWindow @ 0x140248A50 (NtUserDwmValidateWindow.c)
 *     NtUserSignalRedirectionStartComplete @ 0x14026D650 (NtUserSignalRedirectionStartComplete.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140276F60 (EditionIsUsermodeRIMAccessAllowed.c)
 *     NtUserDwmKernelShutdown @ 0x140295EA0 (NtUserDwmKernelShutdown.c)
 *     NtUserDwmWindowNotificationsEnabled @ 0x140295F40 (NtUserDwmWindowNotificationsEnabled.c)
 *     NtUserSetCoveredWindowStates @ 0x14029E850 (NtUserSetCoveredWindowStates.c)
 *     NtUserSetWindowRgnEx @ 0x1402A0A60 (NtUserSetWindowRgnEx.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  return IsProcessDwm(CurrentProcess);
}
