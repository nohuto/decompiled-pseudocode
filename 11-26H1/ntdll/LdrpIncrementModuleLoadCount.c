/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x180054D50
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     LdrGetDllHandleByName @ 0x180084930 (LdrGetDllHandleByName.c)
 *     LdrGetDllHandleByMapping @ 0x1800864B0 (LdrGetDllHandleByMapping.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
 *     LdrAddRefDll @ 0x1800C6430 (LdrAddRefDll.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v8; // rcx
  int v9; // eax

  v2 = 0;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0LL;
    a2 = SchedulerSharedDataSlot;
    while ( *a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++a2;
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_8;
    }
    v6 = &SchedulerSharedDataSlot[v5];
    if ( v6 )
      *v6 = &LdrpModuleDatatableLock;
  }
LABEL_8:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)a2);
  v8 = *(_QWORD *)(a1 + 152);
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 != -1 )
  {
    if ( v9 )
    {
      *(_DWORD *)(v8 + 24) = v9 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v8 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
