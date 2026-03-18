/*
 * XREFs of IAMThreadAccessGranted @ 0x14015C7E0
 * Callers:
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 *     NtUserSendEventMessage @ 0x14015C0A0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x14015C1B0 (NtUserSetActivationFilter.c)
 *     NtUserRegisterHotKey @ 0x14015C270 (NtUserRegisterHotKey.c)
 *     NtUserAllowSetForegroundWindow @ 0x14015C5F0 (NtUserAllowSetForegroundWindow.c)
 *     ValidateHwndIAM @ 0x14015C6C4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x14015C728 (ValidateHwndIAMComponetUIAware.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x14015D154 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402454F8 (ExemptedFromImmersiveRestrictions.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserRegisterForCustomDockTargets @ 0x14024C3D0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _SetCancelRotationDelayHintWindow @ 0x14027A318 (_SetCancelRotationDelayHintWindow.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x140291180 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 *     NtUserClearForeground @ 0x140294CC0 (NtUserClearForeground.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x140296000 (NtUserEnableShellWindowManagementBehavior.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x1402961A0 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140299A90 (NtUserGetWindowTrackInfoAsync.c)
 *     NtUserSetBridgeWindowChild @ 0x14029E030 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 *     NtUserSetWindowShowState @ 0x1402A0BF0 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 *     NtUserSuppressWindowDisplayChange @ 0x1402A27D0 (NtUserSuppressWindowDisplayChange.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A3250 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x14015C818 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rdx
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *((_QWORD *)a1 + 62);
  return result;
}
