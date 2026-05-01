/*
 * XREFs of ?EnteredUsingHotkey@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAXXZ @ 0x180346614
 * Callers:
 *     _lambda_a7727f50da9d713bf735f2c71ec0999f_::operator() @ 0x1803448E0 (_lambda_a7727f50da9d713bf735f2c71ec0999f_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180350F68 (-Provider@GamingPostureUXTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::EnteredUsingHotkey(
        GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *this)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  const GUID *v5; // r8
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = GamingPostureUXTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v5 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
      v6 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v3,
        byte_1807EB45D,
        v5,
        v4,
        (__int64)&v6);
    }
  }
}
