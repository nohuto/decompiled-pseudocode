/*
 * XREFs of MmResourcesAvailable @ 0x14047FC6C
 * Callers:
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiFreeExcessSegments @ 0x140474D10 (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x1404A4ED0 (MiIssuePageExtendRequest.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 */

__int64 __fastcall MmResourcesAvailable(__int16 a1, struct _KLOCK_ENTRIES *a2, int a3)
{
  struct _KLOCK_ENTRIES *v3; // r9
  unsigned __int64 v4; // r11
  _KPROCESS *Process; // rax
  volatile __int64 WaitStatus; // rdx
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdx
  char *p_BoostBitmap; // rax
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v11; // rax
  volatile unsigned __int8 *v12; // rdx
  signed __int8 v13; // cf
  AutoBoost *v14; // rbp
  KIRQL v15; // bl
  __int64 v17; // rdx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v19; // rcx

  v3 = a2;
  v4 = ((unsigned __int64)a2 >> 12) + (((unsigned __int16)a2 & 0xFFF) != 0LL);
  if ( (a1 & 0x100) != 0 )
  {
    Process = stru_140E36558.ApcState.Process;
    WaitStatus = stru_140E36558.WaitStatus;
  }
  else
  {
    Process = (_KPROCESS *)qword_140E2C588;
    WaitStatus = *(_QWORD *)&MiState;
  }
  v7 = 0;
  v8 = (WaitStatus - (_QWORD)Process) << 12;
  p_BoostBitmap = (char *)&v3[5041].Entries[0].8;
  if ( a3 != 16 )
    p_BoostBitmap = (char *)&v3[20164].Entries[0].BoostBitmap;
  if ( (unsigned __int64)p_BoostBitmap <= v8 )
  {
    if ( (a1 & 0x100) != 0
      && v4 > ((qword_140E3C008 - qword_140E3D700) & (unsigned __int64)-(__int64)(qword_140E3D700 < (unsigned __int64)qword_140E3C008)) )
    {
      MiIssuePageExtendRequest(&MiSystemPartition, v4, 2LL);
      goto LABEL_10;
    }
    if ( (unsigned __int64)&v3[100824].Entries[0].OwnerTree.Min < v8 || qword_140E3D3D0 < 0x40000 )
      return 1LL;
    v7 = 1;
  }
  if ( (a1 & 0x100) == 0 )
  {
    v15 = ExAcquireSpinLockExclusive(&dword_140E3BD80);
    if ( !*(_DWORD *)(stru_140E37DC8.CycleTime + 4) )
      KePulseEvent((PRKEVENT)stru_140E37DC8.CycleTime, 0, 0);
    if ( v15 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E3BD80);
    else
      ExReleaseSpinLockExclusive(&dword_140E3BD80, v15);
    goto LABEL_33;
  }
LABEL_10:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E36558.ApcState.ApcListHead[1], 0LL, 0LL, v3);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E36558.ApcStateFill[16], 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E36558.ApcState.ApcListHead[1],
      v11,
      (__int64)&stru_140E36558.ApcState.ApcListHead[1]);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v12) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v14 + 33), v12, 1);
    }
    else
    {
      *((_BYTE *)v14 + 10) = 1;
    }
  }
  if ( !*((_DWORD *)stru_140E37DC8.StackBase + 1) )
    KePulseEvent((PRKEVENT)stru_140E37DC8.StackBase, 0, 0);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&stru_140E36558.ApcState.ApcListHead[1].Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E36558.ApcState.ApcListHead[1]);
  KeAbPostRelease((unsigned __int64)&stru_140E36558.ApcState.ApcListHead[1]);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v19 = &CurrentThread->152;
    if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v19->ApcState.ApcListHead[0].Flink != v19 )
      KiCheckForKernelApcDelivery((__int64)v19, v17);
  }
LABEL_33:
  MiFreeExcessSegments(0LL);
  return v7;
}
