/*
 * XREFs of GetQueueCompletionAffinity @ 0x14011F158
 * Callers:
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall GetQueueCompletionAffinity(unsigned int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  KIRQL v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // edx

  *(_OWORD *)a2 = 0LL;
  v3 = 10LL * a1;
  v4 = *((_QWORD *)g_CpuInfo + 3);
  if ( *(_QWORD *)(v4 + 80LL * a1 + 48) )
  {
    v5 = v4 + 80LL * a1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 24));
    *(_QWORD *)a2 = 1LL << *(_DWORD *)(v4 + 8 * v3 + 36);
    *(_WORD *)(a2 + 8) = *(_WORD *)(v4 + 8 * v3 + 16);
    v7 = *(_QWORD *)(v4 + 8 * v3 + 48);
    LODWORD(v8) = *(_DWORD *)(v4 + 8 * v3 + 36) + 1;
    if ( (unsigned int)v8 > 0x3F )
      LODWORD(v8) = 0;
    if ( ((unsigned int)v8 & (unsigned int)v7) == 0 )
    {
      do
      {
        v9 = v8 + 1;
        v8 = 0LL;
        if ( v9 <= 0x3F )
          v8 = v9;
      }
      while ( (v8 & v7) == 0 );
    }
    *(_DWORD *)(v4 + 8 * v3 + 36) = v8;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 24), v6);
  }
}
