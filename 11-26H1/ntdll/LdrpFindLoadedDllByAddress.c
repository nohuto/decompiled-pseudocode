/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x1800C3930
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     LdrFindEntryForAddress @ 0x1800C38D0 (LdrFindEntryForAddress.c)
 *     LdrpCgLogFailure @ 0x18015CD50 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3, char *a4)
{
  unsigned int v4; // esi
  char *v8; // rdx
  char *SchedulerSharedDataSlot; // r10
  __int64 v10; // rax
  volatile signed __int64 *v11; // rax
  unsigned __int64 Root; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx

  v4 = 0;
  v8 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v10 = 0LL;
    a4 = SchedulerSharedDataSlot;
    while ( *(_QWORD *)a4 )
    {
      v10 = (unsigned int)(v10 + 1);
      a4 += 8;
      if ( (unsigned int)v10 >= 8 )
        goto LABEL_8;
    }
    v8 = &SchedulerSharedDataSlot[8 * v10];
    if ( v8 )
      *(_QWORD *)v8 = &LdrpModuleDatatableLock;
  }
LABEL_8:
  v11 = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                     17LL,
                                     0LL);
  if ( v11 )
    RtlpAcquireSRWLockSharedContended(
      (volatile signed __int64 *)&LdrpModuleDatatableLock,
      (unsigned __int64)v8,
      v11,
      a4);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
    {
      Root = 0LL;
      goto LABEL_30;
    }
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( Root )
  {
    do
    {
      v13 = *(_QWORD *)(Root - 152);
      if ( a1 < v13 )
      {
        v14 = *(_QWORD *)Root;
      }
      else
      {
        if ( a1 < v13 + *(unsigned int *)(Root - 136) )
          break;
        v14 = *(_QWORD *)(Root + 8);
      }
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v14 )
        Root ^= v14;
      else
        Root = v14;
    }
    while ( Root );
    if ( Root )
    {
      v15 = *(_QWORD *)(Root - 48);
      v16 = Root - 200;
      if ( *(_DWORD *)(v15 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 276));
      *a2 = v16;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(v16 + 152) + 56LL);
    }
  }
LABEL_30:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  if ( !Root )
    return (unsigned int)-1073741515;
  return v4;
}
