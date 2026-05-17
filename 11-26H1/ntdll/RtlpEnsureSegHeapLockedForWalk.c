/*
 * XREFs of RtlpEnsureSegHeapLockedForWalk @ 0x1800744A4
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180072524 (RtlpHpTagDestroyHeap.c)
 *     RtlWalkHeap @ 0x1800725D0 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x180072620 (RtlpWalkHeapInternal.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180072680 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180111428 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 */

void *__fastcall RtlpEnsureSegHeapLockedForWalk(__int64 a1)
{
  __int64 v1; // rbx
  void *result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v1 + 24) & 4) == 0 )
  {
    result = (void *)*(unsigned int *)(v1 + 36);
    if ( (unsigned int)NtCurrentTeb()->ClientId.UniqueThread == (_DWORD)result )
    {
      RtlpHpEnvAcquireGlobalLockExclusive(a1 + 20);
      result = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(a1 + 224) = (_DWORD)result;
      *(_DWORD *)(v1 + 24) |= 4u;
    }
  }
  return result;
}
