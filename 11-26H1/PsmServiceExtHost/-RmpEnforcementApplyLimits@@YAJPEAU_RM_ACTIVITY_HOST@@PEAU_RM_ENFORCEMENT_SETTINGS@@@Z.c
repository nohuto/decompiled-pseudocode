/*
 * XREFs of ?RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800452F0
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180045D84 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpEnforcementApplyLimits(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  DWORD v7; // esi
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  int v14; // edi
  int v15; // esi
  unsigned __int8 v16; // al
  char v17; // cl
  DWORD v18; // ebp
  _QWORD *v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v3 = *((_QWORD *)a1 + 6);
  v22 = *((_QWORD *)a2 + 2);
  v5 = *(_QWORD *)(v3 + 40);
  v23 = *((_QWORD *)a2 + 1);
  v24 = *(_QWORD *)a2;
  result = (*(__int64 (__fastcall **)(__int64, char *, char *, _QWORD, _DWORD, _QWORD, int, unsigned __int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)v5 + 32LL))(
             v5,
             (char *)a1 + 80,
             (char *)a1 + 544,
             *((unsigned int *)a1 + 153),
             *((_DWORD *)a1 + 154),
             *((_QWORD *)a1 + 4),
             *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
             (unsigned __int64)&v22 & -(__int64)(v22 != 0),
             &v24,
             &v23,
             0LL);
  if ( (int)result >= 0 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 56);
    CurrentThreadId = GetCurrentThreadId();
    v10 = HampLockTrackerId;
    *((_DWORD *)a1 + 16) = CurrentThreadId;
    *((_QWORD *)a1 + 147) = *(_QWORD *)a2;
    *((_QWORD *)a1 + 148) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a1 + 149) = *((_QWORD *)a2 + 2);
    if ( v10 != -1 )
    {
      v11 = (__int64 *)TlsGetValue(v10);
      v12 = *v11;
      if ( (*v11 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v13 = v11[2]-- == 1;
      if ( v13 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a1 + 16) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 56);
    v14 = *((_DWORD *)a2 + 6);
    v15 = *((_DWORD *)a1 + 300);
    if ( v15 == v14 && ((*((_BYTE *)a2 + 28) ^ *((_BYTE *)a1 + 1204)) & 2) == 0 )
      return 0LL;
    if ( v15 < 1 == v14 < 1 || (result = RmpSystemApplyPsmPriorityToHost(a1), (int)result >= 0) )
    {
      v16 = v14 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0;
      v17 = v15 >= 2 && (*((_BYTE *)a1 + 1204) & 2) != 0;
      if ( v16 != v17 )
        RmHamHostActOnProcesses(
          a1,
          0x2000u,
          1u,
          (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
          (void *)v16);
      v18 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v19 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v18) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v19 |= 2uLL;
        ++v19[2];
      }
      RtlAcquireSRWLockExclusive((char *)a1 + 56);
      *((_DWORD *)a1 + 16) = GetCurrentThreadId();
      *((_DWORD *)a1 + 300) = *((_DWORD *)a2 + 6);
      *((_BYTE *)a1 + 1204) ^= (*((_BYTE *)a2 + 28) ^ *((_BYTE *)a1 + 1204)) & 2;
      if ( HampLockTrackerId != -1 )
      {
        v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v21 = *v20;
        if ( (*v20 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v13 = v20[2]-- == 1;
        if ( v13 )
          *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 16) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 56);
      return 0LL;
    }
  }
  return result;
}
