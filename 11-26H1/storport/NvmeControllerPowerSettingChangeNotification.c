/*
 * XREFs of NvmeControllerPowerSettingChangeNotification @ 0x140127220
 * Callers:
 *     NvmePowerSettingCallback @ 0x14012A580 (NvmePowerSettingCallback.c)
 * Callees:
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x14003BCE8 (NvmeControllerUpdateResumeLatencyTolerance.c)
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400D149C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NvmeControllerPowerSettingChangeNotification(union _SLIST_HEADER *a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = 0;
  v5 = *(_QWORD *)(a1[8].Alignment + 160);
  if ( *(_BYTE *)v5 == 1 )
  {
    if ( a2 && *(_DWORD *)(a2 + 24) == 4 )
    {
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4 )
      {
        *(_DWORD *)(v5 + 196) = **(_DWORD **)(a2 + 16);
        NvmeControllerUpdateResumeLatencyTolerance((__int64)a1);
        return 0LL;
      }
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4 )
      {
        if ( *(_DWORD *)(a1[65].Region + 52) == -1 )
        {
          result = 0LL;
          *(_DWORD *)(v5 + 200) = **(_DWORD **)(a2 + 16);
          return result;
        }
      }
      else
      {
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4 )
        {
          *(_DWORD *)(v5 + 204) = **(_DWORD **)(a2 + 16);
          NvmeControllerUpdateResumeLatencyTolerance((__int64)a1);
          return 0LL;
        }
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4 )
        {
          result = 0LL;
          *(_DWORD *)(v5 + 208) = **(_DWORD **)(a2 + 16);
          return result;
        }
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_NOPPME.Data4
          && (!(unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline()
           || *(_DWORD *)(a1[8].Alignment + 84) == 1) )
        {
          NvmeSetNonOperationalPowerStatePermissiveMode(a1, **(_BYTE **)(a2 + 16));
          return 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
