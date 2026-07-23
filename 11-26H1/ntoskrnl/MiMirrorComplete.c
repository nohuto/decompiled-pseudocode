/*
 * XREFs of MiMirrorComplete @ 0x140C070E4
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     MiUnlockAllMemoryLists @ 0x140708EC8 (MiUnlockAllMemoryLists.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiMirrorComplete(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf
  void *v6; // rcx

  LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) = (*(_BYTE *)(a1 + 64) & 8) != 0 ? 3 : 0;
  if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E2ED08.WaitBlockFill11[32]);
  stru_140E2ED08.WaitBlock[0].SparePtr = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    _InterlockedDecrement(&dword_140E36158);
  if ( *(_BYTE *)(a1 + 20) != 17 )
  {
    if ( *(_BYTE *)(a1 + 21) != 17 )
      MiUnlockAllMemoryLists();
    v2 = *(unsigned __int8 *)(a1 + 20);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 20));
    __writecr8(v2);
  }
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
  {
    stru_140E2ED08.WaitBlock[0].Thread = (struct _KTHREAD *)*(unsigned int *)(a1 + 12);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E2ED08.320, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E366D8.SystemCallNumber);
    KeSetEvent((PRKEVENT)&stru_140E2ED08.Timer.TimerListEntry.Blink, 0, 0);
  }
  MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, *(_QWORD *)(a1 + 24));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (*(_WORD *)(v4 + 486))++ == 0xFFFF;
  if ( v5 && *(_QWORD *)(v4 + 152) != v4 + 152 )
    KiCheckForKernelApcDelivery(v4, v3);
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
