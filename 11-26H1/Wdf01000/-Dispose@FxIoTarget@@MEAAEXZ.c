/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1400386B0
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x14009E3F0 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x14009F880 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14003842C (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}
