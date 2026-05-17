/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x18002D090
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x1800FC380 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800F9410 (LdrpRemoveAlternateModuleCacheItem.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // r15
  __int64 v5; // rdx
  int i; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  unsigned int v10; // ecx
  __int64 Heap_0; // rax

  v4 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = AlternateResourceModuleCount; i > 0; --i )
    {
      v7 = AlternateResourceModules + ((__int64)(i - 1) << 6);
      if ( *(_QWORD *)(v7 + 8) == a1 )
      {
        v5 = *(_QWORD *)(v7 + 32);
        if ( v5 && (!a2 || a2 == *(_WORD *)v7) && v5 != -1 )
        {
          v8 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( *(_DWORD *)(v7 + 56) == -1073741799 )
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v8);
          else
            NtUnmapViewOfSection(-1LL, v8);
          v9 = *(void **)(v7 + 40);
          if ( v9 )
          {
            NtClose(v9);
            *(_QWORD *)(v7 + 40) = 0LL;
          }
          *(_QWORD *)(v7 + 32) = 0LL;
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
                       0LL,
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
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules);
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
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock, v5);
  return v4;
}
