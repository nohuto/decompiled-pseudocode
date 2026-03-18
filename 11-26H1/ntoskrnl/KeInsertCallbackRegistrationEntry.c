/*
 * XREFs of KeInsertCallbackRegistrationEntry @ 0x1407B8C88
 * Callers:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407B8DC4 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     _guard_check_icall_no_overrides @ 0x140731180 (_guard_check_icall_no_overrides.c)
 */

void __fastcall KeInsertCallbackRegistrationEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  _BOOL8 v8; // r8
  unsigned __int64 Flink; // rdx
  unsigned __int64 v10; // rax

  guard_check_icall_no_overrides(*(_QWORD *)(a1 + 24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[32], 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object,
      v4,
      (__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object);
  v8 = 0LL;
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  Flink = (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink;
  if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[56] & 1) != 0 )
  {
    if ( KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink )
      Flink = (unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1] ^ (unsigned __int64)KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink;
    else
      Flink = v8;
  }
  if ( Flink )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 24) < *(_QWORD *)(Flink + 24) )
      {
        v10 = *(_QWORD *)Flink;
        if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[56] & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= Flink;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(Flink + 8);
        if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[56] & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_17;
          v10 ^= Flink;
        }
        if ( !v10 )
        {
LABEL_17:
          LOBYTE(v8) = 1;
          break;
        }
      }
      Flink = v10;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1], Flink, v8, a1);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Object);
  KeLeaveGuardedRegion();
}
