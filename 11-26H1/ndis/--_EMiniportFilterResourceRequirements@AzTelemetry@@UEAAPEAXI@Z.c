/*
 * XREFs of ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400E6D30 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportFilterResourceRequirements *__fastcall AzTelemetry::MiniportFilterResourceRequirements::`vector deleting destructor'(
        AzTelemetry::MiniportFilterResourceRequirements *this,
        char a2)
{
  AzTelemetry::MiniportFilterResourceRequirements::~MiniportFilterResourceRequirements(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
