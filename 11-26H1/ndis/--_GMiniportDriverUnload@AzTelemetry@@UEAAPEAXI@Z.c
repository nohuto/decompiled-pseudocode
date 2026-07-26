/*
 * XREFs of ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F000
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x14008DAB0 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 */

LARGE_INTEGER *__fastcall AzTelemetry::MiniportDriverUnload::`scalar deleting destructor'(LARGE_INTEGER *this, char a2)
{
  AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
