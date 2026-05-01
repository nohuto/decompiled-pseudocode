/*
 * XREFs of ?RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006444
 * Callers:
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x1800060F4 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

bool __fastcall RmpActivityHostIsKillable(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  char *v2; // rdi
  DWORD v3; // esi
  int v5; // ebp
  _QWORD *Value; // rbx
  char *v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // r8
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = (char *)a1 + 56;
  v3 = HampLockTrackerId;
  v16 = 0;
  v17 = 0;
  v5 = *(_DWORD *)(v1 + 620) & 4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(v2);
  if ( (*((_QWORD *)v2 + 83) & 0x2000000000000LL) == 0 )
    goto LABEL_14;
  v7 = (char *)*((_QWORD *)v2 + 76);
  v8 = v7 == v2 + 608 ? 0LL : (__int64)(v7 - 96);
  while ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 112) & 0x200) != 0 )
      goto LABEL_14;
    v9 = *(_QWORD *)(v8 + 96);
    v10 = *(_QWORD *)(v8 + 80);
    v8 = 0LL;
    if ( v9 != v10 + 608 )
      v8 = v9 - 96;
  }
  if ( v5
    || (RmHamHostGetCurrentState(
          (struct _RM_HAM_ACTIVITY_HOST *)v2,
          (union _RM_OPTIMIZATION_STATE *)&v16,
          (union _RM_OPTIMIZATION_STATE *)&v17),
        (v16 & 0x80u) != 0)
    && (v17 & 0x80u) == 0 )
  {
    v11 = 1;
  }
  else
  {
LABEL_14:
    v11 = 0;
  }
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v12[2]-- == 1 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(v2);
  return v11 && (v5 || (*((_BYTE *)a1 + 1168) & 4) != 0);
}
