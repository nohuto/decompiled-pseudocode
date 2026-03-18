/*
 * XREFs of ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x140273BEC
 * Callers:
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140275070 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1402752AC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140275598 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_AddTargetIntoPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  __int64 v3; // rax
  MONITOR_MGR *v4; // rcx
  unsigned int v5; // edx
  int result; // eax
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  unsigned int ValueData; // [rsp+30h] [rbp-9h] BYREF
  PCWSTR Path; // [rsp+38h] [rbp-1h] BYREF
  WCHAR ValueName[32]; // [rsp+40h] [rbp+7h] BYREF

  ValueData = a2;
  v3 = WdLogNewEntry5_WdTrace(this, a2);
  v4 = (MONITOR_MGR *)ValueData;
  *(_QWORD *)(v3 + 24) = ValueData;
  v5 = ValueData;
  WdLogGlobalForLineNumber = 4037;
  if ( ValueData == -1 )
  {
    WdLogSingleEntry0(1LL);
    v5 = -1;
    WdLogGlobalForLineNumber = 4041;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v4, v5, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20006u, (void **)&Path);
    if ( result >= 0 )
    {
      v7 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v7 = Path;
        WdLogGlobalForLineNumber = 4069;
      }
      v8 = RtlWriteRegistryValue(0x40000000u, v7, ValueName, 4u, &ValueData, 4u);
      v9 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(2LL, ValueData, v8);
        WdLogGlobalForLineNumber = 4079;
      }
      ZwClose((HANDLE)Path);
      return v9;
    }
  }
  return result;
}
