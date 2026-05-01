/*
 * XREFs of ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x1805DFCEC
 * Callers:
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6A90 (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6C9C (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800026A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180283940 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>(
        _QWORD *a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  result = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v5[0] = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_180826A0D,
                                            v3,
                                            v4,
                                            v5);
  }
  return result;
}
