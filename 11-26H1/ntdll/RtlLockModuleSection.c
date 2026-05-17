/*
 * XREFs of RtlLockModuleSection @ 0x1800E1AA0
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x1800E1880 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800E1950 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800E1BD0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x1800E1C10 (LdrEnumerateLoadedModules.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1, __int64 a2)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  __int64 v4; // rbx
  __int64 Heap_0; // rax
  int v6; // edi
  __int64 *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock, a2);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v4 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v6 = 0;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0();
    v4 = Heap_0;
    if ( Heap_0 )
    {
      *(_OWORD *)Heap_0 = 0LL;
      *(_OWORD *)(Heap_0 + 16) = 0LL;
      *(_QWORD *)(Heap_0 + 32) = 0LL;
      *(_QWORD *)&v9 = a1;
      DWORD2(v9) = -1073741275;
      v6 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v9);
      if ( v6 >= 0 )
      {
        v6 = DWORD2(v9);
        if ( (SDWORD2(v9) & 0x80000000) == 0 )
        {
          *(_OWORD *)(v4 + 16) = v10;
          *(_DWORD *)(v4 + 32) = 1;
          v7 = (__int64 *)off_1801C5560;
          if ( *off_1801C5560 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v4 = &RtlpLockedSectionList;
          *(_QWORD *)(v4 + 8) = v7;
          *v7 = v4;
          off_1801C5560 = (_UNKNOWN **)v4;
        }
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v6 < 0 && v4 )
    RtlFreeHeap_0();
  return (unsigned int)v6;
}
