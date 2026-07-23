/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180018190
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x1800FBAD0 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800F8B80 (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // r15
  int i; // edi
  char *v6; // rsi
  __int64 v7; // rdx
  void *v8; // rdx
  void *v9; // rcx
  unsigned int v10; // ecx
  PVOID Heap_0; // rax

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = AlternateResourceModuleCount; i > 0; --i )
    {
      v6 = (char *)AlternateResourceModules + 64 * (__int64)(i - 1);
      if ( *((PVOID *)v6 + 1) == DllHandle )
      {
        v7 = *((_QWORD *)v6 + 4);
        if ( v7 && (!v2 || v2 == *(_WORD *)v6) && v7 != -1 )
        {
          v8 = (void *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( *((_DWORD *)v6 + 14) == -1073741799 )
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
          else
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
          v9 = (void *)*((_QWORD *)v6 + 5);
          if ( v9 )
          {
            NtClose(v9);
            *((_QWORD *)v6 + 5) = 0LL;
          }
          *((_QWORD *)v6 + 4) = 0LL;
        }
        if ( i != AlternateResourceModuleCount )
          LdrpRemoveAlternateModuleCacheItem((unsigned int)(i - 1));
        v10 = AlternateResourceModuleCount - 1;
        AlternateResourceModuleCount = v10;
        if ( v10 )
        {
          if ( v10 < AltResMemBlockCount - 32 )
          {
            Heap_0 = RtlReAllocateHeap_0(
                       NtCurrentPeb()->ProcessHeap,
                       0,
                       AlternateResourceModules,
                       (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
            if ( !Heap_0 )
            {
              v4 = 0;
              break;
            }
            AlternateResourceModules = Heap_0;
            AltResMemBlockCount -= 32;
          }
          v4 = 1;
        }
        else
        {
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
          v4 = 1;
        }
      }
    }
  }
  else
  {
    v4 = 1;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
