/*
 * XREFs of ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000C808
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18000C380 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18000C470 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18000CCA8 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000CDA4 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampManagerQuerySystemState@@YAXPEAU_HAM_SYSTEM_STATE@@@Z @ 0x18007BF20 (-HampManagerQuerySystemState@@YAXPEAU_HAM_SYSTEM_STATE@@@Z.c)
 */

__int64 __fastcall HampActCanBeStarted(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  DWORD v4; // edi
  __int64 v5; // r15
  _QWORD *Value; // rbx
  int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // r8
  bool v10; // zf
  bool LogoffInProgress; // bl
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // r8
  unsigned int CanBeStartedInSystemState; // eax
  DWORD v17; // esi
  unsigned int v18; // r15d
  __int64 v19; // r13
  _QWORD *v20; // rdi
  DWORD CurrentThreadId; // eax
  unsigned __int64 v22; // rdi
  unsigned int v23; // r12d
  DWORD v24; // esi
  __int64 v25; // r13
  _QWORD *v26; // rdi
  int v27; // esi
  __int64 *v28; // rax
  __int64 v29; // r8
  bool v30; // di
  __int64 v31; // rax
  __int64 v33; // [rsp+60h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v33 = 0LL;
  v1 &= 0xFFFFFFFFFFFFFFFCuLL;
  HampManagerQuerySystemState((struct _HAM_SYSTEM_STATE *)&v33);
  HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)(v1 - 440));
  v3 = HIDWORD(v33) & 0xFFFFFFFD | (*(_DWORD *)(v1 + 220) != 0 ? 2 : 0);
  HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)(v1 - 440));
  v4 = HampLockTrackerId;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockShared(v5 + 96);
  v7 = v3 ^ (*(_DWORD *)(v5 + 144) ^ v3) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 0x100) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v10 = v8[9]-- == 1;
    if ( v10 )
      *v8 = v9 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  RtlReleaseSRWLockShared(v5 + 96);
  LogoffInProgress = HampSessionGetLogoffInProgress((struct _HAM_SESSION *)v5);
  HIDWORD(v33) = v7 & 0xFFFFFFF3 | (4
                                  * ((2 * LogoffInProgress) | HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL)) & 1));
  v12 = v33;
  do
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v15 = *v14;
      if ( (*v14 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v10 = v14[2]-- == 1;
      if ( v10 )
        *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v13 + 8) = 0;
    RtlReleaseSRWLockExclusive(v13);
    CanBeStartedInSystemState = HampActCanBeStartedInSystemState(a1, &v33);
    v17 = HampLockTrackerId;
    v18 = CanBeStartedInSystemState;
    v19 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v20 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v20 |= 2uLL;
      ++v20[2];
    }
    RtlAcquireSRWLockExclusive(v19);
    CurrentThreadId = GetCurrentThreadId();
    v33 = 0LL;
    *(_DWORD *)(v19 + 8) = CurrentThreadId;
    v22 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerQuerySystemState((struct _HAM_SYSTEM_STATE *)&v33);
    HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)(v22 - 440));
    v23 = HIDWORD(v33) & 0xFFFFFFFD | (*(_DWORD *)(v22 + 220) != 0 ? 2 : 0);
    HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)(v22 - 440));
    v24 = HampLockTrackerId;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL) + 160LL);
    if ( HampLockTrackerId != -1 )
    {
      v26 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v26 |= 0x100uLL;
      ++v26[9];
    }
    RtlAcquireSRWLockShared(v25 + 96);
    v27 = v23 ^ (*(_DWORD *)(v25 + 144) ^ v23) & 1;
    if ( HampLockTrackerId != -1 )
    {
      v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v29 = *v28;
      if ( (*v28 & 0x100) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v10 = v28[9]-- == 1;
      if ( v10 )
        *v28 = v29 & 0xFFFFFFFFFFFFFEFFuLL;
    }
    RtlReleaseSRWLockShared(v25 + 96);
    v30 = HampSessionGetLogoffInProgress((struct _HAM_SESSION *)v25);
    HIDWORD(v33) = v27 & 0xFFFFFFF3 | (4
                                     * ((2 * v30) | HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 792LL) + 88LL) + 88LL)) & 1));
    v31 = v12;
    v12 = v33;
  }
  while ( v31 != v33 );
  if ( !v18 )
    return (unsigned int)HampActCanBeStartedInHostState(a1);
  return v18;
}
