/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x18003F140
 * Callers:
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180016FA0 (TppExecuteWaitCallback.c)
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrGetDllFullName @ 0x18003D1A0 (LdrGetDllFullName.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C2F70 (LdrpGetDelayloadExportDll.c)
 *     LdrAddRefDll @ 0x1800C3BF0 (LdrAddRefDll.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800DDF20 (LdrDisableThreadCalloutsForDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015B9B0 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015B9F0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015BAA0 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(PVOID a1, __int64 *a2, _DWORD *a3, char *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  volatile signed __int64 *v12; // rax
  unsigned __int64 Root; // rax
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
      v12 = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&LdrpModuleDatatableLock,
                                         17LL,
                                         0LL);
      if ( v12 )
        RtlpAcquireSRWLockSharedContended(
          (volatile signed __int64 *)&LdrpModuleDatatableLock,
          (unsigned __int64)v8,
          v12,
          a4);
      Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex.Root )
          goto LABEL_33;
        Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      }
      while ( Root )
      {
        if ( (unsigned __int64)a1 >= *(_QWORD *)(Root - 152) )
        {
          if ( (unsigned __int64)a1 <= *(_QWORD *)(Root - 152) )
          {
            v15 = *(_QWORD *)(Root - 48);
            v7 = Root - 200;
            if ( *(_DWORD *)(v15 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v7 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 56LL);
            break;
          }
          v14 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v14 = *(_QWORD *)Root;
        }
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v14 )
          Root ^= v14;
        else
          Root = v14;
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
