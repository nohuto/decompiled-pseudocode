/*
 * XREFs of RtlUnlockModuleSection @ 0x1800E19F0
 * Callers:
 *     RtlpUnregisterLockedMemoryZone @ 0x1800E169C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800E18F4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800E1950 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800E1BD0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x180162B10 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1, __int64 a2)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock, a2);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v4 = 0;
  v5 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v7 = *(_QWORD *)ModuleSectionInLockedSectionList;
      if ( *(_QWORD *)(*(_QWORD *)ModuleSectionInLockedSectionList + 8LL) != ModuleSectionInLockedSectionList
        || (v8 = *(_QWORD **)(ModuleSectionInLockedSectionList + 8), *v8 != v5) )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v4 = ZwUnlockVirtualMemory(-1LL, v5 + 16, v5 + 24, 1LL);
      RtlFreeHeap_0();
    }
  }
  else
  {
    v4 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v4;
}
