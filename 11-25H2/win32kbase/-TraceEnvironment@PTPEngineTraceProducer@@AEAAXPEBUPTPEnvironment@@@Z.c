/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140062A88
 * Callers:
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1400629F0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x140009C9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  const struct PTPEnvironment *v6; // [rsp+40h] [rbp-10h] BYREF
  __int16 v7; // [rsp+48h] [rbp-8h]
  int v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v2 = (unsigned int)dword_14029EE58;
  v4 = qword_14029EE70;
  if ( (unsigned int)dword_14029EE58 > 5 )
  {
    if ( (qword_14029EE68 & 3) != 0 && (qword_14029EE70 & 3) == qword_14029EE70 )
    {
      v6 = a2;
      v7 = 140;
      v9 = *((_QWORD *)this + 25);
      v8 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        (__int64)this,
        (__int64)&unk_140282E4C,
        qword_14029EE70,
        (unsigned int)dword_14029EE58,
        (__int64)&v9,
        (__int64)&v8,
        (__int64 *)&v6);
      v4 = qword_14029EE70;
      v2 = (unsigned int)dword_14029EE58;
    }
    if ( (unsigned int)v2 > 5 && (qword_14029EE68 & 3) != 0 && (v4 & 3) == v4 )
    {
      v8 = 2;
      v6 = (const struct PTPEnvironment *)((char *)a2 + 140);
      v7 = 20;
      v9 = *((_QWORD *)this + 25);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        (__int64)this,
        (__int64)&unk_140282F49,
        v4,
        v2,
        (__int64)&v9,
        (__int64)&v8,
        (__int64 *)&v6);
    }
  }
}
