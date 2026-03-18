/*
 * XREFs of ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1403E287C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027E5C8 (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 *     ?_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@XZ @ 0x14027E66C (-_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA-AW4_D3DKMT_DISPLAY_TARGET_US.c)
 *     ?_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027E6D0 (-_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_U.c)
 *     ?_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEAW4_DXGK_DISPLAY_USAGE@@PEA_N2@Z @ 0x14041A8B8 (-_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEA.c)
 */

char __fastcall DxgMonitor::MonitorUsageState::_EvaluateUsageState(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  char v4; // di
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  bool v10; // [rsp+30h] [rbp-10h] BYREF
  int v11[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v12; // [rsp+70h] [rbp+30h] BYREF
  bool v13; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304897) && !*((_DWORD *)this + 4) )
  {
    v11[0] = 0;
    v12 = 1;
    v10 = 0;
    v13 = 1;
    if ( (int)DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
                this,
                a2,
                (enum _DXGK_DISPLAY_USAGE *)&v12,
                &v10,
                &v13) < 0 )
    {
      if ( g_OSTestSigningEnabled )
        v11[0] = DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry((__int64)this);
    }
    else
    {
      if ( (unsigned __int8)(v12 - 2) <= 1u )
        v5 = 1;
      else
        v5 = !v13 ? 2 : 0;
      v11[0] = v5;
    }
    DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)v11);
    v8 = v11[0];
    if ( v11[0] != *((_DWORD *)this + 4) )
    {
      v4 = 1;
      *((_BYTE *)this + 20) = v10;
      *((_DWORD *)this + 4) = v8;
      DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore((__int64)this, v8, v6, v7);
    }
  }
  return v4;
}
