/*
 * XREFs of LdrpTryAcquireLoaderLock @ 0x1800E4BB8
 * Callers:
 *     LdrLockLoaderLock @ 0x1800E49F0 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

char LdrpTryAcquireLoaderLock()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  char *v4; // rcx

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v4 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v4 & 0x20) != 0 )
      LdrpLogEtwEvent(5248, -1LL, -1, -1, 0LL, 0LL);
  }
  if ( RtlTryEnterCriticalSection(&LdrpLoaderLock) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
        LdrpLogEtwEvent(5249, -1LL, -1, -1, 0LL, 0LL);
    }
    return 1;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
        LdrpLogEtwEvent(5250, -1LL, -1, -1, 0LL, 0LL);
    }
    return 0;
  }
}
