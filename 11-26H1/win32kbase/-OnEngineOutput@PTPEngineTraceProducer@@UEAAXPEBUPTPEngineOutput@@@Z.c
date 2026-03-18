/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14013F550
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1401848CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // r8
  int v6; // ecx
  __int16 v7; // ax
  const struct PTPEngineOutput *v8; // [rsp+40h] [rbp-10h] BYREF
  __int16 v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+60h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF

  v2 = dword_1402A9E78;
  v4 = qword_1402A9E90;
  if ( (unsigned int)dword_1402A9E78 > 5 && (qword_1402A9E88 & 5) != 0 && (qword_1402A9E90 & 5) == qword_1402A9E90 )
  {
    v8 = a2;
    v9 = 20;
    v11 = *((_QWORD *)this + 23);
    v10 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      (_DWORD)this,
      (unsigned int)&unk_14028D4F7,
      qword_1402A9E90,
      dword_1402A9E78,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v8);
    v4 = qword_1402A9E90;
    v2 = dword_1402A9E78;
  }
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 && v2 > 5 && (qword_1402A9E88 & 5) != 0 && (v4 & 5) == v4 )
  {
    v10 = 1;
    v8 = (const struct PTPEngineOutput *)((char *)a2 + 20);
    v7 = v6;
    LOWORD(v6) = 2 * v6;
    v9 = 32 * (v6 + v7);
    v11 = *((_QWORD *)this + 23);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v6,
      (unsigned int)&unk_14028D5B0,
      v4,
      v2,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v8);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *, __int64))this + 2))(
    *((_QWORD *)this + 2),
    a2,
    v4);
}
