/*
 * XREFs of ?InvokeClient@FxPnpDeviceSurpriseRemoval@@MEAAJXZ @ 0x1400788C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSurpriseRemoval::InvokeClient(FxPowerDeviceWakeFromSxTriggered *this)
{
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_Method = this->m_Method;
  if ( m_Method )
    m_Method(this->m_Device);
  return 0LL;
}
