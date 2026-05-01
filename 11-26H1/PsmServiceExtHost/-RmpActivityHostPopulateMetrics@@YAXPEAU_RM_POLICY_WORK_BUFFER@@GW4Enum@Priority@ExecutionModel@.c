/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007160 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180057A7C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180057EC4 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 *a1, __int16 a2, int a3)
{
  int v3; // r9d
  __int16 v4; // r15
  __int64 v6; // rsi
  __int16 v7; // cx
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _RM_ACTIVITY_HOST *v12; // rdi
  __int16 v13; // ax
  unsigned int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // rdi
  char *v17; // rax
  char v18; // cl
  __int64 v19; // rdx
  DWORD v20; // ecx
  __int64 *v21; // rax
  __int64 v22; // r8
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // cl
  DWORD v26; // esi
  char *v27; // r15
  _QWORD *Value; // rdi
  char *v29; // rcx
  bool v30; // sf
  unsigned __int64 v31; // rax
  __int16 v32; // ax
  __int16 v33; // [rsp+20h] [rbp-68h]
  unsigned int v34; // [rsp+24h] [rbp-64h] BYREF
  struct _RM_ACTIVITY_HOST *v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+90h] [rbp+8h]
  __int16 v41; // [rsp+A8h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 9);
  v34 = 0;
  v4 = a2;
  if ( v3 )
  {
    v6 = *a1;
    v7 = a2 & 2;
    v8 = 0;
    v9 = 0;
    v10 = *(_QWORD *)(v6 + 48);
    v36 = v6;
    v37 = *(_QWORD *)(v10 + 48);
    v33 = v7;
    v41 = a2 & 1;
    do
    {
      v11 = v6 + ((unsigned __int64)v9 << 6);
      v12 = *(struct _RM_ACTIVITY_HOST **)(v11 + 48);
      v13 = *(_WORD *)(v11 + 62);
      v35 = v12;
      v38 = v13;
      if ( v7 )
      {
        if ( (v13 & 2) == 0 )
        {
          v30 = (int)RmpActivityHostQueryCommit(
                       v12,
                       (unsigned __int64 *)(v11 + 8),
                       0LL,
                       (unsigned __int64 *)(v6 + ((unsigned __int64)v9 << 6))) < 0;
          LOBYTE(v13) = v38;
          if ( !v30 )
            *(_WORD *)(v11 + 62) |= 2u;
        }
      }
      if ( !v41 )
        goto LABEL_46;
      if ( (v13 & 1) == 0 )
      {
        v26 = HampLockTrackerId;
        v27 = (char *)v12 + 56;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
          v12 = v35;
        }
        RtlAcquireSRWLockShared(v27);
        v29 = (char *)*((_QWORD *)v27 + 76);
        v24 = 80;
        if ( v29 != v27 + 608 )
        {
          v17 = v29 - 96;
          if ( v29 != (char *)96 )
          {
            do
            {
              v18 = v17[562];
              if ( (v18 == 3 || v18 == 2 && v17[563]) && (v17[552] & 8) == 0 )
              {
                if ( *(_QWORD *)v11 < *((_QWORD *)v27 + 108) )
                {
                  v25 = v24;
                  if ( v24 >= (unsigned __int8)v17[427] )
                    v25 = v17[427];
                  v24 = v25;
                }
                else if ( v24 >= (unsigned __int8)v17[428] )
                {
                  v24 = v17[428];
                }
              }
              v19 = *((_QWORD *)v17 + 12);
              if ( v19 == *((_QWORD *)v17 + 10) + 608LL )
                break;
              v17 = (char *)(v19 - 96);
            }
            while ( v19 != 96 );
          }
        }
        v20 = HampLockTrackerId;
        *(_DWORD *)(v11 + 56) = v24;
        if ( v20 != -1 )
        {
          v21 = (__int64 *)TlsGetValue(v20);
          v22 = *v21;
          if ( (*v21 & 2) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          if ( v21[2]-- == 1 )
            *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        RtlReleaseSRWLockShared(v27);
        *(_WORD *)(v11 + 62) |= 1u;
        LOBYTE(v13) = v38;
        v6 = v36;
        v4 = a2;
      }
      if ( *(_DWORD *)(v11 + 56) > a3 )
      {
LABEL_46:
        if ( (v4 & 0x40) != 0
          && (v13 & 0x40) == 0
          && (int)RmpActivityHostQueryOfferedMemory(v12, (unsigned __int64 *)(v11 + 40)) >= 0 )
        {
          *(_WORD *)(v11 + 62) |= 0x40u;
        }
        if ( v9 != v8 )
        {
          v31 = (unsigned __int64)v8 << 6;
          *(_OWORD *)(v31 + v6) = *(_OWORD *)v11;
          *(_OWORD *)(v31 + v6 + 16) = *(_OWORD *)(v11 + 16);
          *(_OWORD *)(v31 + v6 + 32) = *(_OWORD *)(v11 + 32);
          *(_OWORD *)(v31 + v6 + 48) = *(_OWORD *)(v11 + 48);
        }
        ++v8;
      }
      v7 = v33;
      ++v9;
    }
    while ( v9 < *((_DWORD *)a1 + 9) );
    v14 = 0;
    *((_DWORD *)a1 + 9) = v8;
    if ( (v4 & 0x2C) != 0 )
      RmpSystemQueryMemUtilMetricsForHosts((struct _RM_ACTIVITY_HOST_METRICS *)v6, v8, v4 & 0x2C);
    if ( *((_DWORD *)a1 + 9) )
    {
      v15 = v37;
      do
      {
        v16 = v6 + ((unsigned __int64)v14 << 6);
        if ( (v4 & 0x10) != 0 )
        {
          v32 = *(_WORD *)(v16 + 62);
          if ( (v32 & 0x10) == 0
            && (v32 & 8) != 0
            && (int)RmpSystemIsActivityHostTooLargeForSwap(
                      (struct _RM_ACTIVITY_HOST_METRICS *)(v6 + ((unsigned __int64)v14 << 6)),
                      *(_DWORD *)(v15 + 640),
                      &v34) >= 0 )
          {
            *(_WORD *)(v16 + 62) |= 0x10u;
            if ( v34 )
              *(_WORD *)(v16 + 60) |= 1u;
          }
        }
        ++v14;
      }
      while ( v14 < *((_DWORD *)a1 + 9) );
    }
    *((_WORD *)a1 + 22) |= v4;
  }
  else
  {
    *((_WORD *)a1 + 22) |= a2;
  }
}
