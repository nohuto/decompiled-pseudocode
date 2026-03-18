/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x1407E231C
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407CC1EC (PopDirectedDripsNotifyTransitionFailed.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140B45AA4 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

void __fastcall PopDirectedDripsDiagTraceBroadcastFailureDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  __int64 v9; // rdi
  struct _LIST_ENTRY *i; // rbx

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
      v5,
      (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD *)(a1 + 776);
  if ( v9 )
    *(_DWORD *)(v9 + 152) |= 0x20u;
  for ( i = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
        i != (struct _LIST_ENTRY *)&PopDirectedDripsUmLock.ApcStateFill[24];
        i = i->Flink )
  {
    if ( HIDWORD(i[2].Flink) == LODWORD(PopDirectedDripsUmLock.ThreadListEntry.Flink) )
    {
      ++HIDWORD(i[13].Flink);
      if ( v9 )
        PopDirectedDripsDiagInsertErrorRecord(i, v9, 5LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
}
