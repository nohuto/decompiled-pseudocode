/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x18007E890
 * Callers:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18005FBB4 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

BOOLEAN RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  void *ProcessHeap; // rbx

  RtlEnterCriticalSection(&RtlpProcessHeapsLock);
  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) != -571548178 )
    return RtlLockHeap(v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(*((_QWORD *)ProcessHeap + 7), 0);
  return RtlpHpLockHeapForProcessCloneOrTerminate((_RTL_SRWLOCK *)ProcessHeap);
}
