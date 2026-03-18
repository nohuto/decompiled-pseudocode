/*
 * XREFs of ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14002F0E4
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x14002F018 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     ?GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z @ 0x14002F638 (-GetVSyncStatsNumMonitorPowerTransitions@DXGADAPTER@@QEAAII@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@553333333333333AEBU?$_tlgWrapSz@D@@3@Z @ 0x14003FC78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U1@.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     ?VidSchiLogFrontBufferTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14004C82C (-VidSchiLogFrontBufferTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiLogAggregatedTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r15
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // esi
  __int64 *v8; // rax
  DXGADAPTER *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r11
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int16 v28[2]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int VSyncStatsNumMonitorPowerTransitions; // [rsp+DCh] [rbp-7Ch] BYREF
  unsigned int v30; // [rsp+E0h] [rbp-78h]
  __int64 v31; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+100h] [rbp-58h]
  __int64 v35; // [rsp+108h] [rbp-50h]
  __int64 v36; // [rsp+110h] [rbp-48h] BYREF
  __int64 v37; // [rsp+118h] [rbp-40h]
  __int64 v38; // [rsp+120h] [rbp-38h]
  unsigned __int64 v39; // [rsp+128h] [rbp-30h]
  __int64 v40; // [rsp+130h] [rbp-28h]
  __int64 v41; // [rsp+138h] [rbp-20h]
  char *v42; // [rsp+140h] [rbp-18h]
  unsigned __int64 v43; // [rsp+148h] [rbp-10h] BYREF
  char *v44; // [rsp+150h] [rbp-8h] BYREF
  __int64 v45; // [rsp+158h] [rbp+0h] BYREF
  __int64 v46; // [rsp+160h] [rbp+8h] BYREF
  __int64 v47; // [rsp+168h] [rbp+10h] BYREF
  __int64 v48; // [rsp+170h] [rbp+18h] BYREF
  __int64 v49; // [rsp+178h] [rbp+20h] BYREF
  __int64 v50; // [rsp+180h] [rbp+28h] BYREF
  __int64 v51; // [rsp+188h] [rbp+30h] BYREF
  __int64 v52; // [rsp+190h] [rbp+38h] BYREF
  __int64 v53; // [rsp+198h] [rbp+40h] BYREF
  __int64 v54; // [rsp+1A0h] [rbp+48h] BYREF
  __int64 v55; // [rsp+1A8h] [rbp+50h] BYREF
  __int64 v56; // [rsp+1B0h] [rbp+58h] BYREF
  __int64 v57; // [rsp+1B8h] [rbp+60h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp+68h] BYREF
  __int64 v59; // [rsp+1C8h] [rbp+70h] BYREF
  char v60[272]; // [rsp+1D8h] [rbp+80h] BYREF

  v2 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned __int64)KeQueryTimeIncrement() * (v2 - *((_QWORD *)a1 + 337)) >= 0x19254D3800LL )
  {
    *((_QWORD *)a1 + 337) = v2;
    VidSchiLogFrontBufferTelemetry(a1);
    v39 = 0LL;
    v3 = 0LL;
    memset(v60, 0, 0x104uLL);
    v4 = (_DWORD *)*((_QWORD *)a1 + 45);
    if ( v4 != (_DWORD *)((char *)a1 + 360) )
    {
      do
      {
        if ( !v4[462] )
        {
          v5 = *((_QWORD *)v4 - 8);
          if ( *(_QWORD *)(v5 + 2816) - *(_QWORD *)(v5 + 2824) > v3 )
          {
            v3 = *(_QWORD *)(v5 + 2816) - *(_QWORD *)(v5 + 2824);
            strcpy_s(v60, 0x104uLL, *(const char **)(v5 + 2648));
          }
          *(_QWORD *)(v5 + 2824) = *(_QWORD *)(v5 + 2816);
        }
        v4 = *(_DWORD **)v4;
      }
      while ( v4 != (_DWORD *)((char *)a1 + 360) );
      v39 = v3;
    }
    if ( *((_BYTE *)a1 + 2500) )
      v6 = *((_DWORD *)a1 + 12);
    else
      v6 = 1;
    v30 = v6;
    v7 = 0;
    if ( v6 )
    {
      v8 = (__int64 *)((char *)a1 + 3448);
      v42 = (char *)a1 + 3448;
      do
      {
        v9 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
        v10 = *v8;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0LL;
        VSyncStatsNumMonitorPowerTransitions = DXGADAPTER::GetVSyncStatsNumMonitorPowerTransitions(v9, v7);
        if ( VSyncStatsNumMonitorPowerTransitions || *(_QWORD *)(v10 + 44352) )
        {
          DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v7, 1, (__int64)&v33);
          DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v7, 2, (__int64)&v36);
          v11 = v33;
          if ( !v33 )
          {
            DXGADAPTER::GetVSyncTimeCounters(*((_QWORD *)a1 + 2), v7, 0, (__int64)&v33);
            v11 = v33;
          }
          v12 = v35;
          v13 = v34;
          v14 = v36;
          v15 = v37;
          v16 = v38;
          if ( *((_BYTE *)a1 + 67) )
          {
            v11 += *(_QWORD *)(v10 + 78696);
            v13 = *(_QWORD *)(v10 + 78704) + v34;
            v12 = *(_QWORD *)(v10 + 78712) + v35;
            v14 = *(_QWORD *)(v10 + 78720) + v36;
            v15 = *(_QWORD *)(v10 + 78728) + v37;
            v16 = *(_QWORD *)(v10 + 78736) + v38;
          }
          v40 = v15;
          v41 = v16;
          v31 = *(_QWORD *)(v10 + 78880);
          if ( (unsigned int)dword_14008A048 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_14008A048, 0x400000000010LL) )
            {
              v22 = v21 - *(_QWORD *)(v10 + 78808);
              v23 = v20 - *(_QWORD *)(v10 + 78800);
              v24 = *(_QWORD *)(v10 + 78936) - *(_QWORD *)(v10 + 78872);
              v43 = v39;
              v44 = v60;
              v50 = v31 - *(_QWORD *)(v10 + 78816);
              v54 = v14 - *(_QWORD *)(v10 + 78792);
              v55 = v12 - *(_QWORD *)(v10 + 78784);
              v56 = v13 - *(_QWORD *)(v10 + 78776);
              v45 = v24;
              v46 = *(_QWORD *)(v10 + 78920) - *(_QWORD *)(v10 + 78856);
              v48 = *(_QWORD *)(v10 + 78904) - *(_QWORD *)(v10 + 78840);
              v49 = *(_QWORD *)(v10 + 78888) - *(_QWORD *)(v10 + 78824);
              v25 = *(_QWORD *)(v10 + 78896) - *(_QWORD *)(v10 + 78832);
              v57 = v11 - *(_QWORD *)(v10 + 78768);
              LODWORD(v31) = *((unsigned __int8 *)a1 + 2500);
              v26 = *((_QWORD *)a1 + 2);
              v47 = v19;
              v51 = v25;
              v52 = v22;
              v53 = v23;
              v32 = v7;
              v27 = *(_QWORD *)(v26 + 412);
              v28[0] = 5;
              v58 = v27;
              v59 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
                v27,
                (unsigned int)&unk_14007DFEF,
                v18,
                v19,
                (__int64)&v59,
                (__int64)v28,
                (__int64)&v58,
                (__int64)&v31,
                (__int64)&v32,
                (__int64)&VSyncStatsNumMonitorPowerTransitions,
                (__int64)&v57,
                (__int64)&v56,
                (__int64)&v55,
                (__int64)&v54,
                (__int64)&v53,
                (__int64)&v52,
                (__int64)&v51,
                (__int64)&v50,
                (__int64)&v49,
                (__int64)&v48,
                (__int64)&v47,
                (__int64)&v46,
                (__int64)&v45,
                (__int64)&v44,
                (__int64)&v43);
            }
          }
          *(_QWORD *)(v10 + 78800) = v40;
          v17 = v41;
          *(_QWORD *)(v10 + 78784) = v12;
          *(_QWORD *)(v10 + 78808) = v17;
          *(_QWORD *)(v10 + 78768) = v11;
          *(_QWORD *)(v10 + 78776) = v13;
          *(_QWORD *)(v10 + 78792) = v14;
          *(_OWORD *)(v10 + 78816) = *(_OWORD *)(v10 + 78880);
          *(_OWORD *)(v10 + 78832) = *(_OWORD *)(v10 + 78896);
          *(_OWORD *)(v10 + 78848) = *(_OWORD *)(v10 + 78912);
          *(_OWORD *)(v10 + 78864) = *(_OWORD *)(v10 + 78928);
        }
        ++v7;
        v8 = (__int64 *)(v42 + 8);
        v42 += 8;
      }
      while ( v7 < v30 );
    }
  }
}
