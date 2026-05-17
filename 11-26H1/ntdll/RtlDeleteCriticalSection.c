/*
 * XREFs of RtlDeleteCriticalSection @ 0x180079550
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     RtlDeleteResource @ 0x1800794C0 (RtlDeleteResource.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x180149F70 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAbPostRelease @ 0x180079680 (RtlAbPostRelease.c)
 *     RtlpGetStackTraceAddressEx @ 0x180079740 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180079A70 (RtlpFreeDebugInfo.c)
 *     RtlReleaseStackTrace @ 0x1801010C0 (RtlReleaseStackTrace.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, __int64 a2)
{
  void *v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 StackTraceAddress; // rax

  v3 = (void *)a1[3];
  if ( !v3 || v3 == (void *)-1LL )
    v4 = 0;
  else
    v4 = NtClose(v3);
  v5 = *a1;
  if ( *a1 && v5 != -1 )
  {
    v7 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, a2);
    v8 = v5 + 16;
    v9 = *(_QWORD *)(v5 + 16);
    if ( v9 )
    {
      v10 = *(_QWORD **)(v5 + 24);
      if ( *(_QWORD *)(v9 + 8) != v8 || *v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)(v5 + 2), *(unsigned __int16 *)(v5 + 44));
    if ( StackTraceAddress )
      RtlReleaseStackTrace(StackTraceAddress);
    *(_OWORD *)v5 = 0LL;
    *(_OWORD *)(v5 + 16) = 0LL;
    *(_OWORD *)(v5 + 32) = 0LL;
    if ( !v7 )
      RtlpFreeDebugInfo(v5);
  }
  if ( (void *)a1[2] == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease(a1, 0LL);
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  a1[4] = 0LL;
  return v4;
}
