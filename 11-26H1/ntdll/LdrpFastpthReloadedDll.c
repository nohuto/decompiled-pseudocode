/*
 * XREFs of LdrpFastpthReloadedDll @ 0x18003D2C0
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x18003B3E0 (LdrpRecordModuleDependency.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(PUNICODE_STRING String1, __int16 a2, __int64 a3, PVOID *a4)
{
  int Count; // ebx
  _UNICODE_STRING *v7; // rax
  __int64 result; // rax
  PVOID v9; // rax
  __int64 v10; // rbp
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int i; // ecx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v14) = 0;
  Count = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = String1;
    String1 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return 3221226021LL;
    v7 = 0LL;
  }
  result = LdrpFindLoadedDllByName(v7, String1, (__int64)&v14);
  if ( (int)result >= 0 )
  {
    v9 = *a4;
    if ( *((_DWORD *)*a4 + 67) == 9 )
    {
      Count = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, (_DWORD)v9, 0, -1073740608, 2);
    }
    else if ( (_DWORD)v14 == 9 )
    {
      Count = LdrpIncrementModuleLoadCount(v9);
      if ( Count >= 0 )
      {
        Count = 0;
        v10 = (__int64)*a4;
        LODWORD(v14) = 0;
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
            RtlpAcquireSRWLockExclusiveContended(
              (volatile signed __int64 *)&LdrpModuleDatatableLock,
              (unsigned __int64)SchedulerSharedDataSlot);
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
