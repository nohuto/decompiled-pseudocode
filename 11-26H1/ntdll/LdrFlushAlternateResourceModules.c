/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x1801082A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  unsigned __int64 v1; // rdi
  char *v2; // rsi
  __int64 v3; // rdx
  void *v4; // rdx
  void *v5; // rcx

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v1 = (unsigned __int64)i << 6;
      v2 = (char *)AlternateResourceModules;
      v3 = *(_QWORD *)((char *)AlternateResourceModules + v1 + 32);
      if ( v3 != -1 && v3 )
      {
        v4 = (void *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *(_DWORD *)((char *)AlternateResourceModules + v1 + 56) == -1073741799 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
        else
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
        *(_QWORD *)&v2[v1 + 32] = 0LL;
        v5 = *(void **)&v2[v1 + 40];
        if ( v5 )
        {
          NtClose(v5);
          *(_QWORD *)&v2[v1 + 40] = 0LL;
        }
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
