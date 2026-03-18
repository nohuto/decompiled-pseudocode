/*
 * XREFs of ?LogMousePacketLatencyData@MousePerfSummary@@AEAAXAEBU_MousePacketPerf@@@Z @ 0x1400BF6B0
 * Callers:
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1400BF348 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3333333333@Z @ 0x1401472A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_.c)
 */

void __fastcall MousePerfSummary::LogMousePacketLatencyData(
        MousePerfSummary *this,
        const struct _MousePacketPerf *a2,
        int a3,
        int a4)
{
  __int64 v4; // [rsp+90h] [rbp-9h] BYREF
  __int64 v5; // [rsp+98h] [rbp-1h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v13; // [rsp+D8h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+E0h] [rbp+47h] BYREF
  int v15; // [rsp+110h] [rbp+77h] BYREF
  __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14029EE58 > 5 && (qword_14029EE68 & 0x10) != 0 && (qword_14029EE70 & 0x10) == qword_14029EE70 )
  {
    v16 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a2 + 4);
    v5 = *((_QWORD *)a2 + 3);
    v6 = *((_QWORD *)a2 + 2);
    v7 = *((_QWORD *)a2 + 1);
    v8 = *(_QWORD *)a2;
    v9 = *((_QWORD *)this + 56);
    v10 = *((_QWORD *)this + 55);
    v11 = *((_QWORD *)this + 54);
    v12 = *((_QWORD *)this + 53);
    v15 = *((_DWORD *)this + 120);
    v13 = *((int *)this + 122);
    v14 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)this,
      (unsigned int)&unk_140282988,
      a3,
      a4,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v15,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v16);
  }
}
