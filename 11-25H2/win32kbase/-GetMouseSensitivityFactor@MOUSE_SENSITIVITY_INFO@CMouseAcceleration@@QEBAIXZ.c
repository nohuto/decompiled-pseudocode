/*
 * XREFs of ?GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140223E88
 * Callers:
 *     GetNormalizedMouseSensitivityFactor @ 0x1400BCF1C (GetNormalizedMouseSensitivityFactor.c)
 *     GetMouseSensitivity @ 0x140109100 (GetMouseSensitivity.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivityFactor(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this)
{
  if ( (unsigned int)(*(_DWORD *)this - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 541);
  return *((unsigned int *)this + 1);
}
