/*
 * XREFs of ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004070
 * Callers:
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180004008 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180004B90 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006BD9C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008A370 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall RmpActivityHostIsRevocable(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // r14d
  unsigned int v4; // esi
  DWORD v5; // ebp
  _QWORD *Value; // rbx
  struct _RM_ACTIVITY_HOST *v7; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  __int64 *v11; // rax
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 620LL) & 4;
  if ( !v2 && (*((_BYTE *)a1 + 1168) & 4) == 0 )
    return 0LL;
  v4 = 0;
  v5 = HampLockTrackerId;
  v14 = 0;
  v15 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared((char *)a1 + 56);
  if ( (*((_QWORD *)a1 + 90) & 0x2000000000000LL) == 0 )
    goto LABEL_16;
  v7 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 83);
  v8 = 0LL;
  if ( v7 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 664) )
    v8 = (char *)v7 - 96;
  while ( v8 )
  {
    if ( (*((_DWORD *)v8 + 28) & 0x200) != 0 )
      goto LABEL_16;
    v9 = *((_QWORD *)v8 + 12);
    if ( v9 == *((_QWORD *)v8 + 10) + 608LL )
      v8 = 0LL;
    else
      v8 = (char *)(v9 - 96);
  }
  if ( v2 )
    goto LABEL_26;
  RmHamHostGetCurrentState(
    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 56),
    (union _RM_OPTIMIZATION_STATE *)&v14,
    (union _RM_OPTIMIZATION_STATE *)&v15);
  if ( (v14 & 0x80u) == 0 )
  {
LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
  if ( (v15 & 0x80u) == 0 )
LABEL_26:
    v10 = 1;
  else
    v10 = 0;
LABEL_17:
  if ( HampLockTrackerId != -1 )
  {
    v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v12 = *v11;
    if ( (*v11 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v11[2]-- == 1 )
      *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 56);
  if ( !v10 )
    return 0LL;
  if ( (*((_BYTE *)a1 + 1168) & 0x30) != 0 )
    return 1;
  return v4;
}
