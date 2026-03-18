/*
 * XREFs of GetMouseSensitivity @ 0x14013FC60
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 * Callees:
 *     ?GetMouseSensititivty@CMouseAcceleration@@QEBAIPEAI@Z @ 0x14013FC94 (-GetMouseSensititivty@CMouseAcceleration@@QEBAIPEAI@Z.c)
 */

unsigned int __fastcall GetMouseSensitivity(unsigned int *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  return CMouseAcceleration::GetMouseSensititivty(*(CMouseAcceleration **)(UserSessionState + 16360), a1);
}
