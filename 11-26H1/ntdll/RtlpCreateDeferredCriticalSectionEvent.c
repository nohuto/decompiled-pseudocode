/*
 * XREFs of RtlpCreateDeferredCriticalSectionEvent @ 0x180069660
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x18013DF00 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 */

HANDLE __fastcall RtlpCreateDeferredCriticalSectionEvent(__int64 a1)
{
  signed __int64 v1; // rdi
  signed __int64 v3; // rbx
  HANDLE EventHandle; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1LL;
  EventHandle = (HANDLE)-1LL;
  if ( RtlpForceCSToUseEvents )
  {
    if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
      v1 = (signed __int64)EventHandle;
    else
      EventHandle = (HANDLE)-1LL;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1, 0LL);
  if ( !v3 )
    return EventHandle;
  if ( EventHandle != (HANDLE)-1LL )
    NtClose(EventHandle);
  return (HANDLE)v3;
}
