/*
 * XREFs of ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140060814
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x140005D2C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333@Z @ 0x140005E04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWrit.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::Pointer::ProcessInput(
        const struct TELEMETRY_POINTER_FRAME_TIMES *a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v8; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v9; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v10; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v13; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v16; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+100h] [rbp-30h] BYREF
  __int64 v18; // [rsp+108h] [rbp-28h] BYREF
  __int64 v19; // [rsp+110h] [rbp-20h] BYREF
  __int64 v20; // [rsp+118h] [rbp-18h] BYREF
  __int64 v21; // [rsp+120h] [rbp-10h] BYREF
  __int64 v22; // [rsp+148h] [rbp+18h] BYREF
  __int64 v23; // [rsp+150h] [rbp+20h] BYREF
  __int64 v24; // [rsp+158h] [rbp+28h] BYREF

  if ( (unsigned __int8)isChildPartition() )
  {
    if ( (unsigned int)dword_14029EE20 > 7 && (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v2) )
    {
      v22 = *((_QWORD *)a1 + 17);
      v23 = *((_QWORD *)a1 + 16);
      v24 = *((_QWORD *)a1 + 15);
      v11 = *((_QWORD *)a1 + 14);
      v10 = *((_QWORD *)a1 + 13);
      v9 = *((_QWORD *)a1 + 12);
      v8 = *((_QWORD *)a1 + 11);
      v7 = *((_QWORD *)a1 + 10);
      v12 = *((_QWORD *)a1 + 9);
      v13 = *((_QWORD *)a1 + 8);
      v14 = *((_QWORD *)a1 + 7);
      v15 = *((_QWORD *)a1 + 6);
      v16 = *((_QWORD *)a1 + 5);
      v17 = *((_QWORD *)a1 + 4);
      v18 = *((_QWORD *)a1 + 3);
      v19 = *((_QWORD *)a1 + 2);
      v20 = *((_QWORD *)a1 + 1);
      v21 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_1402800E2,
        v3,
        v4,
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
        (__int64)&v7,
        (__int64)&v8,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 7 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14029EE20, 0x10000LL, v2) )
    {
      v22 = *((_QWORD *)a1 + 7);
      v23 = *((_QWORD *)a1 + 6);
      v24 = *((_QWORD *)a1 + 5);
      v7 = *((_QWORD *)a1 + 4);
      v8 = *((_QWORD *)a1 + 3);
      v9 = *((_QWORD *)a1 + 2);
      v10 = *((_QWORD *)a1 + 1);
      v11 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029EE20,
        (__int64)&unk_14027FFFA,
        v5,
        v6,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22);
    }
  }
}
