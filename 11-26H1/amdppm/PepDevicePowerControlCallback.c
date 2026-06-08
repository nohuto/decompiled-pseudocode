/*
 * XREFs of PepDevicePowerControlCallback @ 0x14000D670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     PepPlatformIdleVeto @ 0x14000BDA4 (PepPlatformIdleVeto.c)
 *     PepProcessorIdleVeto @ 0x14000BE18 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x14000BEC0 (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x14000BFE4 (PepUpdatePlatformState.c)
 *     PepUpdatePerformanceConstraint @ 0x14000D5BC (PepUpdatePerformanceConstraint.c)
 *     PepGetParkingPageInfo @ 0x14003CA80 (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        _QWORD *a2,
        int *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  *a7 = 0LL;
  v7 = *a2 - *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE.Data1 )
    v7 = a2[1] - *(_QWORD *)GUID_PPM_PERF_CONSTRAINT_CHANGE.Data4;
  if ( !v7 )
    return PepUpdatePerformanceConstraint(a1);
  v9 = *a2 - PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE;
  if ( *a2 == PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE )
    v9 = a2[1] + 0xC20B498CB535555LL;
  if ( !v9 )
  {
    if ( a6 >= 0x10 )
    {
      result = PepGetParkingPageInfo(a1, a5);
      if ( result < 0 )
        *a7 = 0LL;
    }
    else
    {
      *a7 = 16LL;
      return -1073741670;
    }
    return result;
  }
  v10 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1 )
    v10 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4;
  if ( !v10 )
  {
    if ( a4 >= 0xC )
      return PepProcessorIdleVeto(a1, (__int64)a3);
    return -1073741789;
  }
  v11 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1 )
    v11 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4;
  if ( !v11 )
  {
    if ( a4 >= 0xC )
      return PepPlatformIdleVeto(a1, a3);
    return -1073741789;
  }
  v12 = *a2 - *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1 )
    v12 = a2[1] - *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4;
  if ( !v12 )
  {
    if ( a4 >= 0xC )
      return PepUpdateIdleState(a1, (unsigned int *)a3);
    return -1073741789;
  }
  v13 = *a2 - *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1 )
    v13 = a2[1] - *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4;
  if ( !v13 )
  {
    if ( a4 >= 0xC )
      return PepUpdatePlatformState(a1, (unsigned int *)a3);
    return -1073741789;
  }
  v14 = *a2 - *(_QWORD *)&GUID_PEP_PPM_WPS_INFORMATION_CHANGE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_PEP_PPM_WPS_INFORMATION_CHANGE.Data1 )
    v14 = a2[1] - *(_QWORD *)GUID_PEP_PPM_WPS_INFORMATION_CHANGE.Data4;
  if ( v14 )
    return -1073741637;
  if ( _InterlockedCompareExchange(&dword_140015FBC, 1, 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        2,
        24,
        (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids);
    }
    return 259;
  }
  else
  {
    if ( byte_140015FC0 && qword_140015FE0 )
      IoQueueWorkItem(qword_140015FE0, PepWpsUpdateWorker, DelayedWorkQueue, 0LL);
    return 0;
  }
}
