/*
 * XREFs of ?TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z @ 0x1801C9EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::TelemetrySetConsumerProcessId(
        CGlobalCompositionSurfaceInfo *this,
        int a2)
{
  *((_DWORD *)this + 102) = a2;
}
