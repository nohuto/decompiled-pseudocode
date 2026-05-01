/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180004DC0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __m128i v5; // xmm1
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-91h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v14[5]; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v16; // [rsp+B0h] [rbp-19h]
  __int128 v17; // [rsp+C0h] [rbp-9h]
  __m128i v18; // [rsp+D0h] [rbp+7h]
  __int128 v19; // [rsp+E0h] [rbp+17h]

  v2 = *a1;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_OWORD *)(a2 + 112) = 0LL;
  UserData = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)&UserData);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v2 + 200),
    (struct _RM_REMEDIATION_ACTIONS *)(v2 + 256),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&UserData,
    UserData.Ptr,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v14[1] = v16;
  v5 = v18;
  v14[0] = UserData;
  v6 = v17;
  *(_WORD *)(v2 + 164) = 0;
  v7 = *(_QWORD *)(a2 + 104);
  v14[3] = v5;
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v14[2] = v6;
  v14[4] = v19;
  if ( v8 <= v7 )
    return 3LL;
  UserData.Ptr = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  *(_QWORD *)&UserData.Size = 0LL;
  v18.m128i_i64[0] = 0LL;
  v18.m128i_i64[1] = v7;
  v9 = RmpMemoryMonitorEmptyWorkingSets(a1, v14, &UserData, 6LL);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v12 = v8;
    v18.m128i_i64[0] = (__int64)&v12;
    v11[0] = v9;
    *(_QWORD *)&v17 = v11;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v18.m128i_i64[1] = 8LL;
    *((_QWORD *)&v17 + 1) = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    *(_QWORD *)&v16 = &unk_1800D3E0E;
    UserData.Reserved = 2;
    *((_QWORD *)&v16 + 1) = 0x100000041LL;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v9;
}
