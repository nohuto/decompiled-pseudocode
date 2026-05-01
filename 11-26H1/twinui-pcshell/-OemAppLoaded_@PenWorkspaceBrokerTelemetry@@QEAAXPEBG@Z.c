/*
 * XREFs of ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803ECBCC
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803EA94C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803ECE5C (-Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded_(const WCHAR *this, const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // r9
  const WCHAR *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  v3 = PenWorkspaceBrokerLogging::Provider();
  v4 = (__int64)v3;
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v7 = SQM::CensorAppID(a2, v5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v4,
        byte_1807FFFFA,
        0LL,
        v6,
        &v7);
    }
  }
}
