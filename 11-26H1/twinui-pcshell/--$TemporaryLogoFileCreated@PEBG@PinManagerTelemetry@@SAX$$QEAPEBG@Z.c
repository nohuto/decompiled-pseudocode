/*
 * XREFs of ??$TemporaryLogoFileCreated@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805ED8C8
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800232A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180283940 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall PinManagerTelemetry::TemporaryLogoFileCreated<unsigned short const *>(const WCHAR **a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v6 = *a1;
    v5 = 0x1000000LL;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                    (__int64)v2,
                    byte_1808283FA,
                    0LL,
                    v3,
                    &v6,
                    (__int64)&v5);
  }
  return (int)v2;
}
