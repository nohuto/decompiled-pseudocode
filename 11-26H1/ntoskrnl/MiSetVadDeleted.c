/*
 * XREFs of MiSetVadDeleted @ 0x140468E88
 * Callers:
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiSetVadDeleted(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // r15
  __int64 v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  AutoBoost *v12; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // rdx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v7 = *(_QWORD *)(Process + 1040);
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(Process + 608, 0LL, 0LL, a4);
  v12 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 608), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 608), v8, Process + 608);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v9);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  v14 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, 2LL);
  }
  MiLockVadTree(3u, v14, v11);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  *(_DWORD *)(a1 + 48) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1600));
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
}
