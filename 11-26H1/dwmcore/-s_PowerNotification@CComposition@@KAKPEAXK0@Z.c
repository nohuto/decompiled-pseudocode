/*
 * XREFs of ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1801D1120
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1801D1194 (-UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18022B3C0 (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x18022B414 (-UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z.c)
 *     ?UpdateEnergySaverState@CComposition@@IEAAX_N@Z @ 0x18022B4F8 (-UpdateEnergySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18022B740 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@.c)
 */

__int64 __fastcall CComposition::s_PowerNotification(CComposition *a1, __int64 a2, void *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  CComposition *v10; // rcx
  __int64 v11; // rax
  bool v12; // dl

  v4 = *(_QWORD *)a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    v4 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
  v5 = 0;
  if ( !v4 )
    goto LABEL_4;
  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 )
    v7 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)a3 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v8 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)a3 - *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 )
        v9 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4;
      if ( v9 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetImpl'::`2'::impl) )
        {
          v11 = *(_QWORD *)a3 - *(_QWORD *)&GUID_ENERGY_SAVER_STATUS.Data1;
          if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_ENERGY_SAVER_STATUS.Data1 )
            v11 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_ENERGY_SAVER_STATUS.Data4;
          if ( !v11 )
          {
            v12 = 1;
            if ( *((_DWORD *)a3 + 5) != 1 )
              v12 = *((_DWORD *)a3 + 5) == 2;
            if ( g_pComposition )
              CComposition::UpdateEnergySaverState(v10, v12);
          }
        }
      }
      else if ( g_pComposition )
      {
        CComposition::UpdateBatterySaverState(a1, *((_DWORD *)a3 + 5) == 1);
      }
    }
    else if ( g_pComposition )
    {
      LOBYTE(v5) = *((_DWORD *)a3 + 5) == 1;
      CComposition::UpdateConnectedStandbyState(a1, v5);
    }
  }
  else
  {
LABEL_4:
    if ( g_pComposition )
      CComposition::UpdateMonitorPowerState(a1, *((enum _MONITOR_DISPLAY_STATE *)a3 + 5));
  }
  return 0LL;
}
