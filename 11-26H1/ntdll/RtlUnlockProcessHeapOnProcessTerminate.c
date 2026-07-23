/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x18007E8E4
 * Callers:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E7A0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 */

NTSTATUS __fastcall RtlUnlockProcessHeapOnProcessTerminate(unsigned __int8 a1)
{
  int v1; // edi
  _QWORD *ProcessHeap; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx

  v1 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    v3 = ProcessHeap[7];
    RtlpHpUnlockHeapForProcessCloneOrTerminate(ProcessHeap, (unsigned int)(a1 != 0) + 1);
    RtlpReleaseDescriptorPseudoGlobalLock(v3, v1);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    if ( a1 )
    {
      v4 = ProcessHeap[44];
      *(_QWORD *)(v4 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(v4 + 8) = -2;
      *(_DWORD *)(v4 + 12) = 1;
      *(_QWORD *)(v4 + 24) = 0LL;
    }
    RtlUnlockHeap(ProcessHeap);
  }
  return RtlpReleaseHeapListLock(v1);
}
