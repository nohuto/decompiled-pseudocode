/*
 * XREFs of ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x1400078C0
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxIoTargetRemote::RegisterForPnpNotification(FxIoTargetRemote *this)
{
  return IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           this->m_TargetFileObject,
           this->m_Driver->m_DriverObject.m_DriverObject,
           FxIoTargetRemote::_PlugPlayNotification,
           this,
           &this->m_TargetNotifyHandle);
}
