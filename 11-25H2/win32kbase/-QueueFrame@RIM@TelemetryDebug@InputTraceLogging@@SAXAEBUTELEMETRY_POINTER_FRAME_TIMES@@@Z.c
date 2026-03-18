/*
 * XREFs of ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140061940
 * Callers:
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x140005D2C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333@Z @ 0x140005E04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWrit.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::QueueFrame(
        const struct TELEMETRY_POINTER_FRAME_TIMES *a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v9; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v10; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v11; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v13; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v17; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v18; // [rsp+100h] [rbp-30h] BYREF
  __int64 v19; // [rsp+108h] [rbp-28h] BYREF
  __int64 v20; // [rsp+110h] [rbp-20h] BYREF
  __int64 v21; // [rsp+118h] [rbp-18h] BYREF
  __int64 v22; // [rsp+120h] [rbp-10h] BYREF
  __int64 v23; // [rsp+148h] [rbp+18h] BYREF
  __int64 v24; // [rsp+150h] [rbp+20h] BYREF
  __int64 v25; // [rsp+158h] [rbp+28h] BYREF

  if ( isChildPartition((__int64)a1, a2) )
  {
    if ( (unsigned int)dword_14029EE20 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v3) )
    {
      v23 = *((_QWORD *)a1 + 17);
      v24 = *((_QWORD *)a1 + 16);
      v25 = *((_QWORD *)a1 + 15);
      v12 = *((_QWORD *)a1 + 14);
      v11 = *((_QWORD *)a1 + 13);
      v10 = *((_QWORD *)a1 + 12);
      v9 = *((_QWORD *)a1 + 11);
      v8 = *((_QWORD *)a1 + 10);
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
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027C8CE,
        v4,
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
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 7 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v3) )
    {
      v23 = *((_QWORD *)a1 + 7);
      v24 = *((_QWORD *)a1 + 6);
      v25 = *((_QWORD *)a1 + 5);
      v8 = *((_QWORD *)a1 + 4);
      v9 = *((_QWORD *)a1 + 3);
      v10 = *((_QWORD *)a1 + 2);
      v11 = *((_QWORD *)a1 + 1);
      v12 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027C7EC,
        v6,
        v7,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23);
    }
  }
}
