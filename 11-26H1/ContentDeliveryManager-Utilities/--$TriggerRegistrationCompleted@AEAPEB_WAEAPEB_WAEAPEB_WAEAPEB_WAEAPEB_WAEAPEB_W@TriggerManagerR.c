/*
 * XREFs of ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18007B28C
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18007A3F0 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@33333AEBU?$_tlgWrapSz@D@@@Z @ 0x180002CCC (--$Write@U-$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 */

char __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
        const wchar_t **a1,
        const wchar_t **a2,
        const wchar_t **a3,
        const wchar_t **a4,
        const wchar_t **a5,
        const wchar_t **a6,
        const wchar_t *a7)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  const wchar_t *v15; // rcx
  const wchar_t *v17; // [rsp+68h] [rbp-1h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp+7h] BYREF
  const wchar_t *v19; // [rsp+78h] [rbp+Fh] BYREF
  const wchar_t *v20; // [rsp+80h] [rbp+17h] BYREF
  const wchar_t *v21; // [rsp+88h] [rbp+1Fh] BYREF
  const wchar_t *v22; // [rsp+90h] [rbp+27h] BYREF
  const wchar_t *v23; // [rsp+98h] [rbp+2Fh] BYREF

  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v11 > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)v11, 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v17 = a7;
      v18 = *a6;
      v15 = *a5;
      v20 = *a4;
      v21 = *a3;
      v22 = *a2;
      v23 = *a1;
      v19 = v15;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
                      v14,
                      byte_180166B7D,
                      v12,
                      v13,
                      &v23,
                      &v22,
                      &v21,
                      &v20,
                      &v19,
                      &v18,
                      &v17);
    }
  }
  return (char)v11;
}
