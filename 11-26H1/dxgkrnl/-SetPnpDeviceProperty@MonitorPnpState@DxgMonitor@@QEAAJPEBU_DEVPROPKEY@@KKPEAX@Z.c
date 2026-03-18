/*
 * XREFs of ?SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z @ 0x140414698
 * Callers:
 *     ?OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z @ 0x1401942FC (-OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z.c)
 *     ?UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1403E2098 (-UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
        PDEVICE_OBJECT *this,
        const struct _DEVPROPKEY *a2,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  if ( *((_BYTE *)this + 16) )
    return IoSetDevicePropertyData(this[1], a2, 0, 0, Type, Size, Data);
  else
    return -1073741275;
}
