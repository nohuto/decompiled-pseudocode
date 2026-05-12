/*
 * XREFs of RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x140065100
 * Callers:
 *     <none>
 * Callees:
 *     StorGetOutstandingIoCount @ 0x14005C75C (StorGetOutstandingIoCount.c)
 *     StorFreeExtraIoResourceForAdapter @ 0x1400AF7CC (StorFreeExtraIoResourceForAdapter.c)
 */

void __fastcall RaidAdapterReclaimIoResourceTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _DWORD *v7; // rax

  v4 = DeferredContext[8];
  v5 = *(unsigned int *)(v4 + 1032);
  if ( (unsigned int)v5 > 1 )
  {
    v6 = 0;
    v7 = (_DWORD *)(*(_QWORD *)(v4 + 1024) + 136LL);
    do
    {
      v6 += *v7;
      v7 += 80;
      --v5;
    }
    while ( v5 );
    if ( v6 > *(_DWORD *)(v4 + 588) && !(unsigned int)StorGetOutstandingIoCount(v4) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 1044)) != 2 )
        return;
      StorFreeExtraIoResourceForAdapter(v4);
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 1044), 0);
  }
}
