/*
 * XREFs of RaidQueueWaitCheckDpcRoutine @ 0x14004F1F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterCheckWaitTimeout @ 0x14004B9A8 (RaidAdapterCheckWaitTimeout.c)
 */

void __fastcall RaidQueueWaitCheckDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = DeferredContext[8];
  if ( v4 && *(_DWORD *)v4 == 1094997074 && *(_DWORD *)(v4 + 88) != 5 )
    RaidAdapterCheckWaitTimeout((KSPIN_LOCK *)v4);
}
