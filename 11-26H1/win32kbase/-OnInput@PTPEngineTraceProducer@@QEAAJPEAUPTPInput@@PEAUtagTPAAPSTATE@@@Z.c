/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1401326AC
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x140227370 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1401848CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@5@Z @ 0x14018ABAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@-$_tlgWriteTe.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(
        PTPEngineTraceProducer *this,
        struct PTPInput *a2,
        struct tagTPAAPSTATE *a3)
{
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v7; // r8
  int v8; // ecx
  __int16 v10; // ax
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int16 v13; // [rsp+48h] [rbp-18h]
  struct PTPInput *v14; // [rsp+50h] [rbp-10h] BYREF
  __int16 v15; // [rsp+58h] [rbp-8h]
  int v16; // [rsp+70h] [rbp+10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+18h] BYREF

  v4 = (__int64)a3;
  v5 = dword_1402A9E78;
  v7 = qword_1402A9E90;
  if ( (unsigned int)dword_1402A9E78 > 5 && (qword_1402A9E88 & 3) != 0 && (qword_1402A9E90 & 3) == qword_1402A9E90 )
  {
    v12 = v4;
    v11 = -v4;
    v14 = a2;
    v16 = 4;
    v13 = v11 != 0 ? 0x20 : 0;
    v15 = 56;
    v17 = *((_QWORD *)this + 25);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
      (_DWORD)this,
      (unsigned int)&unk_14028D4B1,
      qword_1402A9E90,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v12);
    v7 = qword_1402A9E90;
    v5 = dword_1402A9E78;
  }
  v8 = *((_DWORD *)a2 + 12);
  if ( v8 && v5 > 5 && (qword_1402A9E88 & 3) != 0 && (v7 & 3) == v7 )
  {
    v16 = 3;
    v14 = (struct PTPInput *)((char *)a2 + 56);
    v10 = v8;
    LOWORD(v8) = 2 * v8;
    v15 = 32 * (v8 + v10);
    v17 = *((_QWORD *)this + 25);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v8,
      (unsigned int)&unk_14028D470,
      v7,
      v4,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v14);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, __int64, __int64))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           v7,
           v4);
}
