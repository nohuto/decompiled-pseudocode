/*
 * XREFs of NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4
 * Callers:
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterRemoveNvmeControllerFromList @ 0x1400DC224 (NvmeAdapterRemoveNvmeControllerFromList.c)
 *     NvmeAdapterDisconnectDeleteFabricControllerQueue @ 0x1400E7C84 (NvmeAdapterDisconnectDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterStopControllerWorkItems @ 0x1400EE650 (NvmeAdapterStopControllerWorkItems.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400FB2AC (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140108FE8 (NvmeNamespaceProcessQueueRequests.c)
 */

int __fastcall NvmeAdapterStopFabricNvmeControllerOperations(__int64 a1, char a2)
{
  int v4; // eax
  _QWORD **v5; // rdi
  _QWORD *i; // rax
  _QWORD *j; // rsi
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned __int16 k; // di
  unsigned __int16 v11; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int16 m; // di
  __int64 v15; // rdx

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL) )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 128LL));
    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 64LL));
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 192LL), 0, 1);
  }
  NvmeAdapterStopControllerWorkItems(a1, a2 == 0);
  v4 = *(_DWORD *)(a1 + 572);
  if ( v4 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 136) & 0x200LL) != 0 )
    {
      NvmeAdapterRemoveNvmeControllerFromList(*(_QWORD *)(a1 + 128), a1);
      *(_QWORD *)(a1 + 136) &= ~0x200uLL;
      v5 = (_QWORD **)(a1 + 640);
      for ( i = *(_QWORD **)(a1 + 640); i != v5; i = (_QWORD *)*i )
        i[11] &= ~2uLL;
      for ( j = *v5; j != v5; j = (_QWORD *)*j )
        NvmeNamespaceProcessQueueRequests(j - 3);
    }
    if ( *(_QWORD *)(a1 + 728) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 948), 1u);
      NvmeControllerSubmissionQueueQuiesce(a1);
      v9 = *(_WORD *)(a1 + 20);
      for ( k = 0; k < v9; ++k )
      {
        NvmeAdapterDrainFabricControllerQueue(*(_QWORD *)(a1 + 728) + 192LL * k);
        v9 = *(_WORD *)(a1 + 20);
      }
      v11 = 0;
      if ( v9 )
      {
        do
        {
          LOBYTE(v8) = 2;
          NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 728) + 192LL * v11++, v8, 3221226048LL);
        }
        while ( v11 < *(_WORD *)(a1 + 20) );
      }
      NvmeControllerSubmissionQueueCompletionQuiesce(a1);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 948), 1u);
      for ( m = 0; m < *(_WORD *)(a1 + 20); ++m )
        NvmeAdapterDisconnectDeleteFabricControllerQueue(*(_QWORD *)(a1 + 728) + 192LL * m, v12, v13);
    }
    *(_WORD *)(a1 + 22) = 0;
  }
  else if ( v4 == 2 )
  {
    NvmeAdapterFabricRegisterDeregisterHost((_QWORD *)a1, 0);
  }
  NvmeAdapterDrainFabricControllerQueue(*(_QWORD *)(a1 + 712));
  LOBYTE(v15) = 2;
  NvmeCompleteSubmissionQueueRequests(*(_QWORD *)(a1 + 712), v15, 3221226048LL);
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           4LL,
           (__int64)L"Controller operations stopped",
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0);
}
