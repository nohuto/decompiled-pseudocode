/*
 * XREFs of ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1400946C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140036A80 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14003840C (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140038C0C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxMpDevice::Dispose(FxMpDevice *this)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // r8
  FxDisposeList *m_DisposeList; // rcx
  unsigned __int8 result; // al

  FxObject::CallCleanup(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, v2, v3);
  ObfDereferenceObject(this->m_DeviceObject.m_DeviceObject);
  result = 0;
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  return result;
}
