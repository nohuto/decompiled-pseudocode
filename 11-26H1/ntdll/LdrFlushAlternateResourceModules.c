/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x180108900
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrFlushAlternateResourceModules(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  void *v7; // rcx

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock, a2);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v3 = (unsigned __int64)i << 6;
      v4 = AlternateResourceModules;
      v5 = *(_QWORD *)(v3 + AlternateResourceModules + 32);
      if ( v5 != -1 && v5 )
      {
        v6 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v3 + AlternateResourceModules + 56) == -1073741799 )
          RtlFreeHeap_0();
        else
          NtUnmapViewOfSection(-1LL, v6);
        *(_QWORD *)(v3 + v4 + 32) = 0LL;
        v7 = *(void **)(v3 + v4 + 40);
        if ( v7 )
        {
          NtClose(v7);
          *(_QWORD *)(v3 + v4 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap_0();
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
