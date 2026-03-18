/*
 * XREFs of ?UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x14013A4F8
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?PointerMsgRefTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTERMSGDATA_REFTYPE@@@Z @ 0x14017CF70 (-PointerMsgRefTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTERMSGDATA_REFTYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x1401838B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@@-$_tlgWriteTempl.c)
 */

void __fastcall InputTraceLogging::PointerMsg::UnreferenceMsgData(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // edx
  __int64 v5; // r11
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+44h] [rbp-24h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 6
    && (qword_1402A9E50 & 0x20000) != 0
    && (qword_1402A9E58 & 0x20000) == qword_1402A9E58 )
  {
    v8 = a4;
    v10 = InputTraceLogging::PointerMsgRefTypeToString(a3);
    v9 = v4;
    v11[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140288F8A,
      v6,
      v7,
      (__int64)v11,
      (__int64)&v9,
      (__int64)&v10,
      (__int64)&v8);
  }
}
