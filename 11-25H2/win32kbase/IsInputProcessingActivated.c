/*
 * XREFs of IsInputProcessingActivated @ 0x140067500
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140039948 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140067380 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     NtMITGetCursorUpdateHandle @ 0x1400BD110 (NtMITGetCursorUpdateHandle.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1400BD170 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020EC30 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1402105B8 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140216BA0 (SetKeyboardInputRoutingPolicy.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputProcessingActivated(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18752);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 8, 0LL);
  v3 = v2 + 8;
  LOBYTE(v2) = *(_DWORD *)(v2 + 16) == 2;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
