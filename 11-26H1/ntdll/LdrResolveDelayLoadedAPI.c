/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180105660
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x1801055C4 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180114880 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0 (LdrpHandleUnprotectedDelayLoad.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  void *ForwarderString; // rsi
  int LoadedDllByHandle; // eax
  char *v11; // rbx
  int v12; // eax
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-38h] BYREF

  BaseAddress[0] = 0LL;
  ForwarderString = 0LL;
  if ( ((Flags & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & Flags) == 0)
    && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(
                          ParentModuleBase,
                          (__int64 *)BaseAddress,
                          0LL,
                          (char *)FailureSystemHook);
    if ( LoadedDllByHandle < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        1347,
        (__int64)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        ParentModuleBase,
        LoadedDllByHandle);
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v11 = (char *)BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - *((_QWORD *)BaseAddress[0] + 6) < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)LdrpHandleProtectedDelayload(
                                      (__int64)BaseAddress[0],
                                      (__int64)DelayloadDescriptor,
                                      (__int64)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (char *)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(
                                      (int)BaseAddress[0],
                                      (int)DelayloadDescriptor,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(
                      (char *)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase);
              if ( v12 < 0 )
                LdrpLogInternal(
                  "minkernel\\ldr\\ldrdload.c",
                  1325,
                  (__int64)"LdrResolveDelayLoadedAPI",
                  0,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  ParentModuleBase,
                  v12);
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return ForwarderString;
}
