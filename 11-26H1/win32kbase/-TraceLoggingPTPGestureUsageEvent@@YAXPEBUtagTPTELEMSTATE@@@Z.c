/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x14017AB54
 * Callers:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14017A9A0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333333333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400015CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+F8h] [rbp-80h] BYREF
  int v5; // [rsp+FCh] [rbp-7Ch] BYREF
  int v6; // [rsp+100h] [rbp-78h] BYREF
  int v7; // [rsp+104h] [rbp-74h] BYREF
  int v8; // [rsp+108h] [rbp-70h] BYREF
  int v9; // [rsp+10Ch] [rbp-6Ch] BYREF
  int v10; // [rsp+110h] [rbp-68h] BYREF
  int v11; // [rsp+114h] [rbp-64h] BYREF
  int v12; // [rsp+118h] [rbp-60h] BYREF
  int v13; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v14; // [rsp+120h] [rbp-58h] BYREF
  int v15; // [rsp+124h] [rbp-54h] BYREF
  int v16; // [rsp+128h] [rbp-50h] BYREF
  int v17; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v18; // [rsp+130h] [rbp-48h] BYREF
  int v19; // [rsp+134h] [rbp-44h] BYREF
  int v20; // [rsp+138h] [rbp-40h] BYREF
  int v21; // [rsp+13Ch] [rbp-3Ch] BYREF
  int v22; // [rsp+140h] [rbp-38h] BYREF
  int v23; // [rsp+144h] [rbp-34h] BYREF
  int v24; // [rsp+148h] [rbp-30h] BYREF
  int v25; // [rsp+14Ch] [rbp-2Ch] BYREF
  __int64 v26; // [rsp+150h] [rbp-28h] BYREF
  int v27; // [rsp+170h] [rbp-8h] BYREF
  int v28; // [rsp+178h] [rbp+0h] BYREF
  int v29; // [rsp+180h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1402A9E78 > 5
    && (qword_1402A9E88 & 0x400000000000LL) != 0
    && (qword_1402A9E90 & 0x400000000000LL) == qword_1402A9E90 )
  {
    v27 = *((_DWORD *)a1 + 24);
    v28 = *((_DWORD *)a1 + 23);
    v29 = *((_DWORD *)a1 + 22);
    v4 = *((_DWORD *)a1 + 21);
    v5 = *((_DWORD *)a1 + 20);
    v6 = *((_DWORD *)a1 + 19);
    v7 = *((_DWORD *)a1 + 18);
    v8 = *((_DWORD *)a1 + 17);
    v9 = *((_DWORD *)a1 + 16);
    v10 = *((_DWORD *)a1 + 15);
    v11 = *((_DWORD *)a1 + 14);
    v12 = *((_DWORD *)a1 + 13);
    v13 = *((_DWORD *)a1 + 12);
    v14 = *((_DWORD *)a1 + 11);
    v15 = *((_DWORD *)a1 + 10);
    v16 = *((_DWORD *)a1 + 9);
    v17 = *((_DWORD *)a1 + 8);
    v18 = *((_DWORD *)a1 + 7);
    v19 = *((_DWORD *)a1 + 6);
    v20 = *((_DWORD *)a1 + 5);
    v21 = *((_DWORD *)a1 + 4);
    v22 = *((_DWORD *)a1 + 3);
    v23 = *((_DWORD *)a1 + 2);
    v24 = *((_DWORD *)a1 + 1);
    v25 = *(_DWORD *)a1;
    v26 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)a1,
      (__int64)&unk_14028AF5B,
      0x400000000000LL,
      a4,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26);
  }
}
