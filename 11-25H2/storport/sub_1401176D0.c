/*
 * XREFs of sub_1401176D0 @ 0x1401176D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 */

void __fastcall sub_1401176D0(struct _KDPC *Dpc, PVOID DeferredContext, char *SystemArgument1, PVOID SystemArgument2)
{
  union _SLIST_HEADER *v5; // r14
  __int64 CurrentProcessorNumber; // rbp
  PSLIST_ENTRY v7; // rax
  struct _SLIST_ENTRY *Next; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  __int64 v16; // rcx

  v5 = (union _SLIST_HEADER *)(SystemArgument1 + 192);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  _InterlockedExchange((volatile __int32 *)SystemArgument1 + 64, 0);
  v7 = ExpInterlockedFlushSList((PSLIST_HEADER)SystemArgument1 + 12);
  if ( !v7 )
    goto LABEL_15;
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
        v12 = *(_QWORD *)(v9 + 128);
        if ( v12 )
        {
          if ( *(_QWORD *)(v12 + 8) )
          {
            v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v12 + 40);
            if ( v13 )
            {
              if ( ExAcquireRundownProtectionCacheAware(v13) )
              {
                PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v9 + 128) + 8LL), 0LL, 2LL);
                v14 = *(_QWORD *)(v9 + 128);
                if ( v14 )
                {
                  if ( *(_QWORD *)(v14 + 8) )
                  {
                    v15 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v14 + 40);
                    if ( v15 )
                      ExReleaseRundownProtectionCacheAware(v15);
                  }
                }
              }
            }
          }
        }
        v16 = *(_QWORD *)(v11 + 160);
        if ( *(_BYTE *)v16 == 1 )
          PoFxIdleComponent(**(_QWORD **)(v16 + 8), 0LL, 2LL);
      }
      v7 = Next;
    }
    while ( Next );
LABEL_15:
    if ( sub_14008F0E0() )
      break;
    v7 = ExpInterlockedFlushSList(v5);
  }
  while ( v7 );
}
