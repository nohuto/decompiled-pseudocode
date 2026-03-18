/*
 * XREFs of ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x140136610
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x140009C9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnEvent(
        PTPEngineTraceProducer *this,
        struct PTPEngineEvent *a2,
        __int64 a3,
        __int64 a4)
{
  struct PTPEngineEvent *v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_14029EE58 > 5 && (qword_14029EE68 & 3) != 0 && (qword_14029EE70 & 3) == qword_14029EE70 )
  {
    v7 = a2;
    v8 = 4;
    v10 = *((_QWORD *)this + 25);
    v9 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      (__int64)this,
      (__int64)&unk_140282ED4,
      a3,
      a4,
      (__int64)&v10,
      (__int64)&v9,
      (__int64 *)&v7);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPEngineEvent *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2);
}
