/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x140076A98
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x140076A40 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x140076A80 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::RemoveWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx

  m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
  if ( m_SetDeviceFailedAttemptRestartWorkItem )
  {
    m_SetDeviceFailedAttemptRestartWorkItem->DeleteObject(m_SetDeviceFailedAttemptRestartWorkItem);
    this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  }
}
