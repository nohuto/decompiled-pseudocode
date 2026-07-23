/*
 * XREFs of KeWaitForGate @ 0x1403CC5D0
 * Callers:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiWaitForPageWriteCompletion @ 0x1403CC510 (MiWaitForPageWriteCompletion.c)
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiDrainControlAreaWrites @ 0x140486A68 (MiDrainControlAreaWrites.c)
 *     MiLockControlAreaSectionExtend @ 0x1404A8244 (MiLockControlAreaSectionExtend.c)
 *     MiAttemptSectionDelete @ 0x1404B8D88 (MiAttemptSectionDelete.c)
 *     MiUnlinkWorkingSet @ 0x1404CE3CC (MiUnlinkWorkingSet.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     KeSrcuFree @ 0x1405F7980 (KeSrcuFree.c)
 *     KiEpfStart @ 0x1405F9914 (KiEpfStart.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1406FFB3C (MiWaitForExtentDeletions.c)
 *     MiResolveAwePageConflict @ 0x1407076B4 (MiResolveAwePageConflict.c)
 *     MiDeleteHardwareAccelerators @ 0x14071419C (MiDeleteHardwareAccelerators.c)
 *     MiWaitForInFlightAcceleratorDeletions @ 0x14071494C (MiWaitForInFlightAcceleratorDeletions.c)
 *     PspMarkSessionDeletePending @ 0x14077D2E8 (PspMarkSessionDeletePending.c)
 *     KeRcuSynchronize @ 0x1407BD260 (KeRcuSynchronize.c)
 *     KeSrcuSynchronize @ 0x1407BE320 (KeSrcuSynchronize.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1409DDA3C (PspQueryWorkingSetWatch.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  $08E725EC6134F01F525383E5528526A8 *v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  struct _LIST_ENTRY *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v7 = KiBeginThreadWait((ULONG_PTR)CurrentThread, 0);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v3;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v3, v6, v8);
    if ( *(_DWORD *)(v3 + 4) )
    {
      *(_DWORD *)(v3 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread, 0LL, v9);
      return v7;
    }
    v10 = *(struct _LIST_ENTRY **)(v3 + 16);
    if ( v10->Flink != (struct _LIST_ENTRY *)(v3 + 8) )
      __fastfail(3u);
    v4->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(v3 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    v10->Flink = (struct _LIST_ENTRY *)v4;
    *(_QWORD *)(v3 + 16) = v4;
    _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v7 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL, 0, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
