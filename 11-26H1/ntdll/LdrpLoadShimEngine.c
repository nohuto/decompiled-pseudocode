/*
 * XREFs of LdrpLoadShimEngine @ 0x1800C3CD8
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpInitializeShimDllDependencies @ 0x180118DCC (LdrpInitializeShimDllDependencies.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1801196CC (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // r15
  int v4; // eax
  char *v5; // rbx
  PVOID v6; // rcx
  int v7; // eax
  unsigned __int32 v8; // esi
  __int64 v9; // rdi
  __int64 i; // rax
  __int64 *v11; // rbx
  __int64 v13; // [rsp+38h] [rbp-89h]
  PVOID BaseAddress; // [rsp+48h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v16[128]; // [rsp+68h] [rbp-59h] BYREF

  memset_thunk_772440563353939046(v16, 0, 0x80uLL);
  BaseAddress = 0LL;
  DestinationString = 0LL;
  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, (__int64)v16);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(__ROR8__(g_pfnSE_ShimDllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = LdrpLoadDll(&DestinationString, (__int64)v16, 1, (__int64)&BaseAddress);
    if ( v4 >= 0 )
    {
      v5 = (char *)BaseAddress;
      v6 = BaseAddress;
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      LdrpPinModule((__int64)v6);
      if ( *(_DWORD *)(*((_QWORD *)v5 + 19) + 56LL) == 7 )
      {
        v7 = LdrpInitializeNode();
        v8 = v7;
        if ( v7 < 0 )
        {
          LODWORD(v13) = v7;
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            3408,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &DestinationString,
            v13);
          v2 = 0;
          LdrpInitializationFailure(v8);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
          break;
        }
      }
      v3(*((_QWORD *)v5 + 6));
      LdrpDereferenceModule(v5);
    }
    else
    {
      LODWORD(v13) = v4;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        3382,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &DestinationString,
        v13);
      v2 = 0;
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v16);
  ((void (*)(void))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))();
  v9 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801CA8D0; (__int64 *)i != &qword_1801CA8D0; i = *(_QWORD *)i )
      *(_BYTE *)(i + 105) &= ~8u;
  }
  v11 = (__int64 *)qword_1801CA8D0;
  if ( LdrInitState >= 2 )
    goto LABEL_19;
  while ( 1 )
  {
    v11 = (__int64 *)*v11;
LABEL_19:
    if ( v11 == &qword_1801CA8D0 )
      break;
    LdrpSendShimEngineInitialNotifications(v11[19], v9);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
