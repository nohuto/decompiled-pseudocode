/*
 * XREFs of ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x140098B78
 * Callers:
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782E8 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ @ 0x140098BAC (-Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DxgMonitor::USB4POFXREF_REF_ACCESSOR::Assign(
        DxgMonitor::USB4POFXREF_REF_ACCESSOR *this,
        struct DxgMonitor::Usb4HostRouterPoFxRefv2 *a2)
{
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::Release(this);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
