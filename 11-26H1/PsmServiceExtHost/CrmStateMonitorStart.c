/*
 * XREFs of CrmStateMonitorStart @ 0x180048F00
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x180048320 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorNetworkStart @ 0x18006A9F8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006BC24 (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorWNFStart @ 0x18006BCB4 (CrmStateMonitorWNFStart.c)
 *     CrmLogStateMonitorStart @ 0x18006EC1C (CrmLogStateMonitorStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180076034 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180076194 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180076560 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18007660C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x1800766E8 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800767D4 (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x180076984 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180076A7C (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180076B94 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180076CBC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180076D94 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180076DFC (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorResourceUsageStart @ 0x180076FEC (CrmStateMonitorResourceUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180077288 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTestStart @ 0x180077374 (CrmStateMonitorTestStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x1800774A4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x1800775B4 (CrmStateMonitorTimeSinceLogonStart.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorStart(_QWORD *CallerContext, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  GUID *v9; // rdx
  int ready; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  const void *v17; // r9
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  _BYTE v40[40]; // [rsp+20h] [rbp-30h] BYREF

  v4 = 0;
  CallerContext[6] = MEMORY[0x7FFE0008];
  v5 = *(_DWORD *)CallerContext;
  if ( v5 <= 21 )
  {
    if ( v5 == 21 )
    {
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v40);
      goto LABEL_96;
    }
    if ( v5 <= 10 )
    {
      if ( v5 != 10 )
      {
        if ( v5 <= 5 )
        {
          if ( v5 == 5 )
          {
            v9 = &GUID_BATTERY_PERCENTAGE_REMAINING;
            goto LABEL_14;
          }
          if ( !v5 || (v6 = v5 - 1) == 0 )
          {
            ready = CrmStateMonitorTestStart(CallerContext);
            goto LABEL_96;
          }
          v7 = v6 - 1;
          if ( !v7 )
          {
            ready = CrmStateMonitorCompositeTestStart(CallerContext, v40);
            goto LABEL_96;
          }
          v8 = v7 - 1;
          if ( !v8 )
          {
            v9 = &GUID_GLOBAL_USER_PRESENCE;
            goto LABEL_14;
          }
          if ( v8 == 1 )
          {
            v9 = &GUID_ACDC_POWER_SOURCE;
LABEL_14:
            ready = CrmStateMonitorPowerSettingsStart(CallerContext, v9, a3, v40);
            goto LABEL_96;
          }
          goto LABEL_91;
        }
        v11 = v5 - 6;
        if ( !v11 )
        {
          v9 = &GUID_CONSOLE_DISPLAY_STATE;
          goto LABEL_14;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v9 = &GUID_POWER_SAVING_STATUS;
          goto LABEL_14;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v9 = &GUID_LOW_POWER_EPOCH;
          goto LABEL_14;
        }
        if ( v13 == 1 )
        {
          v14 = WNF_RM_GAME_MODE_ACTIVE;
          goto LABEL_23;
        }
LABEL_91:
        ready = -1073741822;
        goto LABEL_96;
      }
      v15 = 10;
LABEL_28:
      *((_DWORD *)CallerContext + 14) = 0;
      CallerContext[5] = CallerContext + 7;
      v16 = CrmStateMonitorStateSizeGet(v15);
      memcpy_0(v40, v17, v16);
      ready = 0;
      goto LABEL_96;
    }
    if ( v5 <= 16 )
    {
      if ( v5 == 16 )
      {
        v14 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
        goto LABEL_23;
      }
      v18 = v5 - 11;
      if ( !v18 )
      {
        ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v40);
        goto LABEL_96;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v40);
        goto LABEL_96;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v14 = WNF_SEB_INTERNET_PRESENT;
        goto LABEL_23;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v14 = WNF_SEB_FREE_NETWORK_PRESENT;
        goto LABEL_23;
      }
      if ( v21 == 1 )
      {
        v14 = WNF_SEB_IP_ADDRESS_AVAILABLE;
        goto LABEL_23;
      }
      goto LABEL_91;
    }
    v22 = v5 - 17;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        ready = CrmStateMonitorNetworkStart(CallerContext, v40);
        goto LABEL_96;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        ready = CrmStateMonitorPostShellReadyStart(CallerContext, v40);
        goto LABEL_96;
      }
      if ( v24 == 1 )
      {
        ready = CrmStateMonitorPostResumeStart(CallerContext, v40);
        goto LABEL_96;
      }
      goto LABEL_91;
    }
    v14 = WNF_CNET_NON_CELLULAR_CONNECTED;
LABEL_23:
    ready = CrmStateMonitorWNFStart(CallerContext, v14, v40);
    goto LABEL_96;
  }
  if ( v5 <= 32 )
  {
    if ( v5 == 32 )
    {
      v14 = WNF_SEB_AUDIO_ACTIVITY;
      goto LABEL_23;
    }
    if ( v5 <= 27 )
    {
      if ( v5 == 27 )
      {
        ready = CrmStateMonitorDelayedAcStart(CallerContext, v40);
        goto LABEL_96;
      }
      v25 = v5 - 22;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            ready = CrmStateMonitorCPUUsageStart(CallerContext, v40);
            goto LABEL_96;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v40);
            goto LABEL_96;
          }
          if ( v28 == 1 )
          {
            ready = CrmStateMonitorCsAcDcStart(CallerContext, v40);
            goto LABEL_96;
          }
          goto LABEL_91;
        }
        v14 = WNF_SHEL_LOCKSTATE;
      }
      else
      {
        v14 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
      }
      goto LABEL_23;
    }
    v29 = v5 - 28;
    if ( !v29 )
    {
      v15 = 28;
      goto LABEL_28;
    }
    v30 = v29 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v40);
          goto LABEL_96;
        }
        goto LABEL_91;
      }
      v14 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
      goto LABEL_23;
    }
    goto LABEL_92;
  }
  if ( v5 <= 38 )
  {
    if ( v5 == 38 )
    {
      v14 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
    }
    else
    {
      v32 = v5 - 33;
      if ( !v32 )
      {
        ready = CrmStateMonitorDelayedCsStart(CallerContext, v40);
        goto LABEL_96;
      }
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( !v34 )
        {
          ready = CrmStateMonitorAcDcDisplayStart((__int64)CallerContext);
          goto LABEL_96;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          ready = CrmStateMonitorAcDcBatteryStart(CallerContext, v40);
          goto LABEL_96;
        }
        if ( v35 == 1 )
        {
          ready = CrmStateMonitorDelayedInternetLossStart(CallerContext, v40);
          goto LABEL_96;
        }
        goto LABEL_91;
      }
      v14 = WNF_SEB_SYSTEM_IDLE;
    }
    goto LABEL_23;
  }
  v36 = v5 - 39;
  if ( v36 )
  {
    v37 = v36 - 1;
    if ( !v37 )
    {
      v14 = WNF_PO_FAN_NOISE_CHANGE;
      goto LABEL_23;
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      v14 = WNF_RM_MEMORY_MONITOR_USAGE_METRICS;
      goto LABEL_23;
    }
    if ( v38 != 1 )
      goto LABEL_91;
LABEL_92:
    ready = CrmStateMonitorResourceUsageStart(CallerContext, v40);
    goto LABEL_96;
  }
  ready = CrmStateMonitorFanNoiseHysteresisStart(CallerContext, v40);
LABEL_96:
  if ( ready < 0 )
    v4 = ready;
  CrmLogStateMonitorStart(CallerContext, v40, v4);
  return v4;
}
