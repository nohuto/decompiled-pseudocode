/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002598
 * Callers:
 *     ?TraceSendStart@Log@CoreMessagingK@@SAXPEAXD@Z @ 0x140067ADC (-TraceSendStart@Log@CoreMessagingK@@SAXPEAXD@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     ?SetDevicePDOSuppression@RIM@InputTraceLogging@@SAXPEBURIMDEV@@E@Z @ 0x140148DF0 (-SetDevicePDOSuppression@RIM@InputTraceLogging@@SAXPEBURIMDEV@@E@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = a6;
  v12 = 0;
  v11 = 1;
  v7[4] = a5;
  v9 = 0;
  v8 = 8;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
