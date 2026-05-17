/*
 * XREFs of RtlpReleaseDescriptorPseudoGlobalLock @ 0x180015F38
 * Callers:
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1800148D0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180087568 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x18004D5B0 (RtlWakeAddressAll.c)
 *     ZwFlushProcessWriteBuffers @ 0x180160D90 (ZwFlushProcessWriteBuffers.c)
 */

void *__fastcall RtlpReleaseDescriptorPseudoGlobalLock(__int64 a1, __int64 a2)
{
  int v2; // r8d
  void *result; // rax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx

  v2 = *(_DWORD *)(a1 + 24);
  if ( (v2 & 2) == 0 )
  {
    if ( (_DWORD)a2 )
    {
      a2 = 1LL;
      *(_DWORD *)(a1 + 32) = 1;
      result = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(a1 + 36) = (_DWORD)result;
      *(_QWORD *)(a1 + 40) = 1LL;
    }
    if ( (*(_DWORD *)(a1 + 32))-- == 1 )
    {
      if ( (v2 & 4) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v6 + 224) = 0;
        v7 = (volatile signed __int32 *)(v6 + 20);
        ZwFlushProcessWriteBuffers();
        _InterlockedAnd(v7, 0xFFFFFFEF);
        RtlWakeAddressAll(v7);
        *(_DWORD *)(a1 + 24) &= ~4u;
      }
      *(_DWORD *)(a1 + 36) = 0;
      return (void *)RtlReleaseSRWLockExclusive(a1 + 40, a2);
    }
  }
  return result;
}
