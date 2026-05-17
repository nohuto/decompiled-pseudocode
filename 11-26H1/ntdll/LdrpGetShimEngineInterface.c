/*
 * XREFs of LdrpGetShimEngineInterface @ 0x18011DA94
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1801180E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddressEx @ 0x180085BD0 (LdrGetProcedureAddressEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitAnsiString @ 0x1800D5DB0 (RtlInitAnsiString.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  size_t v0; // rax
  int ProcedureAddressForCaller; // ebx
  int ProcedureAddress; // eax
  char v3; // cl
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+40h] [rbp-19h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h] BYREF
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp-1h] BYREF
  __int64 v13; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+80h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  DestinationString.Buffer = "SE_InitializeEngine";
  v0 = strlen("SE_InitializeEngine");
  if ( v0 >= 0xFFFF )
    LOWORD(v0) = -2;
  DestinationString.Length = v0;
  DestinationString.MaximumLength = v0 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                g_pShimEngineModule,
                                (const void **)&DestinationString,
                                0,
                                &v19,
                                0,
                                retaddr);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_ShimDllLoaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v20, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_InstallBeforeInit");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v21, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_InstallAfterInit");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v22, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_DllLoaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v9, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_DllUnloaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v10, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_LdrEntryRemoved");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v11, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&DestinationString, "SE_ProcessDying");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v12, 0);
  if ( ProcedureAddressForCaller < 0
    || (RtlInitAnsiString(&DestinationString, "SE_LdrResolveDllName"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(
                                      g_pShimEngineModule,
                                      (int)&DestinationString,
                                      0,
                                      (int)&v14,
                                      0),
        ProcedureAddressForCaller < 0)
    || (RtlInitAnsiString(&DestinationString, "SE_GetProcAddressForCaller"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(
                                      g_pShimEngineModule,
                                      (int)&DestinationString,
                                      0,
                                      (int)&v13,
                                      0),
        ProcedureAddressForCaller < 0)
    || (RtlInitAnsiString(&DestinationString, "ApphelpCheckModule"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(
                                      g_pShimEngineModule,
                                      (int)&DestinationString,
                                      0,
                                      (int)&v15,
                                      0),
        ProcedureAddressForCaller < 0) )
  {
LABEL_21:
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      3310,
      (__int64)"LdrpGetShimEngineInterface",
      0,
      "Could not locate procedure \"%s\" in the shim engine DLL\n",
      DestinationString.Buffer);
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule, v4, v5, v6);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    RtlInitAnsiString(&DestinationString, "ApphelpQueryModSettingsAlloc");
    LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v16, 0);
    RtlInitAnsiString(&DestinationString, "ApphelpQueryModSettings2Alloc");
    ProcedureAddress = LdrGetProcedureAddressEx(g_pShimEngineModule, (int)&DestinationString, 0, (int)&v17, 0);
    ProcedureAddressForCaller = 0;
    if ( ProcedureAddress >= 0 )
      ProcedureAddressForCaller = ProcedureAddress;
    LdrProtectMrdata(0);
    v3 = MEMORY[0x7FFE0330] & 0x3F;
    g_pfnSE_InitializeEngine = __ROR8__(v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__(v20 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__(v21 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__(v22 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__(v15 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    if ( v16 )
      g_pfnApphelpQueryModSettingsAllocProc = __ROR8__(v16 ^ MEMORY[0x7FFE0330], v3);
    if ( v17 )
      g_pfnApphelpQueryModSettings2AllocProc = __ROR8__(v17 ^ MEMORY[0x7FFE0330], v3);
    LdrProtectMrdata(1);
  }
  return (unsigned int)ProcedureAddressForCaller;
}
