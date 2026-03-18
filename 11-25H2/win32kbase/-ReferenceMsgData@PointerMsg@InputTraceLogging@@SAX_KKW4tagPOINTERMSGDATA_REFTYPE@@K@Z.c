/*
 * XREFs of ?ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3E00
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x140008AC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@@-$_tlgWriteTempl.c)
 *     ?PointerMsgRefTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTERMSGDATA_REFTYPE@@@Z @ 0x140205CFC (-PointerMsgRefTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTERMSGDATA_REFTYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::PointerMsg::ReferenceMsgData(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // edx
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+44h] [rbp-24h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_14029EE20 > 6
    && (qword_14029EE30 & 0x20000) != 0
    && (qword_14029EE38 & 0x20000) == qword_14029EE38 )
  {
    v8 = a4;
    v10 = InputTraceLogging::PointerMsgRefTypeToString(a3);
    v9 = v4;
    v11[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027EA20,
      v6,
      v7,
      (__int64)v11,
      (__int64)&v9,
      (void **)&v10,
      (__int64)&v8);
  }
}
