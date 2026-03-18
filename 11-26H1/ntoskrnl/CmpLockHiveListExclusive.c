/*
 * XREFs of CmpLockHiveListExclusive @ 0x1408C84C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14046EEE4 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1404D3C6C (CmpUnJoinClassOfTrust.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408D42C4 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockHiveListExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.ApcState.ApcListHead[1], 0LL, 0LL, a4);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock.ApcStateFill[16], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpCallbackListLock.ApcState.ApcListHead[1],
      v4,
      (__int64)&CmpCallbackListLock.ApcState.ApcListHead[1]);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
