/*
 * XREFs of ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6C7C (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportAddDeviceTelemetry *__fastcall AzTelemetry::MiniportAddDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportAddDeviceTelemetry *this,
        char a2)
{
  AzTelemetry::MiniportAddDeviceTelemetry::~MiniportAddDeviceTelemetry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
