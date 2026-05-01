/*
 * XREFs of ??$IgnoredDisplaySettingsChange@AEBKAEAY0BA@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEBKAEAY0BA@$$CBG@Z @ 0x1804F431C
 * Callers:
 *     _lambda_61aaaea7faa44b78167a0b42c2312525_::operator() @ 0x1804F7D5C (_lambda_61aaaea7faa44b78167a0b42c2312525_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FE20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::IgnoredDisplaySettingsChange<unsigned long const &,unsigned short const (&)[16]>(
        _DWORD *a1,
        __int64 a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a2;
  v3 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v8 = L"No primary view";
    LODWORD(v7) = *a1;
    LODWORD(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                    (__int64)v3,
                    byte_180815289,
                    v4,
                    v5,
                    (__int64)&v7,
                    &v8);
  }
  return (int)v3;
}
