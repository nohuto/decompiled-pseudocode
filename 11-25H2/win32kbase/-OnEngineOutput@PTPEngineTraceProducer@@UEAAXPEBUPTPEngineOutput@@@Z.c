/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1400FEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x140009C9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(
        PTPEngineTraceProducer *this,
        const struct PTPEngineOutput *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edx
  __int16 v8; // cx
  __int64 v9; // rcx
  const struct PTPEngineOutput *v10; // [rsp+40h] [rbp-10h] BYREF
  __int16 v11; // [rsp+48h] [rbp-8h]
  int v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  v4 = qword_14029EE70;
  v6 = dword_14029EE58;
  if ( (unsigned int)dword_14029EE58 > 5 && (qword_14029EE68 & 5) != 0 && (qword_14029EE70 & 5) == qword_14029EE70 )
  {
    v10 = a2;
    v11 = 20;
    v13 = *((_QWORD *)this + 23);
    v12 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      (__int64)this,
      (__int64)&unk_140282F0E,
      qword_14029EE70,
      a4,
      (__int64)&v13,
      (__int64)&v12,
      (__int64 *)&v10);
    v4 = qword_14029EE70;
    v6 = dword_14029EE58;
  }
  if ( *((_DWORD *)a2 + 4) && v6 > 5 && (qword_14029EE68 & 5) != 0 && (v4 & 5) == v4 )
  {
    v8 = *((_WORD *)a2 + 8);
    v10 = (const struct PTPEngineOutput *)((char *)a2 + 20);
    v12 = 1;
    v13 = *((_QWORD *)this + 23);
    v9 = (unsigned __int16)(96 * v8);
    v11 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v9,
      (__int64)&unk_140282F8D,
      v4,
      a4,
      (__int64)&v13,
      (__int64)&v12,
      (__int64 *)&v10);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *, __int64))this + 2))(
    *((_QWORD *)this + 2),
    a2,
    v4);
}
