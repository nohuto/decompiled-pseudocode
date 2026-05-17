/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x180087568
 * Callers:
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180015F38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E9F0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

char __fastcall RtlUnlockProcessHeapOnProcessTerminate(unsigned __int8 a1)
{
  struct _PEB *v1; // rax
  unsigned int v2; // edi
  __int64 ProcessHeap; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx

  v1 = NtCurrentPeb();
  v2 = a1;
  ProcessHeap = (__int64)v1->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) == -571548178 )
  {
    v5 = *(_QWORD *)(ProcessHeap + 56);
    RtlpHpUnlockHeapForProcessCloneOrTerminate(ProcessHeap, (unsigned int)(a1 != 0) + 1);
    LOBYTE(v1) = (unsigned __int8)RtlpReleaseDescriptorPseudoGlobalLock(v5, v2);
  }
  else if ( (*(_DWORD *)(ProcessHeap + 116) & 0x1000000) == 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(ProcessHeap + 352);
      *(_QWORD *)(v4 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(v4 + 8) = -2;
      *(_DWORD *)(v4 + 12) = 1;
      *(_QWORD *)(v4 + 24) = 0LL;
    }
    LOBYTE(v1) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v1;
}
