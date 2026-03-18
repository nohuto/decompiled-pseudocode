/*
 * XREFs of UpdateMouseSensitivity @ 0x140188F00
 * Callers:
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1401B43F4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0 (BroadcastSettingsUpdateToAllContainers.c)
 */

__int64 __fastcall UpdateMouseSensitivity(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16360);
  if ( v3 - 1 > 0x13 )
    v3 = *(_DWORD *)(v4 + 96);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v4 + 104),
    v3);
  return BroadcastSettingsUpdateToAllContainers();
}
