/*
 * XREFs of WheapReportDeferredLiveDumps @ 0x14084F9C4
 * Callers:
 *     WheaCrashDumpInitializationComplete @ 0x14084F960 (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     WheapReportLiveDump @ 0x14084FACC (WheapReportLiveDump.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 WheapReportDeferredLiveDumps()
{
  void *v0; // rbx
  void *v1; // rax
  __int64 v2; // rcx
  bool v3; // di
  unsigned int v4; // esi
  __int64 v5; // rax

  v0 = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
  v1 = *(void **)&CmpContextListLock.ThreadFlags2;
  if ( *(struct _KTHREAD **)&CmpContextListLock.ThreadFlags2 != (struct _KTHREAD *)&CmpContextListLock.512 )
  {
    if ( *(struct _KTHREAD **)(*(_QWORD *)&CmpContextListLock.ThreadFlags2 + 8LL) != (struct _KTHREAD *)&CmpContextListLock.512
      || (v2 = **(_QWORD **)&CmpContextListLock.ThreadFlags2,
          *(_QWORD *)(**(_QWORD **)&CmpContextListLock.ThreadFlags2 + 8LL) != *(_QWORD *)&CmpContextListLock.ThreadFlags2) )
    {
LABEL_18:
      __fastfail(3u);
    }
    *(_QWORD *)&CmpContextListLock.ThreadFlags2 = **(_QWORD **)&CmpContextListLock.ThreadFlags2;
    v0 = v1;
    *(_QWORD *)(v2 + 8) = &CmpContextListLock.512;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
  v3 = 0;
  v4 = 0;
  while ( v0 )
  {
    if ( !v3 )
      v4 = WheapReportLiveDump(v0);
    ExFreePoolWithTag(v0, 0x61656857u);
    if ( !v3 )
      v3 = v4 != 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
    v0 = *(void **)&CmpContextListLock.ThreadFlags2;
    if ( *(struct _KTHREAD **)&CmpContextListLock.ThreadFlags2 == (struct _KTHREAD *)&CmpContextListLock.512 )
    {
      v0 = 0LL;
    }
    else
    {
      if ( *(struct _KTHREAD **)(*(_QWORD *)&CmpContextListLock.ThreadFlags2 + 8LL) != (struct _KTHREAD *)&CmpContextListLock.512 )
        goto LABEL_18;
      v5 = **(_QWORD **)&CmpContextListLock.ThreadFlags2;
      if ( *(_QWORD *)(**(_QWORD **)&CmpContextListLock.ThreadFlags2 + 8LL) != *(_QWORD *)&CmpContextListLock.ThreadFlags2 )
        goto LABEL_18;
      *(_QWORD *)&CmpContextListLock.ThreadFlags2 = **(_QWORD **)&CmpContextListLock.ThreadFlags2;
      *(_QWORD *)(v5 + 8) = &CmpContextListLock.512;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpContextListLock.Process);
  }
  return v4;
}
