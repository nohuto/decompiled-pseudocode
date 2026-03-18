/*
 * XREFs of ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1402743DC
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140275070 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1402752AC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140275598 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

int __fastcall MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(MONITOR_MGR *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  MONITOR_MGR *v5; // rcx
  int result; // eax
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  PCWSTR Path; // [rsp+20h] [rbp-68h] BYREF
  WCHAR ValueName[32]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = (unsigned int)a2;
  WdLogGlobalForLineNumber = 4114;
  if ( v2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4118;
  }
  result = MONITOR_MGR::_PersistencyRegNameFromTargetID(v5, v2, ValueName);
  if ( result >= 0 )
  {
    Path = 0LL;
    result = MONITOR_MGR::_OpenPersistencyRegistry(this, 0xF003Fu, (void **)&Path);
    if ( result >= 0 )
    {
      v7 = Path;
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        v7 = Path;
        WdLogGlobalForLineNumber = 4146;
      }
      v8 = RtlDeleteRegistryValue(0x40000000u, v7, ValueName);
      v9 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry2(2LL, v4, v8);
        WdLogGlobalForLineNumber = 4157;
      }
      ZwClose((HANDLE)Path);
      return v9;
    }
  }
  return result;
}
