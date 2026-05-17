/*
 * XREFs of LdrpBuildForwarderLink @ 0x180050D90
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpRecordModuleDependency @ 0x180050E60 (LdrpRecordModuleDependency.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, char *a2)
{
  __int64 result; // rax
  char *v3; // rdi
  char *SchedulerSharedDataSlot; // r9
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v3 = a2;
  v8 = 0;
  if ( a1 )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      while ( (unsigned int)result < 8 )
      {
        a2 = &SchedulerSharedDataSlot[8 * result];
        if ( !*(_QWORD *)a2 )
        {
          *(_QWORD *)a2 = &LdrpModuleDatatableLock;
          break;
        }
        result = (unsigned int)(result + 1);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)a2);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, v3, 0LL, &v8);
      v7 = v8;
    }
    else
    {
      v7 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    return v7;
  }
  return result;
}
