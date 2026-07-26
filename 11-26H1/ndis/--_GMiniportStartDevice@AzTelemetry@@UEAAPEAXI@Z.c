/*
 * XREFs of ??_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1400E6E80 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportStartDevice *__fastcall AzTelemetry::MiniportStartDevice::`scalar deleting destructor'(
        AzTelemetry::MiniportStartDevice *this,
        char a2)
{
  AzTelemetry::MiniportStartDevice::~MiniportStartDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
