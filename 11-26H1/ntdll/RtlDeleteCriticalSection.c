/*
 * XREFs of RtlDeleteCriticalSection @ 0x180067D70
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     RtlDeleteResource @ 0x180067CE0 (RtlDeleteResource.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x180149E20 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAbPostRelease @ 0x180067EA0 (RtlAbPostRelease.c)
 *     RtlpGetStackTraceAddressEx @ 0x180067F60 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180068290 (RtlpFreeDebugInfo.c)
 *     RtlReleaseStackTrace @ 0x180100810 (RtlReleaseStackTrace.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  void *LockSemaphore; // rcx
  NTSTATUS v3; // esi
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rdi
  __int64 v6; // r14
  _LIST_ENTRY *p_ProcessLocksList; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  __int64 StackTraceAddress; // rax

  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore || LockSemaphore == (void *)-1LL )
    v3 = 0;
  else
    v3 = NtClose(LockSemaphore);
  DebugInfo = CriticalSection->DebugInfo;
  if ( CriticalSection->DebugInfo && DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(
                          DebugInfo->CreatorBackTraceIndex,
                          DebugInfo->CreatorBackTraceIndexHigh);
    if ( StackTraceAddress )
      RtlReleaseStackTrace(StackTraceAddress);
    *(_OWORD *)&DebugInfo->Type = 0LL;
    DebugInfo->ProcessLocksList = 0LL;
    *(_OWORD *)&DebugInfo->EntryCount = 0LL;
    if ( !v6 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease(CriticalSection, 0LL);
  *(_OWORD *)&CriticalSection->DebugInfo = 0LL;
  *(_OWORD *)&CriticalSection->OwningThread = 0LL;
  CriticalSection->SpinCount = 0LL;
  return v3;
}
