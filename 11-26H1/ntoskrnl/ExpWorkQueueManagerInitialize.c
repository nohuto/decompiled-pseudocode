/*
 * XREFs of ExpWorkQueueManagerInitialize @ 0x1408464F8
 * Callers:
 *     ExpPartitionInitialize @ 0x140845EE4 (ExpPartitionInitialize.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140201160 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpWorkQueueManagerInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  memset_0((void *)(a1 + 16), 0, 0x108uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 16), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 40), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
  KeInitializeTimer2(a1 + 128, (__int64)ExpWorkQueueManagerReaperTimer, a1, 8LL);
  KeQueryNodeActiveAffinity(**(_WORD **)(a1 + 8), &Affinity, 0LL);
  result = __popcnt(Affinity.Mask);
  *(_WORD *)(a1 + 276) = 0;
  if ( (_DWORD)result )
  {
    result = KeSelectIdealProcessor((__int64)&Affinity, (_WORD *)(a1 + 276), 0LL, 0);
    *(_WORD *)(a1 + 276) = result;
  }
  return result;
}
