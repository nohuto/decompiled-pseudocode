/*
 * XREFs of ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18011EB70
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18005FFD8 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180060E94 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMonitorManager::CaptureMonitor::IsConnectedTo(
        CMonitorManager::CaptureMonitor *this,
        const unsigned __int16 *a2)
{
  _QWORD *v4; // rcx
  char v5; // bl
  _QWORD *v6; // rcx

  v4 = (_QWORD *)((char *)this + 136);
  if ( v4[3] > 7uLL )
    v4 = (_QWORD *)*v4;
  v5 = 0;
  if ( !(unsigned int)_o__wcsnicmp(v4, a2, *((_QWORD *)this + 19)) )
    return 1;
  v6 = (_QWORD *)((char *)this + 168);
  if ( *((_QWORD *)this + 24) > 7uLL )
    v6 = (_QWORD *)*v6;
  if ( !(unsigned int)_o__wcsnicmp(v6, a2, *((_QWORD *)this + 23)) )
    return 1;
  return v5;
}
