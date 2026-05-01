/*
 * XREFs of ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x18028D18C
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028CDF0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000FBE8 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180283940 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h] BYREF

  result = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v10 = *a3;
    v11 = *a4;
    v15 = *a1;
    v13 = v10;
    v14 = *a2;
    v12 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_180826B57,
                                            v11,
                                            v9,
                                            &v15,
                                            &v14,
                                            &v13,
                                            &v12);
  }
  return result;
}
