/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x140C06280
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140C061E0 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  __int64 Pool2; // rbx
  struct _LIST_ENTRY *Flink; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = ExAllocatePool2(0x42uLL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
      memmove((void *)(Pool2 + 32), (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
      Flink = CmpContextListLock.QueueListEntry.Flink;
      if ( CmpContextListLock.QueueListEntry.Flink->Flink != (struct _LIST_ENTRY *)&CmpContextListLock.512 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = &CmpContextListLock.512;
      *(_QWORD *)(Pool2 + 8) = Flink;
      Flink->Flink = (struct _LIST_ENTRY *)Pool2;
      CmpContextListLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)Pool2;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
