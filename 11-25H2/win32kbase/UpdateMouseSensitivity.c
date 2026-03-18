/*
 * XREFs of UpdateMouseSensitivity @ 0x1400A7080
 * Callers:
 *     UnpackMouseSettings @ 0x140217504 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1400A8400 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x140223EC8 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

__int64 __fastcall UpdateMouseSensitivity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = a1;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16368);
  if ( v2 - 1 > 0x13 )
    v2 = *(_DWORD *)(v3 + 96);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v3 + 104),
    v2);
  return BroadcastSettingsUpdateToAllContainers();
}
