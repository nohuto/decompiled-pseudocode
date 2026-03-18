/*
 * XREFs of GetMouseSensitivity @ 0x140109100
 * Callers:
 *     PackMouseSettings @ 0x140217138 (PackMouseSettings.c)
 *     UnpackMouseSettings @ 0x140217504 (UnpackMouseSettings.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140223E48 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140223E88 (-GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

unsigned int __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16368);
  if ( a1 )
    *a1 = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivityFactor((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v3 + 104));
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v3 + 104));
}
