/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x1408496B4
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x140849650 (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     WheapReportLiveDump @ 0x1408497BC (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  struct _LIST_ENTRY *v0; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v2; // rcx
  bool v3; // di
  unsigned int v4; // esi
  struct _LIST_ENTRY *v5; // rax

  v0 = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
  Flink = CmpCallbackListLock.QueueListEntry.Flink;
  if ( CmpCallbackListLock.QueueListEntry.Flink != &CmpCallbackListLock.QueueListEntry )
  {
    if ( CmpCallbackListLock.QueueListEntry.Flink->Blink != &CmpCallbackListLock.QueueListEntry
      || (v2 = CmpCallbackListLock.QueueListEntry.Flink->Flink,
          CmpCallbackListLock.QueueListEntry.Flink->Flink->Blink != CmpCallbackListLock.QueueListEntry.Flink) )
    {
LABEL_18:
      __fastfail(3u);
    }
    CmpCallbackListLock.QueueListEntry.Flink = CmpCallbackListLock.QueueListEntry.Flink->Flink;
    v0 = Flink;
    v2->Blink = &CmpCallbackListLock.QueueListEntry;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
  v3 = 0;
  v4 = 0;
  while ( v0 )
  {
    if ( !v3 )
      v4 = WheapReportLiveDump(v0);
    ExFreePoolWithTag(v0, 0x61656857u);
    if ( !v3 )
      v3 = v4 != 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
    v0 = CmpCallbackListLock.QueueListEntry.Flink;
    if ( CmpCallbackListLock.QueueListEntry.Flink == &CmpCallbackListLock.QueueListEntry )
    {
      v0 = 0LL;
    }
    else
    {
      if ( CmpCallbackListLock.QueueListEntry.Flink->Blink != &CmpCallbackListLock.QueueListEntry )
        goto LABEL_18;
      v5 = CmpCallbackListLock.QueueListEntry.Flink->Flink;
      if ( CmpCallbackListLock.QueueListEntry.Flink->Flink->Blink != CmpCallbackListLock.QueueListEntry.Flink )
        goto LABEL_18;
      CmpCallbackListLock.QueueListEntry.Flink = CmpCallbackListLock.QueueListEntry.Flink->Flink;
      v5->Blink = &CmpCallbackListLock.QueueListEntry;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpCallbackListLock.UserAffinity);
  }
  return v4;
}
