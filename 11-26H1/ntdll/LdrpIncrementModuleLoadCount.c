/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x18003F2D0
 * Callers:
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180016FA0 (TppExecuteWaitCallback.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     LdrGetDllHandleByName @ 0x18007BCD0 (LdrGetDllHandleByName.c)
 *     LdrGetDllHandleByMapping @ 0x18007D850 (LdrGetDllHandleByMapping.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 *     LdrAddRefDll @ 0x1800C3BF0 (LdrAddRefDll.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
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
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&LdrpModuleDatatableLock, (unsigned __int64)a2);
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
