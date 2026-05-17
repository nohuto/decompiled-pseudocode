/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180052D40
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x180050E60 (LdrpRecordModuleDependency.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(int a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int Count; // ebx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  Count = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a1;
    a1 = 0;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return 3221226021LL;
    v7 = 0;
  }
  result = LdrpFindLoadedDllByName(v7, a1, a2, (_DWORD)a4, (__int64)&v14);
  if ( (int)result >= 0 )
  {
    v9 = *a4;
    if ( *(_DWORD *)(*a4 + 268) == 9 )
    {
      Count = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v9, 0, -1073740608, 2);
    }
    else if ( v14 == 9 )
    {
      Count = LdrpIncrementModuleLoadCount(v9);
      if ( Count >= 0 )
      {
        Count = 0;
        v10 = *a4;
        v14 = 0;
        if ( a3 )
        {
          SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
          if ( SchedulerSharedDataSlot )
          {
            for ( i = 0; i < 8; ++i )
            {
              if ( !SchedulerSharedDataSlot[i] )
              {
                SchedulerSharedDataSlot[i] = &LdrpModuleDatatableLock;
                break;
              }
            }
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
            RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
          if ( *(_DWORD *)(*(_QWORD *)(a3 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
          {
            LdrpRecordModuleDependency(a3, v10, 0LL, &v14);
            Count = v14;
          }
          else
          {
            Count = -1073741515;
          }
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        }
        if ( Count >= 0 )
          return (unsigned int)Count;
        if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
        {
          LdrpDecrementModuleLoadCountEx(*a4, 0LL);
        }
        else
        {
          LdrpDrainWorkQueue(0LL);
          LdrpDecrementModuleLoadCountEx(*a4, 0LL);
          LdrpDropLastInProgressCount();
        }
      }
    }
    LdrpDereferenceModule(*a4);
    *a4 = 0LL;
    return (unsigned int)Count;
  }
  return result;
}
