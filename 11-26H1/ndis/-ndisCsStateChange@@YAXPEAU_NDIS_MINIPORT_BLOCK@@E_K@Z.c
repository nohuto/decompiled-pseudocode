/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140079CC0
 * Callers:
 *     ndisWnfPdcCallback @ 0x140066C10 (ndisWnfPdcCallback.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x140007740 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x140044A70 (McTemplateK0xq_EtwWriteTransfer.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140046D40 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140074C00 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140077890 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x14008D4B0 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x14008D9D0 (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008F030 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x14009167C (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x140091730 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x140091818 (McTemplateK0xqq_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14009189C (McTemplateK0xqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x140165F60 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x140166190 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x14016A5B0 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x14016BB90 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 v3; // r13
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v5; // esi
  unsigned int Flags; // eax
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  unsigned __int16 IfIndex; // ax
  int v11; // edx
  unsigned int v12; // r14d
  _DWORD *v13; // r12
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int128 v39; // xmm1
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int128 v41; // xmm0
  int v42; // eax
  __int128 v43; // xmm1
  int v44; // eax
  __int128 v45; // xmm0
  int v46; // eax
  __int128 v47; // xmm1
  unsigned int v48; // eax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm0
  GUID v53; // xmm0
  wchar_t **v54; // rdx
  unsigned __int64 v55; // rcx
  wchar_t *v56; // r12
  int v57; // r13d
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // r9
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *Value; // [rsp+20h] [rbp-E0h]
  KIRQL v64; // [rsp+60h] [rbp-A0h]
  unsigned int v65; // [rsp+64h] [rbp-9Ch]
  unsigned int v66; // [rsp+68h] [rbp-98h]
  _DWORD v67[5]; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v68; // [rsp+80h] [rbp-80h]
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int128 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  struct _GUID v73; // [rsp+D0h] [rbp-30h] BYREF
  GUID v74; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  int v76; // [rsp+100h] [rbp+0h]
  __int128 v77; // [rsp+108h] [rbp+8h] BYREF
  __int128 v78; // [rsp+118h] [rbp+18h]
  __int128 v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+138h] [rbp+38h]
  int v81; // [rsp+140h] [rbp+40h]

  v2 = ndisLastCsScenarioInstanceId;
  v3 = ndisConnectedStandby;
  AoAc = a1->AoAc;
  v5 = 0;
  *(_QWORD *)v73.Data4 = 0LL;
  v80 = 0LL;
  v81 = 0;
  v76 = 0;
  Flags = a1->Flags;
  *(_QWORD *)&v73.Data1 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  *(_OWORD *)&v67[1] = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v75 = 0LL;
  if ( (Flags & 0x80u) == 0 )
  {
    v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( (byte_14011D043 & 4) != 0 )
    {
      LODWORD(Value) = a1->IfIndex;
      McTemplateK0jqx_EtwWriteTransfer(
        (unsigned int)Value,
        (__int64)&NicActiveRefRundownBegin,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Value,
        a1->NetLuid.Value);
    }
    v12 = 0;
    v13 = (_DWORD *)((char *)AoAc + 468);
    do
    {
      v14 = (unsigned int)*v13;
      if ( (int)v14 > 0 && (byte_14011D043 & 4) != 0 )
        McTemplateK0xqq_EtwWriteTransfer(v14, v11, (_DWORD)a1 + 4008, a1->NetLuid.Value, v12, *v13);
      ++v12;
      ++v13;
    }
    while ( v12 < 0x11 );
    if ( (byte_14011D043 & 4) != 0 )
    {
      LODWORD(Value) = *((_DWORD *)AoAc + 95);
      McTemplateK0xq_EtwWriteTransfer(v14, &NicActiveRefRundownEnd, &a1->InterfaceGuid, a1->NetLuid.Value);
    }
    v15 = (_QWORD *)((char *)AoAc + 544);
    if ( v3 )
    {
      ndisTraceNicAutoPowerSaver(a1, 1u);
      v16 = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 67) = 0LL;
      v17 = v16;
      if ( *((int *)AoAc + 117) <= 0 )
        v17 = 0LL;
      *v15 = v17;
      v18 = v16;
      *((_QWORD *)AoAc + 69) = 0LL;
      if ( *((int *)AoAc + 118) <= 0 )
        v18 = 0LL;
      *((_QWORD *)AoAc + 70) = v18;
      v19 = 0LL;
      *((_QWORD *)AoAc + 71) = 0LL;
      if ( *((int *)AoAc + 119) > 0 )
        v19 = v16;
      *((_QWORD *)AoAc + 72) = v19;
      v20 = 0LL;
      *((_QWORD *)AoAc + 73) = 0LL;
      if ( *((int *)AoAc + 120) > 0 )
        v20 = v16;
      *((_QWORD *)AoAc + 74) = v20;
      v21 = 0LL;
      *((_QWORD *)AoAc + 75) = 0LL;
      if ( *((int *)AoAc + 121) > 0 )
        v21 = v16;
      *((_QWORD *)AoAc + 76) = v21;
      v22 = 0LL;
      *((_QWORD *)AoAc + 77) = 0LL;
      if ( *((int *)AoAc + 122) > 0 )
        v22 = v16;
      *((_QWORD *)AoAc + 78) = v22;
      v23 = 0LL;
      *((_QWORD *)AoAc + 79) = 0LL;
      if ( *((int *)AoAc + 123) > 0 )
        v23 = v16;
      *((_QWORD *)AoAc + 80) = v23;
      v24 = 0LL;
      *((_QWORD *)AoAc + 81) = 0LL;
      if ( *((int *)AoAc + 124) > 0 )
        v24 = v16;
      *((_QWORD *)AoAc + 82) = v24;
      v25 = 0LL;
      *((_QWORD *)AoAc + 83) = 0LL;
      if ( *((int *)AoAc + 125) > 0 )
        v25 = v16;
      *((_QWORD *)AoAc + 84) = v25;
      v26 = 0LL;
      *((_QWORD *)AoAc + 85) = 0LL;
      if ( *((int *)AoAc + 126) > 0 )
        v26 = v16;
      *((_QWORD *)AoAc + 86) = v26;
      v27 = 0LL;
      *((_QWORD *)AoAc + 87) = 0LL;
      if ( *((int *)AoAc + 127) > 0 )
        v27 = v16;
      *((_QWORD *)AoAc + 88) = v27;
      v28 = 0LL;
      *((_QWORD *)AoAc + 89) = 0LL;
      if ( *((int *)AoAc + 128) > 0 )
        v28 = v16;
      *((_QWORD *)AoAc + 90) = v28;
      v29 = 0LL;
      *((_QWORD *)AoAc + 91) = 0LL;
      if ( *((int *)AoAc + 129) > 0 )
        v29 = v16;
      *((_QWORD *)AoAc + 92) = v29;
      v30 = 0LL;
      *((_QWORD *)AoAc + 93) = 0LL;
      if ( *((int *)AoAc + 130) > 0 )
        v30 = v16;
      *((_QWORD *)AoAc + 94) = v30;
      v31 = 0LL;
      *((_QWORD *)AoAc + 95) = 0LL;
      if ( *((int *)AoAc + 131) > 0 )
        v31 = v16;
      *((_QWORD *)AoAc + 96) = v31;
      *((_QWORD *)AoAc + 97) = 0LL;
      v32 = 0LL;
      if ( *((int *)AoAc + 132) > 0 )
        v32 = v16;
      *((_QWORD *)AoAc + 98) = v32;
      v33 = 0LL;
      *((_QWORD *)AoAc + 99) = 0LL;
      if ( *((int *)AoAc + 133) > 0 )
        v33 = v16;
      *((_QWORD *)AoAc + 100) = v33;
      *((_QWORD *)AoAc + 102) = 0LL;
      *((_DWORD *)AoAc + 202) = 0;
      *((_QWORD *)AoAc + 106) = 0LL;
      *((_QWORD *)AoAc + 103) = 0LL;
      *((_QWORD *)AoAc + 104) = 0LL;
      *((_QWORD *)AoAc + 105) = 0LL;
      *((_DWORD *)AoAc + 272) = 0;
      *((_QWORD *)AoAc + 137) = 0LL;
      *((_QWORD *)AoAc + 138) = 0LL;
      *((_QWORD *)AoAc + 139) = 0LL;
      *((_QWORD *)AoAc + 140) = 0LL;
      *((_DWORD *)AoAc + 282) = 0;
      *((_QWORD *)AoAc + 142) = 0LL;
      *((_QWORD *)AoAc + 143) = 0LL;
      *((_QWORD *)AoAc + 144) = 0LL;
      *(_OWORD *)((char *)AoAc + 904) = 0LL;
      *(_OWORD *)((char *)AoAc + 920) = 0LL;
      *(_OWORD *)((char *)AoAc + 936) = 0LL;
      *(_OWORD *)((char *)AoAc + 952) = 0LL;
      *(_OWORD *)((char *)AoAc + 968) = 0LL;
      *(_OWORD *)((char *)AoAc + 984) = 0LL;
      *(_OWORD *)((char *)AoAc + 1000) = 0LL;
      *(_OWORD *)((char *)AoAc + 1016) = 0LL;
      *(_OWORD *)((char *)AoAc + 1032) = 0LL;
      *((_QWORD *)AoAc + 131) = 0LL;
      *((_DWORD *)AoAc + 264) = 0;
      *(_OWORD *)((char *)AoAc + 1060) = 0LL;
      *((_DWORD *)AoAc + 269) = 0;
      v34 = *((_DWORD *)AoAc + 94);
      if ( !v34 || ((v34 - 1) & 0xFFFFFFFD) == 0 )
        *((_QWORD *)AoAc + 104) = v16;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v64);
      ndisUpdateMiniportCsTrafficStatistics(a1, 0);
    }
    else
    {
      v35 = 17LL;
      do
      {
        if ( *v15 )
        {
          *(v15 - 1) += MEMORY[0xFFFFF78000000008] - *v15;
          *v15 = 0LL;
        }
        v15 += 2;
        --v35;
      }
      while ( v35 );
      v36 = *((_QWORD *)AoAc + 105);
      if ( v36 )
      {
        *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - v36;
        *((_QWORD *)AoAc + 105) = 0LL;
      }
      v37 = *((_QWORD *)AoAc + 104);
      if ( v37 )
      {
        *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - v37;
        *((_QWORD *)AoAc + 104) = 0LL;
      }
      if ( (byte_14011D043 & 4) != 0 )
      {
        Value = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)a1->NetLuid.Value;
        McTemplateK0qxxq_EtwWriteTransfer(
          0xD6BF94D5E57A42BDuLL,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          &a1->InterfaceGuid,
          a1->IfIndex);
      }
      v38 = *((_DWORD *)AoAc + 212);
      v39 = *(_OWORD *)((char *)AoAc + 920);
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      v70 = *(_OWORD *)((char *)AoAc + 904);
      v66 = v38;
      v41 = *(_OWORD *)((char *)AoAc + 936);
      v42 = *((_DWORD *)AoAc + 213);
      v71 = v39;
      v67[0] = v42;
      v43 = *(_OWORD *)((char *)AoAc + 952);
      v44 = *((_DWORD *)AoAc + 264);
      v72 = v41;
      v81 = v44;
      v45 = *(_OWORD *)((char *)AoAc + 968);
      v46 = *((_DWORD *)AoAc + 269);
      *(_OWORD *)&v67[1] = v43;
      v76 = v46;
      v47 = *(_OWORD *)((char *)AoAc + 984);
      v48 = *((_DWORD *)AoAc + 202);
      v68 = v45;
      v65 = v48;
      v49 = *(_OWORD *)((char *)AoAc + 1000);
      v69 = v47;
      v50 = *(_OWORD *)((char *)AoAc + 1016);
      v77 = v49;
      v51 = *(_OWORD *)((char *)AoAc + 1032);
      v78 = v50;
      *(_QWORD *)&v50 = *((_QWORD *)AoAc + 131);
      v79 = v51;
      v52 = *(_OWORD *)((char *)AoAc + 1060);
      *(_QWORD *)&v73.Data1 = PhysicalDeviceObject;
      v80 = v50;
      v75 = v52;
      if ( *((_QWORD *)AoAc + 103) )
      {
        v74 = 0LL;
        if ( (byte_14011D045 & 0x10) != 0 )
          McTemplateK0ujjpx_EtwWriteTransfer(
            (_DWORD)PhysicalDeviceObject,
            v35,
            (_DWORD)a1 + 4008,
            (unsigned __int8)v2,
            (_DWORD)Value,
            (__int64)&a1->InterfaceGuid,
            (char)PhysicalDeviceObject,
            v2);
        v53 = GUID_CS_BLOCKER_GEN;
        v54 = &off_1400F62A0;
        do
        {
          v55 = *((_QWORD *)AoAc + 2 * v5 + 67);
          if ( v55 )
          {
            v74 = v53;
            v74.Data4[0] = v5;
            v56 = (&off_1400F62A0)[2 * (int)v5];
            v57 = *((_DWORD *)&off_1400F62A0 + 4 * (int)v5 + 2);
            v74.Data3 = a1->IfIndex;
            v58 = *((_QWORD *)AoAc + 103);
            if ( v55 > v58 )
            {
              *((_QWORD *)AoAc + 2 * v5 + 67) = v58;
              v55 = v58;
            }
            if ( (byte_14011D043 & 4) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                v55,
                v55 / 0x989680,
                (_DWORD)a1 + 4008,
                a1->NetLuid.Value,
                v5,
                v55 / 0x989680);
              v53 = GUID_CS_BLOCKER_GEN;
            }
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            {
              McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                v55,
                (_DWORD)v54,
                (_DWORD)a1 + 4008,
                (unsigned __int8)v2,
                (__int64)&v73,
                v57,
                (__int64)v56,
                (__int64)&v74,
                *((_QWORD *)AoAc + 2 * v5 + 67),
                v2);
              v53 = GUID_CS_BLOCKER_GEN;
            }
          }
          ++v5;
          v54 = &off_1400F62A0;
        }
        while ( v5 < 0x11 );
      }
      ndisTraceNicAutoPowerSaver(a1, 0);
      NdisTraceLoggingPowerOnStatistics(a1);
      NdisTraceLoggingCsStateChange(
        a1,
        AoAc,
        v2,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v77,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v75,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v70,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v67[1]);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v64);
      ndisPublishSleepStudyCustomData(v2, &v73, L"Power Transitions", v65);
      ndisPublishSleepStudyCustomData(v2, &v73, L"Surprise Wakes", v66);
      ndisPublishSleepStudyCustomData(v2, &v73, L"Spurious Wakes", v67[0]);
      ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        v2,
        &v73,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v77,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v75);
      ndisPublishSleepStudyCustomDataCsTraffic(
        v2,
        &v73,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v70,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v67[1]);
      ndisPublishSleepStudyCustomData(v2, &v73, L"Last Wake IRP Latency (ms)", *((_QWORD *)AoAc + 138));
      ndisPublishSleepStudyCustomData(v2, &v73, L"Max Wake IRP Latency (ms)", *((_QWORD *)AoAc + 139));
      v59 = *((unsigned int *)AoAc + 272);
      v60 = *((_QWORD *)AoAc + 140);
      if ( v59 > 1 )
        v60 = (v60 + ((unsigned __int64)(unsigned int)v59 >> 1)) / v59;
      ndisPublishSleepStudyCustomData(v2, &v73, L"Avg Wake IRP Latency (ms)", v60);
      ndisPublishSleepStudyCustomData(v2, &v73, L"Last SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 142));
      ndisPublishSleepStudyCustomData(v2, &v73, L"Max SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 143));
      v61 = *((unsigned int *)AoAc + 282);
      v62 = *((_QWORD *)AoAc + 144);
      if ( v61 > 1 )
        v62 = (v62 + ((unsigned __int64)(unsigned int)v61 >> 1)) / v61;
      ndisPublishSleepStudyCustomData(v2, &v73, L"Avg SetPowerOid Latency (ms)", v62);
      ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v2, &v73);
    }
    ndisNicAutoPowerSaverResetTelemetryData(a1);
  }
  else
  {
    v8 = (KSPIN_LOCK *)a1->AoAc;
    *((_QWORD *)&v75 + 1) = 0LL;
    if ( ndisConnectedStandby )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(v8);
      v8[103] = 0LL;
      KeReleaseSpinLock(v8, v9);
    }
    else
    {
      *(_QWORD *)&v75 = a1->PhysicalDeviceObject;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          a2,
          (_DWORD)a1 + 4008,
          (unsigned __int8)ndisLastCsScenarioInstanceId,
          (__int64)&v75,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          128,
          ndisLastCsScenarioInstanceId);
      IfIndex = a1->IfIndex;
      v74 = GUID_CS_BLOCKER_GEN;
      v74.Data3 = IfIndex;
      v74.Data4[0] = 0;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
          (_DWORD)a1,
          a2,
          (_DWORD)a1 + 4008,
          (unsigned __int8)v2,
          (__int64)&a1->InterfaceGuid,
          5,
          (__int64)L"NDIS",
          (__int64)&v74,
          128,
          v2);
    }
  }
}
