/*
 * XREFs of LdrpFreeTls @ 0x1800D72A0
 * Callers:
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 */

__int64 LdrpFreeTls()
{
  struct _TEB *v0; // rbx
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdi

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
      if ( v3 )
      {
        v4 = v3;
        do
        {
          if ( *ThreadLocalStoragePointer )
            RtlFreeHeap_0();
          ++ThreadLocalStoragePointer;
          --v4;
        }
        while ( v4 );
      }
      RtlFreeHeap_0();
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpTlsLock);
  }
  return LdrpCleanupThreadTlsData();
}
