/*
 * XREFs of ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x140210E34
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z @ 0x140077D70 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // edx

  v2 = 0;
  if ( *(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 161);
  v5 = *((_DWORD *)this + 3);
  while ( v2 < v5 )
  {
    v6 = (v5 + *((_DWORD *)this + 6) + ~v2) % 0x1AA;
    if ( (unsigned int)(a2 - *((_DWORD *)this + 6 * v6 + 525)) > 0x1F4 )
    {
      *((_DWORD *)this + 3) = v2;
      *((_DWORD *)this + 6) = (v6 + 1) % 0x1AA;
      return;
    }
    ++v2;
  }
}
