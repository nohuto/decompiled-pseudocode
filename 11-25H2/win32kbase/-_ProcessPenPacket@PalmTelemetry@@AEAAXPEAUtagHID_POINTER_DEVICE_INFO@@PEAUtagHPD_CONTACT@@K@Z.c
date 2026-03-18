/*
 * XREFs of ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x140185A2C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010B28C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x140123370 (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1401F5D94 (-_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z.c)
 */

void __fastcall PalmTelemetry::_ProcessPenPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        unsigned int a4)
{
  int v8; // esi
  int v9; // eax

  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 220LL);
  v8 = 0;
  if ( (*((_DWORD *)a3 + 611) & 2) != 0 )
  {
    v9 = *(_DWORD *)this;
    if ( *(_DWORD *)this == 1 )
    {
      v8 = 1;
    }
    else
    {
      if ( !v9 )
        goto LABEL_12;
      if ( v9 != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 247LL);
      if ( !*(_DWORD *)this )
      {
LABEL_12:
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
    PalmTelemetry::_BufferPenPacket(this, (__int64)a3, *((_DWORD *)a2 + 6));
    *((_DWORD *)this + 2) = v8;
  }
}
