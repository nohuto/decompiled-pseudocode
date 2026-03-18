/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400F32E0
 * Callers:
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x14007115C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1400EB8E8 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1400F2D10 (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401AE388 (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1402115E4 (-SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[7] = 4LL;
  v7[5] = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
