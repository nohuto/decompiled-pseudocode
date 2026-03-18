/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140081338
 * Callers:
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1400812A0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140092338 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1401848CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  unsigned int v2; // r9d
  char v5; // r10
  __int64 v6; // r8
  const struct PTPEnvironment *v7; // [rsp+40h] [rbp-10h] BYREF
  __int16 v8; // [rsp+48h] [rbp-8h]
  int v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v2 = dword_1402A9E78;
  if ( (unsigned int)dword_1402A9E78 > 5 )
  {
    v5 = qword_1402A9E88;
    v6 = qword_1402A9E90;
    if ( (qword_1402A9E88 & 3) != 0 && (qword_1402A9E90 & 3) == qword_1402A9E90 )
    {
      v7 = a2;
      v8 = 140;
      v10 = *((_QWORD *)this + 25);
      v9 = 5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        (_DWORD)this,
        (unsigned int)&unk_14028D3F0,
        qword_1402A9E90,
        dword_1402A9E78,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v7);
      v6 = qword_1402A9E90;
      v5 = qword_1402A9E88;
      v2 = dword_1402A9E78;
    }
    if ( v2 > 5 && (v5 & 3) != 0 && (v6 & 3) == v6 )
    {
      v9 = 2;
      v7 = (const struct PTPEnvironment *)((char *)a2 + 140);
      v8 = 20;
      v10 = *((_QWORD *)this + 25);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        (_DWORD)this,
        (unsigned int)&unk_14028D532,
        v6,
        v2,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v7);
    }
  }
}
