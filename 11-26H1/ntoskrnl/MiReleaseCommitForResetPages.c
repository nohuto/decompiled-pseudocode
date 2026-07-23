/*
 * XREFs of MiReleaseCommitForResetPages @ 0x1406E9B50
 * Callers:
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140534C74 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406E93EC (MiLogResetPagesCommitRelease.c)
 *     MiWalkResetCommitPages @ 0x1406E9FCC (MiWalkResetCommitPages.c)
 */

LONG __fastcall MiReleaseCommitForResetPages(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 *v5; // r15
  __int64 *v6; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // r13
  __int64 i; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  KIRQL v14; // al
  unsigned __int64 v15; // rcx
  KIRQL v16; // dl
  __int64 v17; // rax
  struct _KEVENT *v18; // r14
  __int64 v19; // rcx

  KeForceAttachProcess((_KPROCESS *)a1, 0LL, 0);
  if ( (*(_DWORD *)(a1 + 1208) & 0xF) == 1 )
  {
    v5 = (__int64 *)&unk_140E37988;
    v6 = (__int64 *)&unk_140E379A0;
  }
  else
  {
    v5 = (__int64 *)(a1 + 1224);
    v6 = (__int64 *)(a1 + 1248);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *v6;
  if ( (*(_DWORD *)(*v6 + 48) & 1) != 0 )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v3, v4);
    for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v12) )
    {
      v12 = i;
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i, v10, v11);
      if ( MiIsVadEligibleForCommitRelease(v12) )
        MiWalkResetCommitPages(v12);
      MiUnlockVad((__int64)CurrentThread, v12);
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  }
  v13 = _InterlockedExchange64((volatile __int64 *)(a1 + 1232), 0LL);
  if ( v13 )
    MiReturnCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)), v13, 0);
  v14 = MiLockWorkingSetExclusive(a1 + 1024, v2, v3);
  v15 = *(_QWORD *)(v8 + 32);
  v16 = v14;
  v17 = *v5;
  v18 = *(struct _KEVENT **)(v8 + 40);
  *(_QWORD *)(v8 + 40) = 0LL;
  if ( v15 <= v13 )
    v19 = 0LL;
  else
    v19 = v15 - v13;
  *(_QWORD *)(v8 + 32) = v19;
  *v5 = v13 + v17;
  MiUnlockWorkingSetExclusive(a1 + 1024, v16);
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4LL) )
  {
    MiLogResetPagesCommitRelease();
  }
  KeForceDetachProcess(0LL, 0);
  return KeSetEvent(v18, 0, 0);
}
