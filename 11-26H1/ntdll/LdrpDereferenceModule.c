/*
 * XREFs of LdrpDereferenceModule @ 0x180054E10
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandle @ 0x180050FC0 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrGetDllFullName @ 0x180052C20 (LdrGetDllFullName.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrGetDllHandleByName @ 0x180084930 (LdrGetDllHandleByName.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllHandleByMapping @ 0x1800864B0 (LdrGetDllHandleByMapping.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
 *     LdrpHandleProtectedDelayload @ 0x1800C5420 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     LdrFindEntryForAddress @ 0x1800C6110 (LdrFindEntryForAddress.c)
 *     LdrAddRefDll @ 0x1800C6430 (LdrAddRefDll.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800E0680 (LdrDisableThreadCalloutsForDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     LdrpEnclaveFreeModule @ 0x18013973C (LdrpEnclaveFreeModule.c)
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015BAF0 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015BB30 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015BBE0 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C4E0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     LdrpReleaseTlsEntry @ 0x18007E780 (LdrpReleaseTlsEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x1800E5D90 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  volatile signed __int32 *v13; // rcx

  v2 = *(_QWORD *)(a1 + 152);
  result = *(unsigned int *)(v2 + 24);
  if ( (_DWORD)result != -1 )
  {
    result = *(_QWORD *)v2;
    if ( (*(_DWORD *)(*(_QWORD *)v2 - 56LL) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v5 = 0LL;
          v6 = SchedulerSharedDataSlot;
          while ( *v6 )
          {
            v5 = (unsigned int)(v5 + 1);
            ++v6;
            if ( (unsigned int)v5 >= 8 )
              goto LABEL_11;
          }
          v7 = &SchedulerSharedDataSlot[v5];
          if ( v7 )
            *v7 = &LdrpModuleDatatableLock;
        }
LABEL_11:
        if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
          RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
        v9 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v9 + 8) != a1 + 160 || (v10 = *(_QWORD **)(a1 + 168), *v10 != a1 + 160) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        v11 = *(_QWORD **)(a1 + 152);
        v12 = (_QWORD *)*v11;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        v13 = *(volatile signed __int32 **)(a1 + 136);
        if ( v13 && v13 != (volatile signed __int32 *)-1LL )
          RtlReleaseActivationContext(v13);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap_0();
        if ( v12 == v11 )
          return LdrpDestroyNode(v11);
      }
    }
  }
  return result;
}
