/*
 * XREFs of ??0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@PEAUPOHANDLE__@@I@Z @ 0x140277448
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorUsb4State *__fastcall DxgMonitor::MonitorUsb4State::MonitorUsb4State(
        DxgMonitor::MonitorUsb4State *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        struct DXGKMON_USB4_HOSTROUTER_INFO *a3,
        struct POHANDLE__ *a4,
        unsigned int a5)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 9) = retaddr;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 15) = a5;
  *((_QWORD *)this + 8) = a4;
  if ( a3 )
  {
    *((_BYTE *)this + 8) = 1;
    *(_OWORD *)((char *)this + 12) = *(_OWORD *)a3;
    *((_QWORD *)this + 6) = *((_QWORD *)a3 + 3);
    *((_WORD *)this + 20) = *((_WORD *)a3 + 8);
    *((_WORD *)this + 21) = *((_WORD *)a3 + 9);
  }
  return this;
}
