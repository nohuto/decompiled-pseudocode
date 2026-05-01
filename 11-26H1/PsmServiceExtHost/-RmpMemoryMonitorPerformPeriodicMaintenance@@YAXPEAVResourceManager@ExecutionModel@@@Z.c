/*
 * XREFs of ?RmpMemoryMonitorPerformPeriodicMaintenance@@YAXPEAVResourceManager@ExecutionModel@@@Z @ 0x1800599B8
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpMemoryMonitorPerformPeriodicMaintenance(struct ExecutionModel::ResourceManager *a1)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx

  if ( a1 )
  {
    v1 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v1) )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800E3390 = GetCurrentThreadId();
    v4 = *((_DWORD *)a1 + 40);
    if ( (v4 & 3) == 0 )
    {
      v5 = *((_QWORD *)a1 + 18);
      *((_DWORD *)a1 + 40) = v4 | 1;
      TpPostWork(v5);
    }
    dword_1800E3390 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v7 = *v6;
      if ( (*v6 & 1) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v6[1]-- == 1 )
        *v6 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
}
