/*
 * XREFs of ?CancelledByAnotherInvoke@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x1803B8674
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1803BC828 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803BB868 (-Provider@MeetNowTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::CancelledByAnotherInvoke(
        MeetNowTelemetry::ShowFlyoutActivity *this)
{
  const struct _tlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  const GUID *v5; // r8
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v5 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
      v6 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v3,
        byte_1807C92A4,
        v5,
        v4,
        (__int64)&v6);
    }
  }
}
