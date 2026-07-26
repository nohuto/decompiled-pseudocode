/*
 * XREFs of ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x14008D4B0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140079CC0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U_tlgWrapperPtrSize@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@455545445AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@555555555555AEBU_tlgWrapperPtrSize@@77@Z @ 0x140002320 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U3@U.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCsStateChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_AOAC *a2,
        __int64 a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a4,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *a5,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a6,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a7)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // [rsp+100h] [rbp-80h] BYREF
  int v18; // [rsp+104h] [rbp-7Ch] BYREF
  int v19; // [rsp+108h] [rbp-78h] BYREF
  int v20; // [rsp+10Ch] [rbp-74h] BYREF
  int v21; // [rsp+110h] [rbp-70h] BYREF
  __int64 v22; // [rsp+118h] [rbp-68h] BYREF
  __int64 v23; // [rsp+120h] [rbp-60h] BYREF
  __int64 v24; // [rsp+128h] [rbp-58h] BYREF
  __int64 v25; // [rsp+130h] [rbp-50h] BYREF
  __int64 v26; // [rsp+138h] [rbp-48h] BYREF
  __int64 v27; // [rsp+140h] [rbp-40h] BYREF
  __int64 v28; // [rsp+148h] [rbp-38h] BYREF
  __int64 v29; // [rsp+150h] [rbp-30h] BYREF
  __int64 v30; // [rsp+158h] [rbp-28h] BYREF
  __int64 v31; // [rsp+160h] [rbp-20h] BYREF
  __int64 v32; // [rsp+168h] [rbp-18h] BYREF
  __int64 v33; // [rsp+170h] [rbp-10h] BYREF
  unsigned __int16 *v34; // [rsp+178h] [rbp-8h] BYREF
  __int64 v35; // [rsp+180h] [rbp+0h] BYREF
  __int64 v36; // [rsp+188h] [rbp+8h] BYREF
  __int64 v37; // [rsp+190h] [rbp+10h] BYREF
  unsigned __int64 v38; // [rsp+198h] [rbp+18h] BYREF
  __int64 v39; // [rsp+1A0h] [rbp+20h] BYREF
  __int64 v40; // [rsp+1A8h] [rbp+28h] BYREF
  __int64 v41; // [rsp+1B0h] [rbp+30h] BYREF
  _QWORD *v42; // [rsp+1B8h] [rbp+38h] BYREF
  int v43; // [rsp+1C0h] [rbp+40h]
  __int64 v44; // [rsp+1C8h] [rbp+48h] BYREF
  int v45; // [rsp+1D0h] [rbp+50h]
  __int128 *v46; // [rsp+1D8h] [rbp+58h] BYREF
  int v47; // [rsp+1E0h] [rbp+60h]
  __int128 v48; // [rsp+1F0h] [rbp+70h] BYREF
  __int128 v49; // [rsp+200h] [rbp+80h]
  __int128 v50; // [rsp+210h] [rbp+90h]
  _OWORD v51[2]; // [rsp+220h] [rbp+A0h] BYREF
  _QWORD v52[18]; // [rsp+240h] [rbp+C0h] BYREF

  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime >= 0x165A0BC00LL )
  {
    v8 = *(_OWORD *)a4;
    v52[0] = *((_QWORD *)a2 + 67);
    v9 = *((_OWORD *)a4 + 1);
    v52[1] = *((_QWORD *)a2 + 69);
    v52[2] = *((_QWORD *)a2 + 71);
    v52[3] = *((_QWORD *)a2 + 73);
    v52[4] = *((_QWORD *)a2 + 75);
    v52[5] = *((_QWORD *)a2 + 77);
    v52[6] = *((_QWORD *)a2 + 79);
    v52[7] = *((_QWORD *)a2 + 81);
    v52[8] = *((_QWORD *)a2 + 83);
    v52[9] = *((_QWORD *)a2 + 85);
    v52[10] = *((_QWORD *)a2 + 87);
    v52[11] = *((_QWORD *)a2 + 89);
    v52[12] = *((_QWORD *)a2 + 91);
    v52[13] = *((_QWORD *)a2 + 93);
    v52[14] = *((_QWORD *)a2 + 95);
    v52[15] = *((_QWORD *)a2 + 97);
    v52[16] = *((_QWORD *)a2 + 99);
    DWORD2(v51[0]) = *((_DWORD *)a4 + 14);
    v48 = v8;
    v10 = *((_OWORD *)a4 + 2);
    v49 = v9;
    *(_QWORD *)&v9 = *((_QWORD *)a4 + 6);
    v50 = v10;
    v11 = *(_OWORD *)a5;
    v12 = *((_DWORD *)a5 + 4);
    *(_QWORD *)&v51[0] = v9;
    *(_OWORD *)((char *)v51 + 12) = v11;
    HIDWORD(v51[1]) = v12;
    if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
    {
      v42 = v52;
      v44 = v15 + 468;
      v46 = &v48;
      v22 = *((_QWORD *)a7 + 5);
      v23 = *((_QWORD *)a7 + 4);
      v24 = *((_QWORD *)a7 + 3);
      v25 = *((_QWORD *)a7 + 2);
      v26 = *((_QWORD *)a7 + 1);
      v27 = *(_QWORD *)a7;
      v43 = 136;
      v45 = 68;
      v28 = *((_QWORD *)a6 + 5);
      v29 = *((_QWORD *)a6 + 4);
      v30 = *((_QWORD *)a6 + 3);
      v31 = *((_QWORD *)a6 + 2);
      v32 = *((_QWORD *)a6 + 1);
      v33 = *(_QWORD *)a6;
      v34 = *(unsigned __int16 **)(v16 + 3856);
      v17 = *(_DWORD *)(v15 + 852);
      v18 = *(_DWORD *)(v15 + 848);
      v36 = *(_QWORD *)(v15 + 824);
      v19 = *(_DWORD *)(v15 + 808);
      v37 = *(_QWORD *)(v15 + 816);
      v39 = *(unsigned int *)(v15 + 380);
      v20 = *(_DWORD *)(v15 + 376);
      v40 = *(_QWORD *)(v16 + 4024);
      v21 = *(_DWORD *)(v16 + 4056);
      v41 = v16 + 4008;
      v47 = 80;
      v35 = a3;
      v38 = v13 / 0x2710;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        (__int64)a6,
        (__int64)&unk_14010405E,
        v13,
        v14,
        &v41,
        (__int64)&v21,
        (__int64)&v40,
        (__int64)&v20,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v19,
        (__int64)&v36,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v35,
        &v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64 *)&v46,
        &v44,
        (__int64 *)&v42);
    }
  }
}
