/*
 * XREFs of ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14003C0F8
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001E164 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x14003A9E4 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateTargetIoType@FxIoTarget@@QEAAXXZ @ 0x14003CA30 (-UpdateTargetIoType@FxIoTarget@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043578 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140044A3C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

void __fastcall FxDevice::SetFilterIoType(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned int Flags; // ecx
  FxTransactionedEntry *i; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedEntry *v6; // rdi
  FxIoTarget *m_TransactionedObject; // rcx

  this->m_DeviceObject.m_DeviceObject->Flags &= 0xFFFFFFEB;
  m_DeviceObject = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( m_DeviceObject )
    this->m_DeviceObject.m_DeviceObject->Flags |= m_DeviceObject->Flags & 0x14;
  Flags = this->m_DeviceObject.m_DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
    this->m_ReadWriteIoType = WdfDeviceIoBuffered;
  else
    this->m_ReadWriteIoType = (Flags & 0x10 | 8) >> 3;
  FxTransactionedList::LockForEnum(&this->m_IoTargetsList, this->m_Globals);
  for ( i = 0LL; ; i = v6 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_IoTargetsList, i);
    v6 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    m_TransactionedObject = (FxIoTarget *)NextEntryLocked->m_TransactionedObject;
    if ( m_TransactionedObject->m_TargetPdo == this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject )
      FxIoTarget::UpdateTargetIoType(m_TransactionedObject);
  }
  FxTransactionedList::UnlockFromEnum(&this->m_IoTargetsList, this->m_Globals);
}
