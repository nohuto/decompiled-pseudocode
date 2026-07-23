/*
 * XREFs of LdrpDereferenceModule @ 0x18003F390
 * Callers:
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180016FA0 (TppExecuteWaitCallback.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandle @ 0x18003B540 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrGetDllFullName @ 0x18003D1A0 (LdrGetDllFullName.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrGetDllHandleByName @ 0x18007BCD0 (LdrGetDllHandleByName.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllHandleByMapping @ 0x18007D850 (LdrGetDllHandleByMapping.c)
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     LdrFindEntryForAddress @ 0x1800C38D0 (LdrFindEntryForAddress.c)
 *     LdrAddRefDll @ 0x1800C3BF0 (LdrAddRefDll.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpFreeReplacedModule @ 0x1800C4CCC (LdrpFreeReplacedModule.c)
 *     LdrDisableThreadCalloutsForDll @ 0x1800DDF20 (LdrDisableThreadCalloutsForDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     LdrpEnclaveFreeModule @ 0x1801394AC (LdrpEnclaveFreeModule.c)
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 *     LdrIsModuleSxsRedirected @ 0x18015B9B0 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x18015B9F0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x18015BAA0 (LdrSetImplicitPathOptions.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     LdrpReleaseTlsEntry @ 0x1800C1840 (LdrpReleaseTlsEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x1800E3FA0 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 */

int __fastcall LdrpDereferenceModule(char *BaseAddress)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  char **v9; // r8
  PVOID *v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  _ACTIVATION_CONTEXT *v13; // rcx

  v2 = (__int64 *)*((_QWORD *)BaseAddress + 19);
  LODWORD(v3) = *((_DWORD *)v2 + 6);
  if ( (_DWORD)v3 != -1 )
  {
    v3 = *v2;
    if ( (*(_DWORD *)(*v2 - 56) & 0x20) == 0 )
    {
      LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF);
      if ( (_DWORD)v3 == 1 )
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
          RtlpAcquireSRWLockExclusiveContended(
            (volatile signed __int64 *)&LdrpModuleDatatableLock,
            (unsigned __int64)SchedulerSharedDataSlot);
        v9 = (char **)*((_QWORD *)BaseAddress + 20);
        if ( v9[1] != BaseAddress + 160 || (v10 = (PVOID *)*((_QWORD *)BaseAddress + 21), *v10 != BaseAddress + 160) )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = (char *)v10;
        v11 = (_QWORD *)*((_QWORD *)BaseAddress + 19);
        v12 = (_QWORD *)*v11;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)BaseAddress + 55) )
          LdrpReleaseTlsEntry(BaseAddress, 0LL);
        LdrpUnmapModule(BaseAddress);
        v13 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 17);
        if ( v13 && v13 != (_ACTIVATION_CONTEXT *)-1LL )
          RtlReleaseActivationContext(v13);
        if ( *((_QWORD *)BaseAddress + 10) )
          LdrpFreeUnicodeString(BaseAddress + 72);
        LODWORD(v3) = RtlFreeHeap_0(LdrpHeap, 0, BaseAddress);
        if ( v12 == v11 )
          LODWORD(v3) = LdrpDestroyNode(v11);
      }
    }
  }
  return v3;
}
