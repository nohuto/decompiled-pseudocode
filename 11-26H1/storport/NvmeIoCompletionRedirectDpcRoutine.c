/*
 * XREFs of NvmeIoCompletionRedirectDpcRoutine @ 0x14011A2F0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 */

void __fastcall NvmeIoCompletionRedirectDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        char *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v5; // rbp
  __int64 CurrentProcessorNumber; // r14
  PSLIST_ENTRY v7; // rax
  struct _SLIST_ENTRY *Next; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx

  v5 = (union _SLIST_HEADER *)(SystemArgument1 + 192);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  _InterlockedExchange((volatile __int32 *)SystemArgument1 + 64, 0);
  v7 = ExpInterlockedFlushSList((PSLIST_HEADER)SystemArgument1 + 12);
  if ( !v7 )
    goto LABEL_9;
  do
  {
    do
    {
      Next = v7->Next;
      v9 = *(_QWORD *)(*((_QWORD *)&v7[3].Next + 1) + 24LL);
      IofCompleteRequest((PIRP)&v7[-8], 0);
      v10 = *(_QWORD *)(v9 + 128);
      if ( !*(_BYTE *)v10
        && _InterlockedExchangeAdd(
             *(volatile signed __int32 **)(*(_QWORD *)(v10 + 24) + 8 * CurrentProcessorNumber),
             0xFFFFFFFF) == 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 128LL);
        if ( NvmeNamespaceCheckAndAcquirePoFx(v9) )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v9 + 128) + 8LL), 0LL, 2LL);
          NvmeNamespaceReleasePoFx(v9);
        }
        v12 = *(_QWORD *)(v11 + 160);
        if ( *(_BYTE *)v12 == 1 )
          PoFxIdleComponent(**(_QWORD **)(v12 + 8), 0LL, 2LL);
      }
      v7 = Next;
    }
    while ( Next );
LABEL_9:
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
      break;
    v7 = ExpInterlockedFlushSList(v5);
  }
  while ( v7 );
}
