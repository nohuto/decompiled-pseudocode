/*
 * XREFs of PspLockJobAssignment @ 0x140AAC904
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x140AAC7A0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx

  if ( a1 )
    --*(_WORD *)(a1 + 486);
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.PropagateBoostsEntry, 0LL, 0LL, a4);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.PropagateBoostsEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.PropagateBoostsEntry,
      v4,
      (__int64)&PspSiloMonitorLock.PropagateBoostsEntry);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
