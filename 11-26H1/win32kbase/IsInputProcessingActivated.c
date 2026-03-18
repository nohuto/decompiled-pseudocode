/*
 * XREFs of IsInputProcessingActivated @ 0x1400D10D0
 * Callers:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14008B63C (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x14013DF50 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14013E518 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     SetKeyboardInputRoutingPolicy @ 0x14013E69C (SetKeyboardInputRoutingPolicy.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z @ 0x1401992A8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z.c)
 *     NtMITGetCursorUpdateHandle @ 0x14019C080 (NtMITGetCursorUpdateHandle.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140224C2C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInputProcessingActivated(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18800);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3 + 8, 0LL);
  v4 = v3 + 8;
  LOBYTE(v3) = *(_DWORD *)(v3 + 16) == 2;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
