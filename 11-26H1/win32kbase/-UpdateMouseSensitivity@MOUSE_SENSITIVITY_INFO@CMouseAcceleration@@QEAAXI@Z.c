/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1401B43F4
 * Callers:
 *     UpdateMouseSensitivity @ 0x140188F00 (UpdateMouseSensitivity.c)
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225744 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax

  if ( a2 - 1 > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 525LL);
  *(_DWORD *)this = a2;
  v4 = a2 << 8;
  if ( a2 > 2 )
  {
    if ( a2 > 0xA )
      v5 = (v4 - 1536) >> 2;
    else
      v5 = (v4 - 512) >> 3;
  }
  else
  {
    v5 = (8 * a2) & 0x7FFFFFF;
  }
  *((_DWORD *)this + 1) = v5;
}
