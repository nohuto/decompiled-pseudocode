/*
 * XREFs of LdrpFreeTls @ 0x1800D4260
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 */

__int64 LdrpFreeTls()
{
  struct _TEB *v0; // rbx
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  unsigned int v3; // eax
  void **v4; // rsi
  __int64 v5; // rdi

  v0 = NtCurrentTeb();
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0LL;
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    if ( ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
    {
      v3 = *((_DWORD *)ThreadLocalStoragePointer - 4);
      v4 = ThreadLocalStoragePointer - 2;
      if ( v3 )
      {
        v5 = v3;
        do
        {
          if ( *ThreadLocalStoragePointer )
            RtlFreeHeap_0(LdrpTlsHeap, 0, *((PVOID *)*ThreadLocalStoragePointer - 1));
          ++ThreadLocalStoragePointer;
          --v5;
        }
        while ( v5 );
      }
      RtlFreeHeap_0(LdrpTlsHeap, 0, v4);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpTlsLock);
  }
  return LdrpCleanupThreadTlsData();
}
