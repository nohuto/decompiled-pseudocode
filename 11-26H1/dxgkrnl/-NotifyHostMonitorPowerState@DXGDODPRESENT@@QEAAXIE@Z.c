/*
 * XREFs of ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x140283780
 * Callers:
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227860 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z @ 0x1402836EC (-NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall DXGDODPRESENT::NotifyHostMonitorPowerState(DXGDODPRESENT *this, unsigned int a2, char a3)
{
  if ( a2 < *(_DWORD *)this )
    BLTQUEUE::NotifyHostMonitorPowerState((BLTQUEUE *)(*((_QWORD *)this + 1) + 3040LL * a2), a3);
}
