/*
 * XREFs of ??1FxAutoIrp@@QEAA@XZ @ 0x140069E88
 * Callers:
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1400645D0 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A857C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoIrp::~FxAutoIrp(FxAutoIrp *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
}
