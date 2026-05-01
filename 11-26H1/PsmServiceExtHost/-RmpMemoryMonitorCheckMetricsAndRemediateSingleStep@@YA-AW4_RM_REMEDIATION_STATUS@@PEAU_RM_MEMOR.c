/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180004D20 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_.c)
 * Callees:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800047BC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180004BF0 (-RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006E464 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm6
  void *v5; // rcx
  unsigned __int8 v8; // r12
  __int64 v9; // rdi
  __int128 v10; // xmm0
  struct _EVENT_DATA_DESCRIPTOR v11; // xmm3
  int v12; // r14d
  __m128i v13; // xmm2
  __int128 v14; // xmm1
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned __int64 v18; // r10
  unsigned __int8 v19; // r11
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  int v22; // edx
  __int64 v23; // r12
  unsigned int v24; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __m128i v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __m128i v43; // [rsp+F0h] [rbp-10h]
  __int128 v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+110h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  __int128 v47; // [rsp+130h] [rbp+30h]
  __int128 v48; // [rsp+140h] [rbp+40h]
  __m128i v49; // [rsp+150h] [rbp+50h]
  __int64 *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+170h] [rbp+70h] BYREF
  __int128 v53; // [rsp+180h] [rbp+80h]
  __m128i v54; // [rsp+190h] [rbp+90h]
  __int128 v55; // [rsp+1A0h] [rbp+A0h]
  __int128 v56; // [rsp+1B0h] [rbp+B0h]
  __int64 *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  __int64 *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]

  v3 = 0LL;
  v5 = *(void **)(a1 + 40);
  v36 = 0LL;
  v8 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ResetEvent(v5);
  ResetEvent(*(HANDLE *)(a1 + 48));
  v9 = *(_QWORD *)a1;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_OWORD *)(a2 + 112) = 0LL;
  UserData = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)&UserData);
  v29 = v9 + 256;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v9 + 200),
    (struct _RM_REMEDIATION_ACTIONS *)(v9 + 256),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&UserData,
    UserData.Ptr,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v10 = v53;
  v11 = UserData;
  v12 = 0;
  v13 = v54;
  v14 = v56;
  v15 = v9 + 256;
  *(_WORD *)(v9 + 164) = 0;
  v16 = v53;
  v42 = v10;
  v44 = v55;
  v41 = v11;
  v43 = v13;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v17 = 4;
  v45 = v14;
  v46.Ptr = 0LL;
  v47 = 0uLL;
  *(_QWORD *)&v48 = 0LL;
  v49 = 0uLL;
  v30 = _mm_srli_si128((__m128i)v11, 8).m128i_u64[0];
  *(_QWORD *)&v46.Size = v30;
  v31 = _mm_srli_si128(v13, 8).m128i_u64[0];
  *((_QWORD *)&v48 + 1) = v31;
  do
  {
    if ( v16 >= *(_QWORD *)(a2 + 8LL * v17 + 16) )
    {
      if ( v8 <= v17 )
        v8 = v17;
      if ( *(_DWORD *)(v15 + 4LL * v17) )
        break;
    }
    --v17;
  }
  while ( v17 );
  v18 = *((_QWORD *)&v55 + 1);
  v19 = 0;
  v20 = 4;
  do
  {
    if ( *((_QWORD *)&v55 + 1) >= *(_QWORD *)(a2 + 8LL * v20 + 56) )
    {
      if ( v19 <= v20 )
        v19 = v20;
      if ( *(_DWORD *)(v15 + 4LL * v20) )
        break;
    }
    --v20;
  }
  while ( v20 );
  v21 = 3;
  if ( v17 || v20 )
  {
    if ( v17 >= v20 )
    {
      v22 = 1;
      v12 = *(_DWORD *)(v29 + 4LL * v17);
      *(_QWORD *)&v47 = *(_QWORD *)(a2 + 8LL * v17 + 16);
      *((_QWORD *)&v47 + 1) = v30 - v47;
    }
    else
    {
      v22 = 3;
      v12 = *(_DWORD *)(v29 + 4LL * v20 + 20);
      v49.m128i_i64[1] = *(_QWORD *)(a2 + 8LL * v20 + 56);
      v49.m128i_i64[0] = v31 - v49.m128i_i64[1];
    }
    v3 = v49;
    v36 = v46;
    v38 = v48;
    v37 = v47;
    v39 = v49;
    v40 = 0LL;
  }
  else
  {
    v22 = 0;
  }
  *(_BYTE *)(a3 + 1) = v8;
  *(_BYTE *)a3 = v19;
  if ( v8 )
  {
    v27 = *(_QWORD *)(a2 + 8LL * v8 + 16);
    if ( v16 < v27 )
      *(_QWORD *)(a3 + 8) = -1LL;
    else
      *(_QWORD *)(a3 + 8) = v16 - v27;
  }
  if ( v19 )
  {
    v26 = *(_QWORD *)(a2 + 8LL * v19 + 56);
    if ( v18 < v26 )
      *(_QWORD *)(a3 + 16) = -1LL;
    else
      *(_QWORD *)(a3 + 16) = v18 - v26;
  }
  if ( !v12 )
  {
    *(_DWORD *)(a1 + 92) &= ~2u;
    RmpMemoryMonitorLogCurrentMetrics((struct _RM_SYSTEM_MEMORY_METRICS *)&v41);
    return v21;
  }
  v23 = v37;
  if ( v12 != 4
    && (unsigned int)dword_1800E1278 > 4
    && (byte_1800E1288 & 9) != 0
    && (qword_1800E1290 & 9) == qword_1800E1290 )
  {
    v28 = v22;
    v61 = &v31;
    v35 = v37;
    v59 = &v35;
    v32 = v18;
    v57 = (__int64 *)&v32;
    *(_QWORD *)&v56 = &v33;
    *(_QWORD *)&v55 = &v28;
    v54.m128i_i64[0] = (__int64)&v30;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v33 = v16;
    LODWORD(v30) = v12;
    v62 = 8LL;
    v60 = 8LL;
    v58 = 8LL;
    *((_QWORD *)&v56 + 1) = 8LL;
    *((_QWORD *)&v55 + 1) = 4LL;
    v54.m128i_i64[1] = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    v31 = _mm_srli_si128(v3, 8).m128i_u64[0];
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    *(_QWORD *)&v53 = &unk_1800D3D76;
    UserData.Reserved = 2;
    *((_QWORD *)&v53 + 1) = 0x10000008CLL;
    LODWORD(v29) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  ResetEvent(*(HANDLE *)(a1 + 32));
  switch ( v12 )
  {
    case 2:
      v24 = RmpMemoryMonitorEmptyWorkingSets(a1, &v41, &v36, 0LL);
LABEL_23:
      v21 = v24;
      break;
    case 3:
      v21 = RmpMemoryMonitorEmptyWorkingSets(a1, &v41, &v36, 1LL);
      if ( v21 != 2 )
        break;
      v39.m128i_i64[1] = *(_QWORD *)(a2 + 112);
      v24 = RmpMemoryMonitorEmptySystemStore(a1, (__int64)&v41, (__int64)&v36);
      goto LABEL_23;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      break;
    case 5:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 308LL) & 2) != 0 )
      {
        v21 = RmpMemoryMonitorEmptyWorkingSets(a1, &v41, &v36, 31LL);
        if ( v21 != 2 )
          break;
      }
      v24 = RmpMemoryMonitorRevokeExtraActivities(a1, v23);
      goto LABEL_23;
    case 7:
      v21 = RmpMemoryMonitorRevokeAnyHost(
              (__int64 *)a1,
              (__int64)&v41,
              (__int64)&v36,
              (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
      if ( v21 == 2 )
        goto LABEL_25;
      break;
    default:
      v21 = 2;
      break;
  }
  *(_DWORD *)(a1 + 92) &= ~2u;
LABEL_25:
  if ( dword_1800E1278 )
  {
    if ( v12 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)&v41);
      if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
      {
        v33 = *((_QWORD *)&v44 + 1);
        v32 = v42;
        v50 = (__int64 *)&v33;
        v49.m128i_i64[0] = (__int64)&v32;
        *(_QWORD *)&v48 = &v29;
        *(_DWORD *)&EventDescriptor.Level = 516;
        v46.Ptr = (ULONGLONG)off_1800E1280;
        LODWORD(v29) = v21;
        v51 = 8LL;
        v49.m128i_i64[1] = 8LL;
        *((_QWORD *)&v48 + 1) = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 9LL;
        v46.Size = *(unsigned __int16 *)off_1800E1280;
        *(_QWORD *)&v47 = &unk_1800D3BE8;
        v46.Reserved = 2;
        *((_QWORD *)&v47 + 1) = 0x10000004ALL;
        LODWORD(v30) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &v46);
      }
    }
  }
  return v21;
}
