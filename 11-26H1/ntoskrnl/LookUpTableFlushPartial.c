/*
 * XREFs of LookUpTableFlushPartial @ 0x140AEFFE8
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140AEFF60 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AF00B0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 * Callees:
 *     FlushLookUpTableBucket @ 0x1404C4898 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x140AF0060 (UpdateInternalStatsOnFlush.c)
 */

void __fastcall LookUpTableFlushPartial(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v4 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    v6 = *(_DWORD *)(a1 + 260);
    v7 = v6;
    do
    {
      if ( *(_QWORD *)(a1 + 8LL * v7) )
        v4 += FlushLookUpTableBucket(a1, v7, a3, a4);
      v7 = ((_BYTE)v7 + 1) & 0x1F;
    }
    while ( v7 != v6 && v4 < 0x10 );
    *(_DWORD *)(a1 + 260) = v7;
    UpdateInternalStatsOnFlush(a1, v4);
  }
}
