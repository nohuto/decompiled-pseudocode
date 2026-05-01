/*
 * XREFs of CrmStateMonitorCleanup @ 0x180076260
 * Callers:
 *     CrmStateMonitorListenerRemove @ 0x1800227B0 (CrmStateMonitorListenerRemove.c)
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006AD54 (CrmStateMonitorFanNoiseHysteresisCleanup.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x180075FE4 (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x1800760A4 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x1800760F4 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x180076510 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x1800765BC (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x180076674 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x180076760 (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x180076910 (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x180076A2C (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180076ADC (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180076C04 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180076D44 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x180076EB8 (CrmStateMonitorResourceUsageCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x180077314 (CrmStateMonitorTestCleanup.c)
 *     CrmStateMonitorTimeSinceBootCleanup @ 0x18007744C (CrmStateMonitorTimeSinceBootCleanup.c)
 */

char __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void *v8; // rcx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  void *v15; // rcx
  void *v16; // rcx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 > 21 )
  {
    if ( v1 > 32 )
    {
      if ( v1 <= 38 )
      {
        if ( v1 == 38 )
          goto LABEL_26;
        v24 = v1 - 33;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
            goto LABEL_26;
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 == 1 )
                CrmStateMonitorDelayedInternetLossCleanup();
            }
            else
            {
              CrmStateMonitorAcDcBatteryCleanup(a1);
            }
          }
          else
          {
            CrmStateMonitorAcDcDisplayCleanup(a1);
          }
          return CrmLogStateMonitorStop((int *)a1);
        }
LABEL_51:
        CrmStateMonitorDelayedCsCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      }
      v28 = v1 - 39;
      if ( !v28 )
      {
        CrmStateMonitorFanNoiseHysteresisCleanup(a1);
        return CrmLogStateMonitorStop((int *)a1);
      }
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_26;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_26;
      if ( v30 != 1 )
        return CrmLogStateMonitorStop((int *)a1);
    }
    else
    {
      if ( v1 == 32 )
        goto LABEL_26;
      if ( v1 <= 27 )
      {
        if ( v1 == 27 )
        {
          CrmStateMonitorDelayedAcCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        v17 = v1 - 22;
        if ( !v17 )
          goto LABEL_26;
        v18 = v17 - 1;
        if ( !v18 )
          goto LABEL_26;
        v19 = v18 - 1;
        if ( !v19 )
        {
          CrmStateMonitorCPUUsageCleanup(a1);
          return CrmLogStateMonitorStop((int *)a1);
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            CrmStateMonitorCsAcDcCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        goto LABEL_51;
      }
      v21 = v1 - 28;
      if ( !v21 )
        return CrmLogStateMonitorStop((int *)a1);
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
          goto LABEL_26;
        if ( v23 == 1 )
          CrmStateMonitorDisconnectedStandbyCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      }
    }
    CrmStateMonitorResourceUsageCleanup();
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( v1 == 21 )
  {
    CrmStateMonitorPowerConstrainedCleanup();
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( v1 <= 10 )
  {
    if ( v1 == 10 )
      return CrmLogStateMonitorStop((int *)a1);
    if ( v1 <= 5 )
    {
      if ( v1 != 5 )
      {
        if ( !v1 || (v3 = v1 - 1) == 0 )
        {
          CrmStateMonitorTestCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        v4 = v3 - 1;
        if ( !v4 )
        {
          CrmStateMonitorCompositeTestCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        if ( (unsigned int)(v4 - 1) >= 2 )
          return CrmLogStateMonitorStop((int *)a1);
      }
      goto LABEL_17;
    }
    v5 = v1 - 6;
    if ( !v5 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
    {
LABEL_17:
      v8 = *(void **)(a1 + 64);
      if ( v8 )
        PowerSettingUnregisterNotification(v8);
      return CrmLogStateMonitorStop((int *)a1);
    }
    goto LABEL_25;
  }
  if ( v1 <= 16 )
  {
    if ( v1 != 16 )
    {
      v9 = v1 - 11;
      if ( !v9 || (v10 = v9 - 1) == 0 )
      {
        CrmStateMonitorTimeSinceBootCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v7 = v11 - 1;
        if ( v7 )
        {
LABEL_25:
          if ( v7 != 1 )
            return CrmLogStateMonitorStop((int *)a1);
        }
      }
    }
LABEL_26:
    if ( *(_QWORD *)(a1 + 88) )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    return CrmLogStateMonitorStop((int *)a1);
  }
  v12 = v1 - 17;
  if ( !v12 )
    goto LABEL_26;
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
        CrmStateMonitorPostResumeCleanup();
    }
    else
    {
      CrmStateMonitorPostShellReadyCleanup();
    }
  }
  else
  {
    v15 = *(void **)(a1 + 64);
    if ( v15 )
      CancelMibChangeNotify2(v15);
    v16 = *(void **)(a1 + 72);
    if ( v16 )
      CancelMibChangeNotify2(v16);
  }
  return CrmLogStateMonitorStop((int *)a1);
}
