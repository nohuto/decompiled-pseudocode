/*
 * XREFs of ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x18006D4DC
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x18006D470 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18002A7D4 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void InputETW::InputTarget::DeliverDeviceEnumerationCompleted(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // rcx

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v0 = InputETW::Provider();
    if ( *(_DWORD *)v0 > 5u && tlgKeywordOn((__int64)v0, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v1,
        byte_18021799C,
        0LL,
        0LL);
  }
}
