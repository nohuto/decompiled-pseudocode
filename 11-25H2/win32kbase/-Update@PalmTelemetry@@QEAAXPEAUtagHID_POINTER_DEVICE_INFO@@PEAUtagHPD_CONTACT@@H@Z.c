/*
 * XREFs of ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010B28C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x140185A2C (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 *     ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1401F5E4C (-_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1401F5EE8 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1401F61DC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall PalmTelemetry::Update(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  unsigned __int64 v8; // rdi
  int v9; // ecx

  if ( (*((_DWORD *)a2 + 92) & 8) == 0 )
  {
    v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)this == 2 && (unsigned int)(v8 - *((_DWORD *)this + 5)) > 0xFA )
    {
      if ( !*((_DWORD *)this + 1) )
        PalmTelemetry::_Report(this, v8);
      PalmTelemetry::_ResetTelemetryData(this);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    v9 = *((_DWORD *)a2 + 6);
    if ( (unsigned int)(v9 - 5) <= 1 )
    {
      PalmTelemetry::_ProcessPenPacket(this, a2, a3, v8);
    }
    else if ( (unsigned int)(v9 - 1) <= 3 )
    {
      PalmTelemetry::_ProcessTouchPacket(this, a2, a3, v8, a4);
    }
  }
}
