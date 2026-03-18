/*
 * XREFs of ?IsSimulatedMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1403B5EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsSimulatedMonitor(DXGMONITOR *this)
{
  return *((_DWORD *)this + 66) != 1;
}
