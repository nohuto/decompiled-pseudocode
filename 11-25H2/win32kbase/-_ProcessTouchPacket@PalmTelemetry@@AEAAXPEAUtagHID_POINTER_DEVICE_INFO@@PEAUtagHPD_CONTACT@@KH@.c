/*
 * XREFs of ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1401F5E4C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010B28C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1401233E4 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PalmTelemetry::_ProcessTouchPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        unsigned int a4,
        int a5)
{
  int v8; // eax

  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 289);
  if ( !*((_DWORD *)this + 1) )
  {
    v8 = *((_DWORD *)a3 + 611) & 4;
    if ( a5 )
    {
      if ( !v8 )
        return;
    }
    else if ( v8 )
    {
      return;
    }
    PalmTelemetry::_TryBuffer(this, a3, *((_DWORD *)a2 + 6));
  }
}
