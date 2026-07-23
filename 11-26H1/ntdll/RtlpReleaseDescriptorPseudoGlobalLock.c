/*
 * XREFs of RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668
 * Callers:
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180060000 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18007E8E4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x180037B30 (RtlWakeAddressAll.c)
 *     ZwFlushProcessWriteBuffers @ 0x180160C90 (ZwFlushProcessWriteBuffers.c)
 */

void __fastcall RtlpReleaseDescriptorPseudoGlobalLock(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx

  v2 = *(_DWORD *)(a1 + 24);
  if ( (v2 & 2) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 36) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_QWORD *)(a1 + 40) = 1LL;
    }
    if ( (*(_DWORD *)(a1 + 32))-- == 1 )
    {
      if ( (v2 & 4) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v5 + 224) = 0;
        v6 = (volatile signed __int32 *)(v5 + 20);
        ZwFlushProcessWriteBuffers();
        _InterlockedAnd(v6, 0xFFFFFFEF);
        RtlWakeAddressAll((PVOID)v6);
        *(_DWORD *)(a1 + 24) &= ~4u;
      }
      *(_DWORD *)(a1 + 36) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
    }
  }
}
