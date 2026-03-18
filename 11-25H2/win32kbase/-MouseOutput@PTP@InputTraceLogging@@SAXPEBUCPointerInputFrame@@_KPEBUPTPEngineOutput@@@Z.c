/*
 * XREFs of ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140108C0C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x140008E1C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 *     ?PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z @ 0x14021152C (-PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::MouseOutput(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct PTPEngineOutput *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r8
  int v10; // [rsp+60h] [rbp+27h] BYREF
  __int64 v11; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+80h] [rbp+47h] BYREF
  int v15; // [rsp+A0h] [rbp+67h] BYREF
  int v16; // [rsp+B8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  if ( a1 )
    v3 = *((unsigned int *)a1 + 10);
  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x80u) != 0LL
    && (qword_14029EE38 & 0x80) == qword_14029EE38 )
  {
    v4 = *((unsigned int *)a3 + 1);
    v15 = *((_DWORD *)a3 + 3);
    v16 = *((_DWORD *)a3 + 2);
    v11 = InputTraceLogging::PTPMouseActionToString(v4, a2, a3, v3);
    v12 = v5;
    v10 = v6;
    v13 = v7;
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_140280C52,
      v9,
      v6,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v10,
      (__int64)&v12,
      (void **)&v11,
      (__int64)&v16,
      (__int64)&v15);
  }
}
