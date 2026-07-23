/*
 * XREFs of LdrpGetShimEngineInterface @ 0x18011D844
 * Callers:
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180117E90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x1801180CC (LdrpInitShimEngine.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddressEx @ 0x18007CF70 (LdrGetProcedureAddressEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitAnsiString @ 0x1800D2D70 (RtlInitAnsiString.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  size_t v0; // rax
  NTSTATUS ProcedureAddressForCaller; // ebx
  NTSTATUS v2; // eax
  char v3; // cl
  _STRING ProcedureName; // [rsp+30h] [rbp-29h] BYREF
  PVOID v6; // [rsp+40h] [rbp-19h] BYREF
  PVOID v7; // [rsp+48h] [rbp-11h] BYREF
  PVOID v8; // [rsp+50h] [rbp-9h] BYREF
  PVOID v9; // [rsp+58h] [rbp-1h] BYREF
  PVOID v10; // [rsp+60h] [rbp+7h] BYREF
  PVOID v11; // [rsp+68h] [rbp+Fh] BYREF
  PVOID v12; // [rsp+70h] [rbp+17h] BYREF
  PVOID v13; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID v14; // [rsp+80h] [rbp+27h] BYREF
  PVOID *Callback; // [rsp+B8h] [rbp+5Fh]
  PVOID ProcedureAddress; // [rsp+C0h] [rbp+67h] BYREF
  PVOID v17; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID v18; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v19; // [rsp+D8h] [rbp+7Fh] BYREF

  ProcedureAddress = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  *(_DWORD *)(&ProcedureName.MaximumLength + 1) = 0;
  ProcedureName.Buffer = "SE_InitializeEngine";
  v0 = strlen("SE_InitializeEngine");
  if ( v0 >= 0xFFFF )
    LOWORD(v0) = -2;
  ProcedureName.Length = v0;
  ProcedureName.MaximumLength = v0 + 1;
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                g_pShimEngineModule,
                                &ProcedureName,
                                0,
                                &ProcedureAddress,
                                0,
                                Callback);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_ShimDllLoaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v17, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_InstallBeforeInit");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v18, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_InstallAfterInit");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v19, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_DllLoaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v6, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_DllUnloaded");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v7, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_LdrEntryRemoved");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v8, 0);
  if ( ProcedureAddressForCaller < 0 )
    goto LABEL_21;
  RtlInitAnsiString(&ProcedureName, "SE_ProcessDying");
  ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v9, 0);
  if ( ProcedureAddressForCaller < 0
    || (RtlInitAnsiString(&ProcedureName, "SE_LdrResolveDllName"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v11, 0),
        ProcedureAddressForCaller < 0)
    || (RtlInitAnsiString(&ProcedureName, "SE_GetProcAddressForCaller"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v10, 0),
        ProcedureAddressForCaller < 0)
    || (RtlInitAnsiString(&ProcedureName, "ApphelpCheckModule"),
        ProcedureAddressForCaller = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v12, 0),
        ProcedureAddressForCaller < 0) )
  {
LABEL_21:
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3310,
      (__int64)"LdrpGetShimEngineInterface",
      0,
      "Could not locate procedure \"%s\" in the shim engine DLL\n",
      ProcedureName.Buffer);
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0LL;
  }
  else
  {
    RtlInitAnsiString(&ProcedureName, "ApphelpQueryModSettingsAlloc");
    LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v13, 0);
    RtlInitAnsiString(&ProcedureName, "ApphelpQueryModSettings2Alloc");
    v2 = LdrGetProcedureAddressEx(g_pShimEngineModule, &ProcedureName, 0, &v14, 0);
    ProcedureAddressForCaller = 0;
    if ( v2 >= 0 )
      ProcedureAddressForCaller = v2;
    LdrProtectMrdata(0);
    v3 = MEMORY[0x7FFE0330] & 0x3F;
    g_pfnSE_InitializeEngine = __ROR8__(
                                 (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                 MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ShimDllLoaded = __ROR8__((unsigned __int64)v17 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallBeforeInit = __ROR8__((unsigned __int64)v18 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_InstallAfterInit = __ROR8__((unsigned __int64)v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllLoaded = __ROR8__((unsigned __int64)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_DllUnloaded = __ROR8__((unsigned __int64)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrEntryRemoved = __ROR8__((unsigned __int64)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_ProcessDying = __ROR8__((unsigned __int64)v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_GetProcAddressForCaller = __ROR8__((unsigned __int64)v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnSE_LdrResolveDllName = __ROR8__((unsigned __int64)v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    g_pfnApphelpCheckModuleProc = __ROR8__((unsigned __int64)v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    if ( v13 )
      g_pfnApphelpQueryModSettingsAllocProc = __ROR8__((unsigned __int64)v13 ^ MEMORY[0x7FFE0330], v3);
    if ( v14 )
      g_pfnApphelpQueryModSettings2AllocProc = __ROR8__((unsigned __int64)v14 ^ MEMORY[0x7FFE0330], v3);
    LdrProtectMrdata(1);
  }
  return (unsigned int)ProcedureAddressForCaller;
}
