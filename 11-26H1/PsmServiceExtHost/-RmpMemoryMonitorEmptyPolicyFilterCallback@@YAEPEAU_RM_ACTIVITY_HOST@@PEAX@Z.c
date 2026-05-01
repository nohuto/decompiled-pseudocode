/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180007750
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // r8d
  int v6; // eax
  __int64 v7; // r13
  int v8; // r9d
  int v9; // r11d
  bool v10; // di
  int v11; // ecx
  int v12; // esi
  int v13; // r14d
  int v14; // r12d
  int v15; // r14d
  DWORD v17; // ebp
  _QWORD *Value; // rsi
  struct _RM_ACTIVITY_HOST *v19; // rcx
  char *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v25; // ecx
  int v26; // eax
  int v27; // [rsp+60h] [rbp+8h] BYREF
  int v28; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 314) )
    return 0;
  v3 = *((_DWORD *)a1 + 313);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 360);
  v6 = 0;
  v7 = *((_QWORD *)a1 + 6);
  v8 = *(_DWORD *)(v7 + 616);
  v9 = v8 & 1;
  v10 = (v3 & 0x10) == 0 && (v5 & 0x200) == 0;
  if ( v10 )
  {
    v11 = 2 * v9;
    if ( (v5 & 0x100) == 0 )
      v11 |= 2 * (v8 & 2);
    v6 = v11 | 2;
    v12 = v8 & 4;
    if ( (v8 & 4) != 0 )
      v6 = v11;
  }
  else
  {
    v12 = v8 & 4;
  }
  v13 = v6 | v3 & 0x27;
  v14 = v3 & v13;
  if ( (*((_WORD *)a1 + 584) & 4) != 0 && (v3 & 0x100) != 0 )
  {
    v25 = 0;
    if ( v10 )
    {
      v26 = 2 * v9;
      if ( (v5 & 0x100) == 0 )
        v26 |= 2 * (v8 & 2);
      if ( v12 )
        v25 = v26;
      else
        v25 = v26 | 0x22;
    }
    if ( (v3 & (v25 | v3 & 0x27)) != (v25 | v3 & 0x27) && (v14 != v13 || ((unsigned __int8)a2 & 0x20) == 0) )
      return 1;
  }
  if ( ((unsigned __int8)a2 & 1) == 0 )
    return 0;
  if ( v14 == v13 )
    return 0;
  v15 = *(_DWORD *)(v7 + 620) & 4;
  if ( !v15 && (*((_BYTE *)a1 + 1168) & 4) == 0 )
    return 0;
  v17 = HampLockTrackerId;
  v27 = 0;
  v28 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared((char *)a1 + 56);
  if ( (*((_QWORD *)a1 + 90) & 0x2000000000000LL) != 0 )
  {
    v19 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 83);
    v20 = 0LL;
    if ( v19 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 664) )
      v20 = (char *)v19 - 96;
    while ( v20 )
    {
      if ( (*((_DWORD *)v20 + 28) & 0x200) != 0 )
        goto LABEL_25;
      v21 = *((_QWORD *)v20 + 12);
      if ( v21 == *((_QWORD *)v20 + 10) + 608LL )
        v20 = 0LL;
      else
        v20 = (char *)(v21 - 96);
    }
    if ( v15
      || (RmHamHostGetCurrentState(
            (struct _RM_ACTIVITY_HOST *)((char *)a1 + 56),
            (union _RM_OPTIMIZATION_STATE *)&v27,
            (union _RM_OPTIMIZATION_STATE *)&v28),
          (v27 & 0x80u) != 0)
      && (v28 & 0x80u) == 0 )
    {
      v4 = 1;
    }
  }
LABEL_25:
  if ( HampLockTrackerId != -1 )
  {
    v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v23 = *v22;
    if ( (*v22 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v22[2]-- == 1 )
      *v22 = v23 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 56);
  return v4 && (*((_BYTE *)a1 + 1168) & 0x30) != 0;
}
