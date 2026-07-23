/*
 * XREFs of RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18005FBB4
 * Callers:
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180060000 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18007E890 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18005ED80 (RtlTryAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpAcquireDescriptorPseudoGlobalLockEx(__int64 a1, char a2)
{
  char v3; // di
  void *UniqueThread; // rsi
  _RTL_SRWLOCK *v6; // rcx

  v3 = 1;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( (_DWORD)UniqueThread == *(_DWORD *)(a1 + 36) )
    {
      ++*(_DWORD *)(a1 + 32);
    }
    else
    {
      v6 = (_RTL_SRWLOCK *)(a1 + 40);
      if ( a2 )
      {
        if ( !RtlTryAcquireSRWLockExclusive(v6) )
          return 0;
      }
      else
      {
        RtlAcquireSRWLockExclusive(v6);
      }
      *(_DWORD *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 36) = (_DWORD)UniqueThread;
    }
  }
  return v3;
}
