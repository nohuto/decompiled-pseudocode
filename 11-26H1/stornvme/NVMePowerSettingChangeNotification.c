/*
 * XREFs of NVMePowerSettingChangeNotification @ 0x14000FC80
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1400085A0 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x14002ABD0 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

char __fastcall NVMePowerSettingChangeNotification(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (a1[400] & 1) != 0 )
  {
    v3 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1 )
      v3 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4;
    v4 = (_DWORD *)(a2 + 24);
    if ( v3 || *v4 != 4 )
    {
      v5 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1 )
        v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4;
      if ( v5 || *v4 != 4 )
      {
        v6 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1;
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1 )
          v6 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4;
        if ( v6 || *v4 != 4 )
        {
          v7 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1;
          if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1 )
            v7 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4;
          if ( !v7 )
          {
            if ( *v4 == 4 )
            {
              a1[409] = **(_DWORD **)(a2 + 16);
              return 1;
            }
            v4 = (_DWORD *)(a2 + 24);
          }
          v8 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1;
          if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1 )
            v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_NOPPME.Data4;
          if ( !v8 && *v4 == 4 )
            NVMeSetNonOperationalPowerStatePermissiveMode(a1, **(unsigned __int8 **)(a2 + 16));
        }
        else
        {
          a1[408] = **(_DWORD **)(a2 + 16);
          NVMeUpdateResumeLatencyTolerance((__int64)a1);
        }
      }
      else if ( a1[21] == -1 )
      {
        a1[407] = **(_DWORD **)(a2 + 16);
      }
    }
    else
    {
      a1[406] = **(_DWORD **)(a2 + 16);
      NVMeUpdateResumeLatencyTolerance((__int64)a1);
    }
  }
  return 1;
}
