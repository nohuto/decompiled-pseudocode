/*
 * XREFs of ??$RequestContextCreatedExplicit@PEAGPEAG@PinManagerTelemetry@@SAX$$QEAPEAG0@Z @ 0x1805BC878
 * Callers:
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805C19DC (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F3848 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802901A4 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall PinManagerTelemetry::RequestContextCreatedExplicit<unsigned short *,unsigned short *>(
        const WCHAR **a1,
        const WCHAR **a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // rdx
  const WCHAR *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  const WCHAR *v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v7 = *a2;
    v9 = *a1;
    v11 = v7;
    v10 = 0x1000000LL;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                    (__int64)v4,
                    byte_1807EAD54,
                    v5,
                    v6,
                    &v9,
                    &v11,
                    (__int64)&v10);
  }
  return (int)v4;
}
