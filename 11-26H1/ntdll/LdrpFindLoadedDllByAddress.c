/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x1800C6170
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     LdrFindEntryForAddress @ 0x1800C6110 (LdrFindEntryForAddress.c)
 *     LdrpCgLogFailure @ 0x18015CE90 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // esi
  _QWORD *v8; // rdx
  _QWORD *SchedulerSharedDataSlot; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx

  v4 = 0;
  v8 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v10 = 0LL;
    a4 = SchedulerSharedDataSlot;
    while ( *a4 )
    {
      v10 = (unsigned int)(v10 + 1);
      ++a4;
      if ( (unsigned int)v10 >= 8 )
        goto LABEL_8;
    }
    v8 = &SchedulerSharedDataSlot[v10];
    if ( v8 )
      *v8 = &LdrpModuleDatatableLock;
  }
LABEL_8:
  v11 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
  if ( v11 )
    RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock, (unsigned __int64)v8, v11, (unsigned __int64)a4);
  v12 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801CB410 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
    {
      v12 = 0LL;
      goto LABEL_30;
    }
    v12 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( v12 )
  {
    do
    {
      v13 = *(_QWORD *)(v12 - 152);
      if ( a1 < v13 )
      {
        v14 = *(_QWORD *)v12;
      }
      else
      {
        if ( a1 < v13 + *(unsigned int *)(v12 - 136) )
          break;
        v14 = *(_QWORD *)(v12 + 8);
      }
      if ( (qword_1801CB410 & 1) != 0 && v14 )
        v12 ^= v14;
      else
        v12 = v14;
    }
    while ( v12 );
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 - 48);
      v16 = v12 - 200;
      if ( *(_DWORD *)(v15 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 276));
      *a2 = v16;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(v16 + 152) + 56LL);
    }
  }
LABEL_30:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  if ( !v12 )
    return (unsigned int)-1073741515;
  return v4;
}
