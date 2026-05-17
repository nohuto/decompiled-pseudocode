/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180054BC0
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrGetDllFullName @ 0x180052C20 (LdrGetDllFullName.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     LdrAddRefDll @ 0x1800C6430 (LdrAddRefDll.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800E0680 (LdrDisableThreadCalloutsForDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015BAF0 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015BB30 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015BBE0 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, __int64 *a2, _DWORD *a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax

  v7 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v7 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      v8 = 0LL;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v10 = 0LL;
        v11 = SchedulerSharedDataSlot;
        while ( *v11 )
        {
          v10 = (unsigned int)(v10 + 1);
          ++v11;
          if ( (unsigned int)v10 >= 8 )
            goto LABEL_12;
        }
        v8 = &SchedulerSharedDataSlot[v10];
        if ( v8 )
          *v8 = &LdrpModuleDatatableLock;
      }
LABEL_12:
      v12 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 17LL, 0LL);
      if ( v12 )
        RtlpAcquireSRWLockSharedContended(&LdrpModuleDatatableLock, (unsigned __int64)v8, v12, a4);
      v13 = LdrpModuleBaseAddressIndex;
      if ( (qword_1801CB410 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex )
          goto LABEL_33;
        v13 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      }
      while ( v13 )
      {
        if ( a1 >= *(_QWORD *)(v13 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v13 - 152) )
          {
            v15 = *(_QWORD *)(v13 - 48);
            v7 = v13 - 200;
            if ( *(_DWORD *)(v15 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v7 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 56LL);
            break;
          }
          v14 = *(_QWORD *)(v13 + 8);
        }
        else
        {
          v14 = *(_QWORD *)v13;
        }
        if ( (qword_1801CB410 & 1) != 0 && v14 )
          v13 ^= v14;
        else
          v13 = v14;
      }
LABEL_33:
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    }
  }
  result = 3221225781LL;
  *a2 = v7;
  if ( v7 )
    return 0LL;
  return result;
}
