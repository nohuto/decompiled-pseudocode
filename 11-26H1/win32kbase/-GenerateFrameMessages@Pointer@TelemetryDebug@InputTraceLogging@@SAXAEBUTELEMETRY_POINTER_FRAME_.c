/*
 * XREFs of ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x14014BFE8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1400039EC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrap.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14019858C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::Pointer::GenerateFrameMessages(
        const struct TELEMETRY_POINTER_FRAME_TIMES *a1,
        int a2,
        int a3)
{
  char v3; // di
  __int64 v5; // r9
  __int64 v6; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v7; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v8; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v9; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v10; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v12; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v14; // [rsp+100h] [rbp-40h] BYREF
  __int64 v15; // [rsp+108h] [rbp-38h] BYREF
  __int64 v16; // [rsp+110h] [rbp-30h] BYREF
  __int64 v17; // [rsp+118h] [rbp-28h] BYREF
  __int64 v18; // [rsp+120h] [rbp-20h] BYREF
  __int64 v19; // [rsp+128h] [rbp-18h] BYREF
  __int64 v20; // [rsp+130h] [rbp-10h] BYREF
  __int64 v21; // [rsp+138h] [rbp-8h] BYREF
  __int64 v22; // [rsp+140h] [rbp+0h] BYREF
  char v23; // [rsp+170h] [rbp+30h] BYREF
  __int64 v24; // [rsp+178h] [rbp+38h] BYREF

  v3 = a2;
  if ( isChildPartition((int)a1, a2, a3) )
  {
    if ( (unsigned int)dword_1402A9E40 > 7
      && (qword_1402A9E50 & 0x10000) != 0
      && (qword_1402A9E58 & 0x10000) == qword_1402A9E58 )
    {
      v24 = *((_QWORD *)a1 + 17);
      v12 = *((_QWORD *)a1 + 16);
      v11 = *((_QWORD *)a1 + 15);
      v10 = *((_QWORD *)a1 + 14);
      v9 = *((_QWORD *)a1 + 13);
      v8 = *((_QWORD *)a1 + 12);
      v7 = *((_QWORD *)a1 + 11);
      v6 = *((_QWORD *)a1 + 10);
      v13 = *((_QWORD *)a1 + 9);
      v14 = *((_QWORD *)a1 + 8);
      v15 = *((_QWORD *)a1 + 7);
      v16 = *((_QWORD *)a1 + 6);
      v17 = *((_QWORD *)a1 + 5);
      v18 = *((_QWORD *)a1 + 4);
      v19 = *((_QWORD *)a1 + 3);
      v20 = *((_QWORD *)a1 + 2);
      v21 = *((_QWORD *)a1 + 1);
      v22 = *(_QWORD *)a1;
      v23 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        (__int64)&dword_1402A9E40,
        (__int64)&unk_14028A0CE,
        0x10000LL,
        v5,
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
        (__int64)&v6,
        (__int64)&v7,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 7
         && (qword_1402A9E50 & 0x10000) != 0
         && (qword_1402A9E58 & 0x10000) == qword_1402A9E58 )
  {
    v24 = *((_QWORD *)a1 + 7);
    v6 = *((_QWORD *)a1 + 6);
    v7 = *((_QWORD *)a1 + 5);
    v8 = *((_QWORD *)a1 + 4);
    v9 = *((_QWORD *)a1 + 3);
    v10 = *((_QWORD *)a1 + 2);
    v11 = *((_QWORD *)a1 + 1);
    v12 = *(_QWORD *)a1;
    v23 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140289FD1,
      0x10000,
      v5,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v24,
      (__int64)&v23);
  }
}
