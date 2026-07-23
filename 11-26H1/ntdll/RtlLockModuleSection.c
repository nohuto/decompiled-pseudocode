/*
 * XREFs of RtlLockModuleSection @ 0x1800DF340
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x1800DF120 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800DF1F0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800DF470 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x1800DF4B0 (LdrEnumerateLoadedModules.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  _OWORD *v3; // rbx
  _OWORD *Heap_0; // rax
  int v5; // edi
  _QWORD *v6; // rax
  __int128 Context; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  Context = 0LL;
  v9 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v3 = (_OWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap_0;
    if ( Heap_0 )
    {
      *Heap_0 = 0LL;
      Heap_0[1] = 0LL;
      *((_QWORD *)Heap_0 + 4) = 0LL;
      *(_QWORD *)&Context = Address;
      DWORD2(Context) = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, RtlpModuleEnumeratorCallback, &Context);
      if ( v5 >= 0 )
      {
        v5 = DWORD2(Context);
        if ( (SDWORD2(Context) & 0x80000000) == 0 )
        {
          v3[1] = v9;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_1801C4560;
          if ( *off_1801C4560 != (_UNKNOWN *)&RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v3 = &RtlpLockedSectionList;
          *((_QWORD *)v3 + 1) = v6;
          *v6 = v3;
          off_1801C4560 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v5 < 0 && v3 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
