/*
 * XREFs of ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E6C
 * Callers:
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000FABC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostUpdateSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  bool v6; // zf
  __int64 *v7; // rax
  __int64 v8; // rdx

  RmpAcquireGlobalLock();
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL)));
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker(a1, 0);
  if ( HampLockTrackerId != -1 )
  {
    v4 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v5 = *v4;
    if ( (*v4 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v6 = v4[2]-- == 1;
    if ( v6 )
      *v4 = v5 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800E3390 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *v7;
    if ( (*v7 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v6 = v7[1]-- == 1;
    if ( v6 )
      *v7 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  }
}
