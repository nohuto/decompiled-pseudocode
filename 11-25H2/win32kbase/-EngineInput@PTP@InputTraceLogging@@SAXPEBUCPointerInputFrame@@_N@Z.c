/*
 * XREFs of ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x140107274
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140008F0C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::PTP::EngineInput(
        const struct CPointerInputFrame *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x80u) != 0LL
    && (qword_14029EE38 & 0x80) == qword_14029EE38 )
  {
    v7 = a2;
    v8 = *((_DWORD *)a1 + 12);
    v4 = *((_DWORD *)a1 + 10);
    v5 = *((_QWORD *)a1 + 9);
    v6[0] = *((_QWORD *)a1 + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_140280D83,
      a3,
      a4,
      (__int64)v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v8,
      (__int64)&v7);
  }
}
