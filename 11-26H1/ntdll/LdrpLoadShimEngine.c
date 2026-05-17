/*
 * XREFs of LdrpLoadShimEngine @ 0x1800C6518
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     LdrpInitializationFailure @ 0x1800CDD30 (LdrpInitializationFailure.c)
 *     LdrpInitializeShimDllDependencies @ 0x18011901C (LdrpInitializeShimDllDependencies.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18011991C (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // r14
  void (__fastcall *v3)(_QWORD); // r15
  int Dll; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 i; // rax
  __int64 *v12; // rbx
  __int64 v14; // [rsp+38h] [rbp-89h]
  __int64 v15; // [rsp+48h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v17[128]; // [rsp+68h] [rbp-59h] BYREF

  memset_thunk_772440563353939046(v17, 0, 0x80uLL);
  v15 = 0LL;
  DestinationString = 0LL;
  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, (__int64)v17);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(__ROR8__(g_pfnSE_ShimDllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll(&DestinationString.Length, (__int64)v17, 1, (__int64)&v15);
    if ( Dll >= 0 )
    {
      v6 = v15;
      v7 = v15;
      *(_DWORD *)(v15 + 104) |= 0x100u;
      LdrpPinModule(v7, v5);
      if ( *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL) == 7 )
      {
        v8 = LdrpInitializeNode();
        v9 = v8;
        if ( v8 < 0 )
        {
          LODWORD(v14) = v8;
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrinit.c",
            3408,
            (__int64)"LdrpLoadShimEngine",
            0,
            "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
            &DestinationString,
            v14);
          v2 = 0;
          LdrpInitializationFailure(v9);
          ZwTerminateProcess(-1LL, v9);
          break;
        }
      }
      v3(*(_QWORD *)(v6 + 48));
      LdrpDereferenceModule(v6);
    }
    else
    {
      LODWORD(v14) = Dll;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        3382,
        (__int64)"LdrpLoadShimEngine",
        0,
        "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
        &DestinationString,
        v14);
      v2 = 0;
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  LdrpReleaseDllPath((__int64)v17);
  ((void (*)(void))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))();
  v10 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_1801CB890; (__int64 *)i != &qword_1801CB890; i = *(_QWORD *)i )
      *(_BYTE *)(i + 105) &= ~8u;
  }
  v12 = (__int64 *)qword_1801CB890;
  if ( LdrInitState >= 2 )
    goto LABEL_19;
  while ( 1 )
  {
    v12 = (__int64 *)*v12;
LABEL_19:
    if ( v12 == &qword_1801CB890 )
      break;
    LdrpSendShimEngineInitialNotifications(v12[19], v10);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
