/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x14007C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x14003A0F0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::DeleteSymbolicLinkOverload(FxPkgPdo *this, unsigned __int8 GracefulRemove)
{
  FxDeviceDescriptionEntry *m_Description; // rdi
  KIRQL v4; // al
  FxChildListDescriptionState m_DescriptionState; // ebx

  if ( !GracefulRemove )
  {
    m_Description = this->m_Description;
    v4 = KeAcquireSpinLockRaiseToDpc(&m_Description->m_DeviceList->m_ListLock);
    m_DescriptionState = m_Description->m_DescriptionState;
    KeReleaseSpinLock(&m_Description->m_DeviceList->m_ListLock, v4);
    if ( m_DescriptionState == DescriptionReportedMissing )
      FxDevice::DeleteSymbolicLink(this->m_Device);
  }
}
