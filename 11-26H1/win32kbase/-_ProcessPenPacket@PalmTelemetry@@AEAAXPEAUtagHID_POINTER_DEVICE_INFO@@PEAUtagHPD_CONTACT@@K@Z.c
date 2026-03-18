/*
 * XREFs of ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x140077D70
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1400796A4 (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x140210E34 (-_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z.c)
 */

void __fastcall PalmTelemetry::_ProcessPenPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        unsigned int a4)
{
  int v8; // esi
  __int64 v9; // r8
  int v10; // r9d

  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 220LL);
  v8 = 0;
  if ( (*((_DWORD *)a3 + 611) & 2) != 0 )
  {
    if ( *(_DWORD *)this == 1 )
    {
      v8 = 1;
    }
    else
    {
      if ( (*(_DWORD *)this & 0xFFFFFFFD) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 247LL);
      if ( !*(_DWORD *)this )
      {
        PalmTelemetry::_DiscardOldTouchPackets(this, a4);
        if ( *((_DWORD *)this + 3) )
          *((_DWORD *)this + 519) = a4 - *((_DWORD *)this + 6 * *((unsigned int *)this + 6) + 525);
        else
          *((_DWORD *)this + 519) = 0;
      }
      *(_DWORD *)this = 1;
      *((_DWORD *)this + 5) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 5) = a4;
    *(_DWORD *)this = 2;
  }
  if ( !*((_DWORD *)this + 1) )
  {
    v9 = *((unsigned int *)a2 + 6);
    if ( *((_DWORD *)this + 2) == 1 )
    {
      v10 = *((_DWORD *)this + 3);
      if ( v10 )
      {
        if ( (unsigned int)(*((_DWORD *)this + 6 * ((v10 + *((_DWORD *)this + 6) - 1) % 0x1AAu) + 520) - 5) <= 1 )
          *((_DWORD *)this + 3) = v10 - 1;
      }
    }
    PalmTelemetry::_TryBuffer(this, a3, v9);
    *((_DWORD *)this + 2) = v8;
  }
}
