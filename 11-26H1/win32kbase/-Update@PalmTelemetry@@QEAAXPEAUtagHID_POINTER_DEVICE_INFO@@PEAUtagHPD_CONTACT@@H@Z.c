/*
 * XREFs of ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x140077CD4 (-_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@.c)
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x140077D70 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x140210EE0 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1402111E0 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall PalmTelemetry::Update(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx

  if ( (*((_DWORD *)a2 + 92) & 8) == 0 )
  {
    v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)this == 2 && (unsigned int)(v8 - *((_DWORD *)this + 5)) > 0xFA )
    {
      if ( !*((_DWORD *)this + 1) )
        PalmTelemetry::_Report(this, v8);
      PalmTelemetry::_ResetTelemetryData(this);
      *(_QWORD *)this = 0LL;
    }
    if ( (unsigned int)RIMIsPenPointerDevice((__int64)a2) == 1 )
    {
      PalmTelemetry::_ProcessPenPacket(this, a2, a3, v8);
    }
    else if ( (unsigned int)RIMIsTouchPointerDevice(v9) == 1 )
    {
      PalmTelemetry::_ProcessTouchPacket(this, a2, a3, v8, a4);
    }
  }
}
