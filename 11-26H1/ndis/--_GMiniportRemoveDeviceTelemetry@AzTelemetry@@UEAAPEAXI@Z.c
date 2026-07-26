/*
 * XREFs of ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6DE4 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportRemoveDeviceTelemetry *__fastcall AzTelemetry::MiniportRemoveDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportRemoveDeviceTelemetry *this,
        char a2)
{
  AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
