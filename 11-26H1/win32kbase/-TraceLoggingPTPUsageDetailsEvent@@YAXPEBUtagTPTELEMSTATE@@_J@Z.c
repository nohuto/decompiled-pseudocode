/*
 * XREFs of ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x14017AA14
 * Callers:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14017A9A0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14017AD54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWri.c)
 */

void __fastcall TraceLoggingPTPUsageDetailsEvent(const struct tagTPTELEMSTATE *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v4; // [rsp+88h] [rbp+27h] BYREF
  int v5; // [rsp+8Ch] [rbp+2Bh] BYREF
  int v6; // [rsp+90h] [rbp+2Fh] BYREF
  int v7; // [rsp+94h] [rbp+33h] BYREF
  int v8; // [rsp+98h] [rbp+37h] BYREF
  int v9; // [rsp+9Ch] [rbp+3Bh] BYREF
  int v10; // [rsp+A0h] [rbp+3Fh] BYREF
  int v11; // [rsp+A4h] [rbp+43h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+47h] BYREF
  int v13; // [rsp+D8h] [rbp+77h] BYREF
  int v14; // [rsp+E0h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1402A9E78 > 5
    && (qword_1402A9E88 & 0x200000000000LL) != 0
    && (qword_1402A9E90 & 0x200000000000LL) == qword_1402A9E90 )
  {
    v13 = *((_DWORD *)a1 + 37);
    v14 = *((_DWORD *)a1 + 36);
    v4 = *((_DWORD *)a1 + 35);
    v5 = *((_DWORD *)a1 + 34);
    v6 = *((_DWORD *)a1 + 23);
    v3 = 1000LL * *((_QWORD *)a1 + 16);
    v12 = 0x1000000LL;
    v7 = v3 / a2;
    v8 = *((_DWORD *)a1 + 13);
    v9 = 1000LL * *((_QWORD *)a1 + 15) / (unsigned __int64)a2;
    v10 = 1000LL * *((_QWORD *)a1 + 14) / (unsigned __int64)a2;
    v11 = 1000LL * *((_QWORD *)a1 + 13) / a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)a1,
      (unsigned int)&unk_14028AEAB,
      a3,
      a2,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
