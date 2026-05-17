/*
 * XREFs of RtlLockProcessHeapOnProcessTerminate @ 0x180087520
 * Callers:
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180014484 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 */

char RtlLockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  void *ProcessHeap; // rbx

  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) != -571548178 )
    return RtlLockHeap((__int64)v0->ProcessHeap);
  RtlpAcquireDescriptorPseudoGlobalLockEx(*((_QWORD *)ProcessHeap + 7), 0);
  return RtlpHpLockHeapForProcessCloneOrTerminate(ProcessHeap);
}
