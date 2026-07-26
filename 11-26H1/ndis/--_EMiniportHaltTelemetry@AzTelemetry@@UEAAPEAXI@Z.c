/*
 * XREFs of ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E6F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x140070410 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 */

AzTelemetry::MiniportHaltTelemetry *__fastcall AzTelemetry::MiniportHaltTelemetry::`vector deleting destructor'(
        AzTelemetry::MiniportHaltTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
