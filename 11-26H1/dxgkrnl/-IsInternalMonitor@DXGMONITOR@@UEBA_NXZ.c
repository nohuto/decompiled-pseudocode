/*
 * XREFs of ?IsInternalMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1404222D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsInternalMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 160) & 2) != 0;
}
