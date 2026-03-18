/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402751FC
 * Callers:
 *     ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F3D4 (-MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273E20 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1403DA974 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rcx
  int EmergentSimulatedTarget; // eax
  int v6; // ecx
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  v4 = *((_QWORD *)this + 3);
  WdLogGlobalForLineNumber = 438;
  EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(*(void *const *)(v4 + 16), (unsigned int *)this + 22);
  v6 = *((_DWORD *)this + 22);
  if ( EmergentSimulatedTarget < 0 )
  {
    if ( v6 != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 452;
    }
  }
  else if ( v6 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 448;
  }
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2);
  result = 0LL;
  *((_BYTE *)this + 21) = 1;
  return result;
}
