/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGMONITOR@@UEBA_NXZ @ 0x140276170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsUsingDefaultMonitorProfile(DXGMONITOR *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 27) + 116LL);
}
