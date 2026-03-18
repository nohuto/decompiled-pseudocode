/*
 * XREFs of ?Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ @ 0x140098BAC
 * Callers:
 *     ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x140098B78 (-Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x140277514 (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DxgMonitor::USB4POFXREF_REF_ACCESSOR::Release(DxgMonitor::USB4POFXREF_REF_ACCESSOR *this)
{
  ReferenceCounted *v2; // rcx

  v2 = (ReferenceCounted *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    ReferenceCounted::Release(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
