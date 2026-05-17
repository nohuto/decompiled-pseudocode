/*
 * XREFs of RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180014484
 * Callers:
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1800148D0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x180087520 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpAcquireDescriptorPseudoGlobalLockEx(__int64 a1, char a2)
{
  char v3; // di
  void *UniqueThread; // rsi
  volatile signed __int32 *v6; // rcx

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
      v6 = (volatile signed __int32 *)(a1 + 40);
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
