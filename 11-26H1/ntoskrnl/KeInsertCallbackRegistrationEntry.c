/*
 * XREFs of KeInsertCallbackRegistrationEntry @ 0x1407BBCE8
 * Callers:
 *     KeRegisterAvailableCpusChangeNotification @ 0x1407BBE24 (KeRegisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 */

void __fastcall KeInsertCallbackRegistrationEntry(PRTL_BALANCED_NODE Node)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  _RTL_BALANCED_NODE *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  guard_check_icall_no_overrides((__int64)Node[1].Children[0]);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.320, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.320, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&KiSupervisorXStateFeaturesLock.320,
      v4,
      (__int64)&KiSupervisorXStateFeaturesLock.320);
  v8 = 0LL;
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v9 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16];
  if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[24] & 1) != 0 )
  {
    if ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16] )
      v9 = (unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16] ^ *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16];
    else
      v9 = (unsigned __int64)v8;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( Node[1].Children[0] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v9 + 24) )
      {
        v10 = *(_QWORD *)v9;
        if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[24] & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill5[24] & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_17;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_17:
          LOBYTE(v8) = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  RtlRbInsertNodeEx(
    (PRTL_RB_TREE)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16],
    (PRTL_BALANCED_NODE)v9,
    (BOOLEAN)v8,
    Node);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.320);
  KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.320);
  KeLeaveGuardedRegion();
}
