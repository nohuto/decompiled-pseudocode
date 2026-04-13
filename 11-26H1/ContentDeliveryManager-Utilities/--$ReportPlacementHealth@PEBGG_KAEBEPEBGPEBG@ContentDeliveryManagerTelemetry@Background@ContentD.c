/*
 * XREFs of ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180048544
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F91C (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x180001DA8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 */

char ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        const wchar_t **a1,
        __int16 *a2,
        __int64 *a3,
        ...)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *v9; // rcx
  __int16 v11; // [rsp+68h] [rbp+Fh] BYREF
  const wchar_t *v12; // [rsp+70h] [rbp+17h] BYREF
  const wchar_t *v13; // [rsp+78h] [rbp+1Fh] BYREF
  const wchar_t *v14; // [rsp+80h] [rbp+27h] BYREF
  __int64 v15; // [rsp+88h] [rbp+2Fh] BYREF
  const wchar_t *v16; // [rsp+90h] [rbp+37h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+67h] BYREF
  va_list va; // [rsp+C0h] [rbp+67h]
  const wchar_t **v19; // [rsp+C8h] [rbp+6Fh]
  const wchar_t **v20; // [rsp+D0h] [rbp+77h]
  const wchar_t *v21; // [rsp+D8h] [rbp+7Fh]
  va_list va1; // [rsp+E0h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, const wchar_t **);
  v20 = va_arg(va1, const wchar_t **);
  v21 = va_arg(va1, const wchar_t *);
  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v12 = v21;
      LOBYTE(v17) = 4;
      v13 = *v20;
      v9 = *v19;
      v15 = *a3;
      v11 = *a2;
      v16 = *a1;
      v14 = v9;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                     v8,
                     byte_1801649C5,
                     v7,
                     v8,
                     &v16,
                     (__int64)&v11,
                     (__int64)&v15,
                     (__int64)va,
                     &v14,
                     &v13,
                     &v12);
    }
  }
  return (char)v6;
}
