/*
 * XREFs of ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x18023FDF0
 * Callers:
 *     ?SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x18057E170 (-SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOp.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1801DD7DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

int __fastcall CSnapComponentTelemetry::SetDeferredZOrderOnSnap<unsigned __int64 &,unsigned __int64 &>(
        __int64 *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *a2;
    v9 = *a1;
    v8 = v6;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    (__int64)v4,
                    byte_1807E60E9,
                    0LL,
                    v5,
                    (__int64)&v9,
                    (__int64)&v8);
  }
  return (int)v4;
}
